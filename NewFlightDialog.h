#pragma once
#include "DataBaseManager.h"
#include "AirportDAO.h"
#include "AirlineDAO.h"
#include "AirplaneDAO.h"
#include "Utils.h"
#include "Flight.h"
#include "FlightDAO.h"

namespace ProyectoFinalProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NewFlightDialog
	/// </summary>
	public ref class NewFlightDialog : public System::Windows::Forms::Form
	{
	public:
		NewFlightDialog(void)
		{
			InitializeComponent();
			dbManager = gcnew DataBaseManager();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	private:
		DataBaseManager^ dbManager;

		List<Airline^>^ airlines;
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~NewFlightDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ datePicker;
	protected:

	protected:

	private: System::Windows::Forms::DateTimePicker^ departureDatePicker;
	private: System::Windows::Forms::DateTimePicker^ arrivalDatePicker;



	private: System::Windows::Forms::ComboBox^ airlineComboBox;
	private: System::Windows::Forms::ComboBox^ airplaneComboBox;



	private: System::Windows::Forms::ComboBox^ originComboBox;
	private: System::Windows::Forms::ComboBox^ destinationComboBox;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;

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
			this->datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->departureDatePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->arrivalDatePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->airlineComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->airplaneComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->originComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->destinationComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// datePicker
			// 
			this->datePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->datePicker->Location = System::Drawing::Point(12, 40);
			this->datePicker->Name = L"datePicker";
			this->datePicker->Size = System::Drawing::Size(244, 22);
			this->datePicker->TabIndex = 1;
			// 
			// departureDatePicker
			// 
			this->departureDatePicker->CustomFormat = L"";
			this->departureDatePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->departureDatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->departureDatePicker->Location = System::Drawing::Point(12, 105);
			this->departureDatePicker->Name = L"departureDatePicker";
			this->departureDatePicker->ShowUpDown = true;
			this->departureDatePicker->Size = System::Drawing::Size(244, 22);
			this->departureDatePicker->TabIndex = 2;
			// 
			// arrivalDatePicker
			// 
			this->arrivalDatePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->arrivalDatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->arrivalDatePicker->Location = System::Drawing::Point(303, 105);
			this->arrivalDatePicker->Name = L"arrivalDatePicker";
			this->arrivalDatePicker->ShowUpDown = true;
			this->arrivalDatePicker->Size = System::Drawing::Size(241, 22);
			this->arrivalDatePicker->TabIndex = 3;
			// 
			// airlineComboBox
			// 
			this->airlineComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->airlineComboBox->FormattingEnabled = true;
			this->airlineComboBox->Location = System::Drawing::Point(12, 173);
			this->airlineComboBox->Name = L"airlineComboBox";
			this->airlineComboBox->Size = System::Drawing::Size(244, 24);
			this->airlineComboBox->TabIndex = 4;
			// 
			// airplaneComboBox
			// 
			this->airplaneComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->airplaneComboBox->FormattingEnabled = true;
			this->airplaneComboBox->Location = System::Drawing::Point(303, 173);
			this->airplaneComboBox->Name = L"airplaneComboBox";
			this->airplaneComboBox->Size = System::Drawing::Size(241, 24);
			this->airplaneComboBox->TabIndex = 5;
			// 
			// originComboBox
			// 
			this->originComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->originComboBox->FormattingEnabled = true;
			this->originComboBox->Location = System::Drawing::Point(12, 243);
			this->originComboBox->Name = L"originComboBox";
			this->originComboBox->Size = System::Drawing::Size(244, 24);
			this->originComboBox->TabIndex = 6;
			// 
			// destinationComboBox
			// 
			this->destinationComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->destinationComboBox->FormattingEnabled = true;
			this->destinationComboBox->Location = System::Drawing::Point(303, 243);
			this->destinationComboBox->Name = L"destinationComboBox";
			this->destinationComboBox->Size = System::Drawing::Size(241, 24);
			this->destinationComboBox->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Fecha";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 15);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Hora de salida";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(300, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 15);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Hora de llegada";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(9, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 15);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Aerolinea";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(300, 151);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 15);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Avión";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 222);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(109, 15);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Lugar de origen";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(300, 222);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 15);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Lugar de destino";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(426, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 35);
			this->button1->TabIndex = 16;
			this->button1->Text = L"GUARDAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewFlightDialog::button1_Click);
			// 
			// NewFlightDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 358);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->destinationComboBox);
			this->Controls->Add(this->originComboBox);
			this->Controls->Add(this->airplaneComboBox);
			this->Controls->Add(this->airlineComboBox);
			this->Controls->Add(this->arrivalDatePicker);
			this->Controls->Add(this->departureDatePicker);
			this->Controls->Add(this->datePicker);
			this->Name = L"NewFlightDialog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Nuevo Vuelo";
			this->Load += gcnew System::EventHandler(this, &NewFlightDialog::NewFlightDialog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void NewFlightDialog_Load(System::Object^ sender, System::EventArgs^ e) {
			fillAirportComboBox(originComboBox);
			fillAirportComboBox(destinationComboBox);
			fillAirlineComboBox();
			fillAirplaneComboBox();
		}

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			try
			{
				int airlineId = getSelectedComboBoxId("airline", airlineComboBox);
				int airplaneId = getSelectedComboBoxId("airplane", airplaneComboBox);
				int originId = getSelectedComboBoxId("origin", originComboBox);
				int destinationId = getSelectedComboBoxId("destination", destinationComboBox);
				String^ departureTime = Utils::FormatTimeToHHmmss(departureDatePicker->Value);
				String^ arrivalTime = Utils::FormatTimeToHHmmss(arrivalDatePicker->Value);
				String^ date = Utils::FormatDateToyyyyMMdd(datePicker->Value);
				String^ flightNumber = generateFlightCode(airlineId);

				Flight^ flight = gcnew Flight(
					flightNumber,
					date,
					departureTime,
					arrivalTime,
					airlineId,
					airplaneId,
					originId,
					destinationId
				);

				FlightDAO^ dao = gcnew FlightDAO();

				dao->createFlight(flight, dbManager);

				this->Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
		}

		void fillAirportComboBox(ComboBox^ comboBox) {
			AirportDAO^ dao = gcnew AirportDAO();
			List<Airport^>^ airports = dao->getAirports(dbManager);

			comboBox->Items->Clear();
			comboBox->DisplayMember = "Name";
			comboBox->ValueMember = "Id";

			for each (Airport ^ airport in airports) {
				comboBox->Items->Add(airport);
			}
		}

		void fillAirlineComboBox() {
			AirlineDAO^ dao = gcnew AirlineDAO();
			airlines = dao->getAirlines(dbManager);

			airlineComboBox->Items->Clear();
			airlineComboBox->DisplayMember = "Name";
			airlineComboBox->ValueMember = "Id";

			for each (Airline^ airline in airlines) {
				airlineComboBox->Items->Add(airline);
			}
		}
		 
		void fillAirplaneComboBox() {
			AirplaneDAO^ dao = gcnew AirplaneDAO();
			List<Airplane^>^ airplanes = dao->getAirplanes(dbManager);

			airplaneComboBox->Items->Clear();
			airplaneComboBox->DisplayMember = "Model";
			airplaneComboBox->ValueMember = "Id";

			for each (Airplane^ airplane in airplanes) {
				airplaneComboBox->Items->Add(airplane);
			}
		}

		int getSelectedComboBoxId(String^ entity, ComboBox^ comboBox) {
			int selectedId = 0;

			try
			{
				Object^ selectedItem = comboBox->SelectedItem;

				if (entity == "airline") {
					if (selectedItem != nullptr) {
						Airline^ selectedAirline = dynamic_cast<Airline^>(selectedItem);

						selectedId = selectedAirline->Id;
					}
				}
				else if (entity == "airplane") {
					if (selectedItem != nullptr) {
						Airplane^ selectedAirplane = dynamic_cast<Airplane^>(selectedItem);

						selectedId = selectedAirplane->Id;
					}
				}
				else if (entity == "destination") {
					if (selectedItem != nullptr) {
						Airport^ selectedAirport = dynamic_cast<Airport^>(selectedItem);

						selectedId = selectedAirport->Id;
					}
				}
				else if (entity == "origin") {
					if (selectedItem != nullptr) {
						Airport^ selectedAirport = dynamic_cast<Airport^>(selectedItem);

						selectedId = selectedAirport->Id;
					}
				}

				return selectedId;
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message->ToString());
			}
		}

		String^ generateFlightCode(int airlineId) {
			String^ airlineIataCode = "";

			for each (Airline ^ airline in airlines) {
				if (airline->Id == airlineId) {
					airlineIataCode = airline->IataCode;
					
					break;
				}
			}

			String^ randomNumber1 = Utils::GenarateRandomNumbers(1, 99).ToString();
			String^ randomNumber2 = Utils::GenarateRandomNumbers(1, 999).ToString();

			return airlineIataCode + randomNumber1 + " " + randomNumber2;
		}
};
}
