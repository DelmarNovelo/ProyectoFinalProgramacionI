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
			//
			//TODO: agregar código de constructor aquí
			//
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
			this->SuspendLayout();
			// 
			// listResult
			// 
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
			this->searchPassengersTextBox->Location = System::Drawing::Point(12, 42);
			this->searchPassengersTextBox->Name = L"searchPassengersTextBox";
			this->searchPassengersTextBox->Size = System::Drawing::Size(534, 20);
			this->searchPassengersTextBox->TabIndex = 2;
			this->searchPassengersTextBox->TextChanged += gcnew System::EventHandler(this, &NewReservationDialog::searchPassengers);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Buscar pasajero";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Resultados de búsqueda";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(8, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 15);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Detalles del pasajero";
			// 
			// priceTextBox
			// 
			this->priceTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->priceTextBox->Location = System::Drawing::Point(12, 406);
			this->priceTextBox->Name = L"priceTextBox";
			this->priceTextBox->Size = System::Drawing::Size(234, 20);
			this->priceTextBox->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 385);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Precio:";
			// 
			// saveReservationButton
			// 
			this->saveReservationButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->saveReservationButton->BackColor = System::Drawing::Color::Black;
			this->saveReservationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveReservationButton->ForeColor = System::Drawing::Color::White;
			this->saveReservationButton->Location = System::Drawing::Point(391, 445);
			this->saveReservationButton->Name = L"saveReservationButton";
			this->saveReservationButton->Size = System::Drawing::Size(156, 37);
			this->saveReservationButton->TabIndex = 10;
			this->saveReservationButton->Text = L"Guardar Reservación";
			this->saveReservationButton->UseVisualStyleBackColor = false;
			this->saveReservationButton->Click += gcnew System::EventHandler(this, &NewReservationDialog::saveReservationButton_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 260);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Nombre Completo:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 287);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Teléfono:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 315);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Pasaporte:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 347);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Dirección:";
			// 
			// fullNameLabel
			// 
			this->fullNameLabel->AutoSize = true;
			this->fullNameLabel->Location = System::Drawing::Point(109, 259);
			this->fullNameLabel->Name = L"fullNameLabel";
			this->fullNameLabel->Size = System::Drawing::Size(0, 13);
			this->fullNameLabel->TabIndex = 15;
			// 
			// phoneLabel
			// 
			this->phoneLabel->AutoSize = true;
			this->phoneLabel->Location = System::Drawing::Point(64, 287);
			this->phoneLabel->Name = L"phoneLabel";
			this->phoneLabel->Size = System::Drawing::Size(0, 13);
			this->phoneLabel->TabIndex = 16;
			// 
			// passportLabel
			// 
			this->passportLabel->AutoSize = true;
			this->passportLabel->Location = System::Drawing::Point(69, 315);
			this->passportLabel->Name = L"passportLabel";
			this->passportLabel->Size = System::Drawing::Size(0, 13);
			this->passportLabel->TabIndex = 17;
			// 
			// addressLabel
			// 
			this->addressLabel->AutoSize = true;
			this->addressLabel->Location = System::Drawing::Point(67, 347);
			this->addressLabel->Name = L"addressLabel";
			this->addressLabel->Size = System::Drawing::Size(0, 13);
			this->addressLabel->TabIndex = 18;
			// 
			// NewReservationDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(559, 494);
			this->Controls->Add(this->addressLabel);
			this->Controls->Add(this->passportLabel);
			this->Controls->Add(this->phoneLabel);
			this->Controls->Add(this->fullNameLabel);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->saveReservationButton);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->priceTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->searchPassengersTextBox);
			this->Controls->Add(this->listResult);
			this->Name = L"NewReservationDialog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"NewReservation";
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
	if (listResult->SelectedItems->Count > 0) {
		ListViewItem^ selectedItem = listResult->SelectedItems[0];
		this->passengerId = (int)selectedItem->Tag;

		Passenger^ passenger = PassengerDAO::getPassengerDetailsForEditting(this->passengerId, dbManager);

		fullNameLabel->Text = passenger->FullName;
		phoneLabel->Text = passenger->Phone;
		passportLabel->Text = passenger->PassportNumber;
		addressLabel->Text = passenger->Address;
	}
}

private: System::Void saveReservationButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		DateTime currentDate = DateTime::Now;

		// MessageBox::Show(this->passengerId + " - " + this->flightId);
		// return;

		Reservation^ reservation = gcnew Reservation(this->passengerId, this->flightId, Utils::ConvertStringToDouble(priceTextBox->Text), Utils::FormatDateToyyyyMMdd(currentDate));

		ReservationDAO^ dao = gcnew ReservationDAO();

		dao->insertReservation(reservation, dbManager);

		this->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}
};
}
