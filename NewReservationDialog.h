#pragma once

#include "PassengerDAO.h"
#include "FlightDAO.h"
#include "ReservationDAO.h"
#include "Utils.h"

namespace ProyectoFinalProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NewReservation
	/// </summary>
	public ref class NewReservationDialog : public System::Windows::Forms::Form
	{
	public:
		NewReservationDialog(int flightId)
		{
			InitializeComponent();
			dbManager = gcnew DataBaseManager();
			this->flightId = flightId;
			this->passengerId = 0;
		}
	private:
		int flightId;
		int passengerId;

	private: System::Windows::Forms::ListView^ listResult;
	public:

	private: System::Windows::Forms::TextBox^ searchPassengersTextBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ priceTextBox;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ saveReservationButton;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ fullNameLabel;
	private: System::Windows::Forms::Label^ phoneLabel;
	private: System::Windows::Forms::Label^ passportLabel;
	private: System::Windows::Forms::Label^ addressLabel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ passengerDetailsContainer;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;



	public:

	private:
		DataBaseManager^ dbManager;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~NewReservationDialog()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listResult = (gcnew System::Windows::Forms::ListView());
			this->searchPassengersTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->priceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->saveReservationButton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->fullNameLabel = (gcnew System::Windows::Forms::Label());
			this->phoneLabel = (gcnew System::Windows::Forms::Label());
			this->passportLabel = (gcnew System::Windows::Forms::Label());
			this->addressLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->passengerDetailsContainer = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->passengerDetailsContainer->SuspendLayout();
			this->SuspendLayout();
			// 
			// listResult
			// 
			this->listResult->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listResult->HideSelection = false;
			this->listResult->Location = System::Drawing::Point(11, 94);
			this->listResult->Name = L"listResult";
			this->listResult->Size = System::Drawing::Size(535, 97);
			this->listResult->TabIndex = 1;
			this->listResult->UseCompatibleStateImageBehavior = false;
			this->listResult->View = System::Windows::Forms::View::List;
			this->listResult->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &NewReservationDialog::listResult_ItemSelectionChanged);
			// 
			// searchPassengersTextBox
			// 
			this->searchPassengersTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->searchPassengersTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchPassengersTextBox->Location = System::Drawing::Point(12, 42);
			this->searchPassengersTextBox->Name = L"searchPassengersTextBox";
			this->searchPassengersTextBox->Size = System::Drawing::Size(534, 23);
			this->searchPassengersTextBox->TabIndex = 2;
			this->searchPassengersTextBox->TextChanged += gcnew System::EventHandler(this, &NewReservationDialog::searchPassengers);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Buscar pasajero";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Resultados de búsqueda";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Teal;
			this->label3->Location = System::Drawing::Point(7, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Detalles del pasajero";
			// 
			// priceTextBox
			// 
			this->priceTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->priceTextBox->Location = System::Drawing::Point(12, 435);
			this->priceTextBox->Multiline = true;
			this->priceTextBox->Name = L"priceTextBox";
			this->priceTextBox->Size = System::Drawing::Size(234, 27);
			this->priceTextBox->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 414);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Precio de vuelo:";
			// 
			// saveReservationButton
			// 
			this->saveReservationButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->saveReservationButton->BackColor = System::Drawing::Color::Teal;
			this->saveReservationButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saveReservationButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveReservationButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveReservationButton->ForeColor = System::Drawing::Color::White;
			this->saveReservationButton->Location = System::Drawing::Point(370, 489);
			this->saveReservationButton->Name = L"saveReservationButton";
			this->saveReservationButton->Size = System::Drawing::Size(177, 42);
			this->saveReservationButton->TabIndex = 10;
			this->saveReservationButton->Text = L"Guardar Reservación";
			this->saveReservationButton->UseVisualStyleBackColor = false;
			this->saveReservationButton->Click += gcnew System::EventHandler(this, &NewReservationDialog::saveReservationButton_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Nombre Completo:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(6, 88);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Teléfono:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(6, 121);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 16);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Pasaporte:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(6, 157);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 16);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Dirección:";
			// 
			// fullNameLabel
			// 
			this->fullNameLabel->AutoSize = true;
			this->fullNameLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fullNameLabel->Location = System::Drawing::Point(135, 56);
			this->fullNameLabel->Name = L"fullNameLabel";
			this->fullNameLabel->Size = System::Drawing::Size(68, 17);
			this->fullNameLabel->TabIndex = 15;
			this->fullNameLabel->Text = L"FullName";
			// 
			// phoneLabel
			// 
			this->phoneLabel->AutoSize = true;
			this->phoneLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phoneLabel->Location = System::Drawing::Point(71, 89);
			this->phoneLabel->Name = L"phoneLabel";
			this->phoneLabel->Size = System::Drawing::Size(49, 17);
			this->phoneLabel->TabIndex = 16;
			this->phoneLabel->Text = L"Phone";
			// 
			// passportLabel
			// 
			this->passportLabel->AutoSize = true;
			this->passportLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passportLabel->Location = System::Drawing::Point(80, 121);
			this->passportLabel->Name = L"passportLabel";
			this->passportLabel->Size = System::Drawing::Size(62, 17);
			this->passportLabel->TabIndex = 17;
			this->passportLabel->Text = L"Passport";
			// 
			// addressLabel
			// 
			this->addressLabel->AutoSize = true;
			this->addressLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addressLabel->Location = System::Drawing::Point(79, 157);
			this->addressLabel->Name = L"addressLabel";
			this->addressLabel->Size = System::Drawing::Size(57, 17);
			this->addressLabel->TabIndex = 18;
			this->addressLabel->Text = L"Address";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(11, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(293, 16);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Seleccione un usuario de los resultados de búsqueda";
			// 
			// passengerDetailsContainer
			// 
			this->passengerDetailsContainer->Controls->Add(this->label6);
			this->passengerDetailsContainer->Controls->Add(this->label7);
			this->passengerDetailsContainer->Controls->Add(this->addressLabel);
			this->passengerDetailsContainer->Controls->Add(this->label8);
			this->passengerDetailsContainer->Controls->Add(this->passportLabel);
			this->passengerDetailsContainer->Controls->Add(this->label3);
			this->passengerDetailsContainer->Controls->Add(this->label9);
			this->passengerDetailsContainer->Controls->Add(this->phoneLabel);
			this->passengerDetailsContainer->Controls->Add(this->fullNameLabel);
			this->passengerDetailsContainer->Location = System::Drawing::Point(2, 213);
			this->passengerDetailsContainer->Name = L"passengerDetailsContainer";
			this->passengerDetailsContainer->Size = System::Drawing::Size(545, 198);
			this->passengerDetailsContainer->TabIndex = 20;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(120, 412);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 20);
			this->label10->TabIndex = 21;
			this->label10->Text = L"*";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(10, 489);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(132, 17);
			this->label11->TabIndex = 22;
			this->label11->Text = L"* Campos requeridos";
			// 
			// NewReservationDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(559, 542);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->passengerDetailsContainer);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->saveReservationButton);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->priceTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->searchPassengersTextBox);
			this->Controls->Add(this->listResult);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"NewReservationDialog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Nueva Reservación";
			this->Load += gcnew System::EventHandler(this, &NewReservationDialog::NewReservationDialog_Load);
			this->passengerDetailsContainer->ResumeLayout(false);
			this->passengerDetailsContainer->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void searchPassengers(System::Object^ sender, System::EventArgs^ e) {
		String^ searchTerm = searchPassengersTextBox->Text;
		List<Passenger^>^ passengers = PassengerDAO::searchPassengers(searchTerm, dbManager);

		// Limpiar los elementos actuales del ListView
		listResult->Items->Clear();

		// Agregar los resultados al ListView
		for each (Passenger ^ passenger in passengers) {
			ListViewItem^ item = gcnew ListViewItem(passenger->FullName);
			item->Tag = passenger->Id;
			listResult->Items->Add(item);
		}
	}
private: System::Void listResult_ItemSelectionChanged(System::Object^ sender, System::Windows::Forms::ListViewItemSelectionChangedEventArgs^ e) {
	// // Verificar si hay al menos un elemento seleccionado en el ListView
	if (listResult->SelectedItems->Count > 0) {
		
		// Obtener el primer elemento seleccionado
		ListViewItem^ selectedItem = listResult->SelectedItems[0];

		// Asignar el valor del Tag del elemento seleccionado a la propiedad passengerId, convirtiéndolo a entero
		this->passengerId = (int)selectedItem->Tag;

		// Obtener los detalles del pasajero 
		Passenger^ passenger = PassengerDAO::getPassengerDetails(this->passengerId, dbManager);

		// Actualizar los label del formulario con los detalles del pasajero obtenidos
		fullNameLabel->Text = passenger->FullName;
		phoneLabel->Text = passenger->Phone;
		passportLabel->Text = passenger->PassportNumber;
		addressLabel->Text = passenger->Address;

		// Mostrar el contenedor de los detalles del pasajero
		this->passengerDetailsContainer->Visible = true;
	}
}

	   // Funcion para guardar una nueva reservacion
private: System::Void saveReservationButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		// El id inicial es 0, cambia a un valor mayor a cero cuando se selecciona un pasajero
		if (this->passengerId < 1) {
			throw gcnew Exception("No ha seleccionado ningún pasajero");
		}

		if (String::IsNullOrEmpty(this->priceTextBox->Text->Trim())) {
			throw gcnew Exception("Asigne un precio de vuelo para la reservación");
		}

		// Toma la fecha acutal
		DateTime currentDate = DateTime::Now;

		// Convierte el valor del textbox un tipo de dato double para guardar en la bd
		double price = Utils::ConvertStringToDouble(priceTextBox->Text);

		String^ ticketNumber = Utils::GenarateRandomNumbers(999999, 9999999).ToString();
		String^ booking = Utils::GenarateRandomNumbers(10000, 99999).ToString();

		// Crear una nueva instancia de la clase Reservation con los parámetros proporcionados
		Reservation^ reservation = gcnew Reservation(this->passengerId, this->flightId, price, Utils::FormatDateToyyyyMMdd(currentDate), booking, ticketNumber);

		// Llamar al método insertReservation para insertar la nueva reservación en la base de datos
		// Se pasa la instancia de la reservación y el administrador de la base de datos como parámetros
		ReservationDAO::insertReservation(reservation, dbManager);

		// Cerrar el formulario actual después de insertar la reservación
		this->Close();
	}
	catch (Exception^ e)
	{
		// En caso de error, es capturado por el catch y muestra el error por un MessageBox
		MessageBox::Show(e->Message);
	}
}
	// Al inicio del formulario, el panel que contiene la informacion del pasajero seleccionado esta oculto
	private: System::Void NewReservationDialog_Load(System::Object^ sender, System::EventArgs^ e) {
		this->passengerDetailsContainer->Visible = false;
	}
};
}
