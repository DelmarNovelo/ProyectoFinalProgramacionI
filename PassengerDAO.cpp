#include "pch.h" // Archivo de inclusión precompilado de Visual Studio
#include "PassengerDAO.h" // Incluir la definición de la clase PassengerDAO
#include "Passenger.h" // Incluir la definición de la clase Passenger

using namespace System::Windows::Forms; // Espacio de nombres para formularios de Windows
using namespace System::Collections::Generic; // Espacio de nombres para usar List y otros tipos de colecciones

void PassengerDAO::createPassenger(Passenger^ pasajero, DataBaseManager^ dbManager) {
    try {
        dbManager->connect(); // Conectar a la base de datos

        // Query para insertar un nuevo pasajero en la tabla 'passenger'
        String^ query = "INSERT INTO passenger (first_name, last_name, phone, address, birth_date, passport_number) " +
            "VALUES (@firstName, @lastName, @phone, @address, @birthDate, @passportNumber)";

        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection()); // Crear un comando MySqlCommand

        // Asignar valores a los parámetros del comando
        cmd->Parameters->AddWithValue("@firstName", pasajero->FirstName);
        cmd->Parameters->AddWithValue("@lastName", pasajero->LastName);
        cmd->Parameters->AddWithValue("@phone", pasajero->Phone);
        cmd->Parameters->AddWithValue("@address", pasajero->Address);
        cmd->Parameters->AddWithValue("@birthDate", pasajero->BirthDate);
        cmd->Parameters->AddWithValue("@passportNumber", pasajero->PassportNumber);

        // Ejecutar el comando para insertar el pasajero en la base de datos
        cmd->ExecuteNonQuery();

        // Mostrar un mensaje de éxito al usuario
        MessageBox::Show("Pasajero registrado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^ e) {
        // Capturar cualquier excepción y mostrar un mensaje de error
        MessageBox::Show("Error registrando el pasajero: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        // Desconectar de la base de datos en el bloque 'finally' para asegurar la limpieza adecuada
        dbManager->disconnect();
    }
}

DataTable^ PassengerDAO::getPassengers(DataBaseManager^ dbManager) {
    DataTable^ dataTable = gcnew DataTable(); // Crear un nuevo DataTable para almacenar los datos de los pasajeros

    try {
        dbManager->connect(); // Conectar a la base de datos

        // Query para seleccionar todos los pasajeros de la tabla 'passenger'
        String^ query = "SELECT * FROM passenger";

        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection()); // Crear un comando MySqlCommand

        MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd); // Crear un adaptador MySqlDataAdapter
        adapter->Fill(dataTable); // Llenar el DataTable con los datos obtenidos

        // No es necesario desconectar explícitamente aquí porque el DataTable se llena y se devuelve de inmediato
    }
    catch (Exception^ e) {
        // Capturar cualquier excepción y mostrar un mensaje de error
        MessageBox::Show("Error al obtener los pasajeros: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        dbManager->disconnect(); // Desconectar de la base de datos en el bloque 'finally' para asegurar la limpieza adecuada
    }

    return dataTable; // Devolver el DataTable lleno con los datos de los pasajeros
}

List<Passenger^>^ PassengerDAO::searchPassengers(String^ searchTerm, DataBaseManager^ dbManager) {
    List<Passenger^>^ passengers = gcnew List<Passenger^>(); // Crear una lista para almacenar los pasajeros encontrados

    try {
        dbManager->connect(); // Conectar a la base de datos

        // Query para buscar pasajeros cuyos nombres coincidan con el término de búsqueda
        String^ query = "SELECT id, first_name, last_name FROM passenger WHERE CONCAT(first_name, ' ', last_name) LIKE @searchTerm";

        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection()); // Crear un comando MySqlCommand

        cmd->Parameters->AddWithValue("@searchTerm", "%" + searchTerm + "%"); // Asignar valor al parámetro del término de búsqueda

        MySqlDataReader^ reader = cmd->ExecuteReader(); // Ejecutar el comando y obtener un lector de datos MySqlDataReader

        while (reader->Read()) {
            // Leer datos de cada fila y crear objetos Passenger correspondientes
            int id = reader->GetInt32(0); // Obtener el ID del pasajero
            String^ firstName = reader->GetString(1); // Obtener el primer nombre del pasajero
            String^ lastName = reader->GetString(2); // Obtener el apellido del pasajero

            // Crear un objeto Passenger con los datos obtenidos y asignar el ID
            Passenger^ passenger = gcnew Passenger(firstName, lastName, "", "", "", "");
            passenger->Id = id;

            passengers->Add(passenger); // Agregar el pasajero a la lista de pasajeros encontrados
        }

        reader->Close(); // Cerrar el lector de datos después de usarlo

        // No es necesario desconectar explícitamente aquí porque la lista de pasajeros se llena y se devuelve de inmediato
    }
    catch (Exception^ e) {
        // Capturar cualquier excepción y mostrar un mensaje de error
        MessageBox::Show("Error al obtener los pasajeros registrados: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        dbManager->disconnect(); // Desconectar de la base de datos en el bloque 'finally' para asegurar la limpieza adecuada
    }

    return passengers; // Devolver la lista de pasajeros encontrados
}

Passenger^ PassengerDAO::getPassengerDetails(int passengerId, DataBaseManager^ dbManager) {
    try {
        dbManager->connect(); // Conectar a la base de datos

        String^ query = "SELECT * FROM passenger WHERE id = @id"; // Query para obtener los detalles del pasajero por su ID

        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection()); // Crear un comando MySqlCommand
        cmd->Parameters->AddWithValue("@id", passengerId); // Asignar valor al parámetro del ID del pasajero

        MySqlDataReader^ reader = cmd->ExecuteReader(); // Ejecutar la consulta y obtener un lector de datos MySqlDataReader

        if (reader->Read()) {
            // Leer los datos del pasajero y crear un objeto Passenger con los datos obtenidos
            Passenger^ passenger = gcnew Passenger(
                reader["first_name"]->ToString(),
                reader["last_name"]->ToString(),
                reader["phone"]->ToString(),
                reader["address"]->ToString(),
                reader["birth_date"]->ToString(),
                reader["passport_number"]->ToString()
            );

            reader->Close(); // Cerrar el lector de datos después de usarlo

            return passenger; // Devolver el objeto Passenger creado con los detalles del pasajero
        }
        else {
            reader->Close(); // Cerrar el lector de datos si no se encontró ningún pasajero con el ID especificado

            throw gcnew Exception("No se encontró el pasajero con el ID especificado."); // Lanzar una excepción si no se encontró el pasajero
        }
    }
    catch (Exception^ e) {
        // Capturar cualquier excepción durante el proceso y mostrar un mensaje de error
        MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

        return nullptr; // Devolver nullptr en caso de error o si no se encontró el pasajero
    }
    finally {
        dbManager->disconnect(); // Desconectar de la base de datos en el bloque 'finally' para asegurar la limpieza adecuada
    }
}

void PassengerDAO::updatePassenger(Passenger^ passenger, DataBaseManager^ dbManager) {
    try {
        dbManager->connect(); // Conectar a la base de datos

        // Query para actualizar los detalles del pasajero en la tabla 'passenger'
        String^ query = "UPDATE passenger SET first_name = @first_name, last_name = @last_name, phone = @phone, "
            + "address = @address, birth_date = @birth_date, passport_number = @passport_number WHERE id = @id";

        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection()); // Crear un comando MySqlCommand

        // Asignar valores a los parámetros del comando con los nuevos detalles del pasajero
        cmd->Parameters->AddWithValue("@id", passenger->Id);
        cmd->Parameters->AddWithValue("@first_name", passenger->FirstName);
        cmd->Parameters->AddWithValue("@last_name", passenger->LastName);
        cmd->Parameters->AddWithValue("@phone", passenger->Phone);
        cmd->Parameters->AddWithValue("@address", passenger->Address);
        cmd->Parameters->AddWithValue("@birth_date", passenger->BirthDate);
        cmd->Parameters->AddWithValue("@passport_number", passenger->PassportNumber);

        cmd->ExecuteNonQuery(); // Ejecutar la consulta para actualizar los detalles del pasajero

        // Mostrar un mensaje de éxito al usuario después de actualizar el pasajero
        MessageBox::Show("Pasajero actualizado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^ e) {
        // Capturar cualquier excepción durante el proceso y mostrar un mensaje de error
        MessageBox::Show("Error actualizando el pasajero: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        dbManager->disconnect(); // Desconectar de la base de datos en el bloque 'finally' para asegurar la limpieza adecuada
    }
}

void PassengerDAO::deletePassenger(int passengerId, DataBaseManager^ dbManager) {
    try {
        dbManager->connect(); // Conectar a la base de datos

        // Query para eliminar el pasajero de la tabla 'passenger' por su ID
        String^ query = "DELETE FROM passenger WHERE id = @id";

        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection()); // Crear un comando MySqlCommand

        cmd->Parameters->AddWithValue("@id", passengerId); // Asignar valor al parámetro del ID del pasajero

        cmd->ExecuteNonQuery(); // Ejecutar la consulta para eliminar el pasajero de la base de datos

        // Mostrar un mensaje de éxito al usuario después de eliminar el pasajero
        MessageBox::Show("Pasajero eliminado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^ e) {
        // Capturar cualquier excepción durante el proceso y mostrar un mensaje de error
        MessageBox::Show("Error eliminando el pasajero: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        dbManager->disconnect(); // Desconectar de la base de datos en el bloque 'finally' para asegurar la limpieza adecuada
    }
}

