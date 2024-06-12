#include "pch.h"
#include "PassengerDAO.h"
#include "Passenger.h"
using namespace System::Windows::Forms;

void PassengerDAO::createPassenger(Passenger^ pasajero, DataBaseManager^ dbManager) {
    try {
        dbManager->connect();

        String^ query = "INSERT INTO passenger (first_name, last_name, phone, address, birth_date, passport_number) " +
            "VALUES (@firstName, @lastName, @phone, @address, @birthDate, @passportNumber)";
        
        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

        cmd->Parameters->AddWithValue("@firstName", pasajero->FirstName);
        cmd->Parameters->AddWithValue("@lastName", pasajero->LastName);
        cmd->Parameters->AddWithValue("@phone", pasajero->Phone);
        cmd->Parameters->AddWithValue("@address", pasajero->Address);
        cmd->Parameters->AddWithValue("@birthDate", pasajero->BirthDate);
        cmd->Parameters->AddWithValue("@passportNumber", pasajero->PassportNumber);

        cmd->ExecuteNonQuery();

        MessageBox::Show("Pasajero registrado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^ e) {
        MessageBox::Show("Error registrando el pasajero: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        dbManager->disconnect();
    }
}

DataTable^ PassengerDAO::getPassengers(DataBaseManager^ dbManager) {
    DataTable^ dataTable = gcnew DataTable();

    try {
        dbManager->connect();

        String^ query = "SELECT * FROM passenger";

        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

        MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
        adapter->Fill(dataTable);
    }
    catch (Exception^ e) {
        MessageBox::Show("Error al obtener los pasajeros: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        dbManager->disconnect();
    }

    return dataTable;
}

List<Passenger^>^ PassengerDAO::searchPassengers(String^ searchTerm, DataBaseManager^ dbManager) {
    List<Passenger^>^ passengers = gcnew List<Passenger^>();

    try
    {
        dbManager->connect();

        String^ query = "SELECT id, first_name, last_name FROM passenger WHERE CONCAT(first_name, ' ', last_name) LIKE @searchTerm";

        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

        cmd->Parameters->AddWithValue("@searchTerm", "%" + searchTerm + "%");

        MySqlDataReader^ reader = cmd->ExecuteReader();

        while (reader->Read()) {
            int id = reader->GetInt32(0);
            String^ firstName = reader->GetString(1);
            String^ lastName = reader->GetString(2);

            Passenger^ passenger = gcnew Passenger(firstName, lastName, "", "", "", "");
            passenger->Id = id;

            passengers->Add(passenger);
        }

        reader->Close();

        dbManager->disconnect();
    }

    catch (Exception^ e)
    {
        MessageBox::Show("Error al obtener los pasajeros registrados: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

    return passengers;
}

Passenger^ PassengerDAO::getPassengerDetailsForEditting(int passengerId, DataBaseManager^ dbManager) {
    try {
        dbManager->connect();

        String^ query = "SELECT * FROM passenger WHERE id = @id";

        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());
        cmd->Parameters->AddWithValue("@id", passengerId);

        MySqlDataReader^ reader = cmd->ExecuteReader();

        if (reader->Read()) {
            Passenger^ passenger = gcnew Passenger(
                reader["first_name"]->ToString(),
                reader["last_name"]->ToString(),
                reader["phone"]->ToString(),
                reader["address"]->ToString(),
                reader["birth_date"]->ToString(),
                reader["passport_number"]->ToString()
            );

            reader->Close();

            return passenger;
        } 
        else {
            reader->Close();

            throw gcnew Exception("No se encontró el pasajero con el ID especificado.");
        }
    }
    catch (Exception^ e) {
        MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

        return nullptr;
    }
    finally {
        dbManager->disconnect();
    }
}

void PassengerDAO::updatePassenger(Passenger^ passenger, DataBaseManager^ dbManager) {
    try
    {
        dbManager->connect();

        String^ query = "UPDATE passenger SET first_name = @first_name, last_name = @last_name, phone = @phone, "
            + "address = @address, birth_date = @birth_date, passport_number = @passport_number WHERE id = @id";

        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

        cmd->Parameters->AddWithValue("@id", passenger->Id);
        cmd->Parameters->AddWithValue("@first_name", passenger->FirstName);
        cmd->Parameters->AddWithValue("@last_name", passenger->LastName);
        cmd->Parameters->AddWithValue("@phone", passenger->Phone);
        cmd->Parameters->AddWithValue("@address", passenger->Address);
        cmd->Parameters->AddWithValue("@birth_date", passenger->BirthDate);
        cmd->Parameters->AddWithValue("@passport_number", passenger->PassportNumber);

        cmd->ExecuteNonQuery();

        MessageBox::Show("Pasajero actualizado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^ e) {
        MessageBox::Show("Error actualizando el pasajero: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        dbManager->disconnect();
    }
}

void PassengerDAO::deletePassenger(int passengerId, DataBaseManager^ dbManager) {
    try
    {
        dbManager->connect();

        String^ query = "DELETE FROM passenger WHERE id = @id";

        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

        cmd->Parameters->AddWithValue("@id", passengerId);

        cmd->ExecuteNonQuery();

        MessageBox::Show("Pasajero eliminado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^ e) {
        MessageBox::Show("Error eliminando el pasajero: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        dbManager->disconnect();
    }
}

