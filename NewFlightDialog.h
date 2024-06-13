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
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;

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
	private: System::Windows::Forms::Button^ saveFlightButton;


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
			this->saveFlightButton = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// datePicker
			// 
			this->datePicker->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->datePicker->Location = System::Drawing::Point(12, 40);
			this->datePicker->Name = L"datePicker";
			this->datePicker->Size = System::Drawing::Size(244, 23);
			this->datePicker->TabIndex = 1;
			// 
			// departureDatePicker
			// 
			this->departureDatePicker->CustomFormat = L"";
			this->departureDatePicker->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->departureDatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->departureDatePicker->Location = System::Drawing::Point(12, 105);
			this->departureDatePicker->Name = L"departureDatePicker";
			this->departureDatePicker->ShowUpDown = true;
			this->departureDatePicker->Size = System::Drawing::Size(244, 23);
			this->departureDatePicker->TabIndex = 2;
			// 
			// arrivalDatePicker
			// 
			this->arrivalDatePicker->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrivalDatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->arrivalDatePicker->Location = System::Drawing::Point(303, 105);
			this->arrivalDatePicker->Name = L"arrivalDatePicker";
			this->arrivalDatePicker->ShowUpDown = true;
			this->arrivalDatePicker->Size = System::Drawing::Size(241, 23);
			this->arrivalDatePicker->TabIndex = 3;
			// 
			// airlineComboBox
			// 
			this->airlineComboBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->airlineComboBox->FormattingEnabled = true;
			this->airlineComboBox->Location = System::Drawing::Point(12, 173);
			this->airlineComboBox->Name = L"airlineComboBox";
			this->airlineComboBox->Size = System::Drawing::Size(244, 25);
			this->airlineComboBox->TabIndex = 4;
			// 
			// airplaneComboBox
			// 
			this->airplaneComboBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->airplaneComboBox->FormattingEnabled = true;
			this->airplaneComboBox->Location = System::Drawing::Point(303, 173);
			this->airplaneComboBox->Name = L"airplaneComboBox";
			this->airplaneComboBox->Size = System::Drawing::Size(241, 25);
			this->airplaneComboBox->TabIndex = 5;
			// 
			// originComboBox
			// 
			this->originComboBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->originComboBox->FormattingEnabled = true;
			this->originComboBox->Location = System::Drawing::Point(12, 243);
			this->originComboBox->Name = L"originComboBox";
			this->originComboBox->Size = System::Drawing::Size(244, 25);
			this->originComboBox->TabIndex = 6;
			// 
			// destinationComboBox
			// 
			this->destinationComboBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->destinationComboBox->FormattingEnabled = true;
			this->destinationComboBox->Location = System::Drawing::Point(303, 243);
			this->destinationComboBox->Name = L"destinationComboBox";
			this->destinationComboBox->Size = System::Drawing::Size(241, 25);
			this->destinationComboBox->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(9, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Fecha de abordaje:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(9, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Hora de salida:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(300, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Hora de llegada:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(9, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Aerolinea:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(300, 151);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Avión:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(12, 222);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Lugar de origen:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(300, 222);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Lugar de destino:";
			// 
			// saveFlightButton
			// 
			this->saveFlightButton->BackColor = System::Drawing::Color::Teal;
			this->saveFlightButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveFlightButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveFlightButton->ForeColor = System::Drawing::Color::White;
			this->saveFlightButton->Location = System::Drawing::Point(400, 296);
			this->saveFlightButton->Name = L"saveFlightButton";
			this->saveFlightButton->Size = System::Drawing::Size(144, 42);
			this->saveFlightButton->TabIndex = 16;
			this->saveFlightButton->Text = L"Guardar";
			this->saveFlightButton->UseVisualStyleBackColor = false;
			this->saveFlightButton->Click += gcnew System::EventHandler(this, &NewFlightDialog::saveFlight_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(131, 17);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 20);
			this->label10->TabIndex = 22;
			this->label10->Text = L"*";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(101, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 20);
			this->label1->TabIndex = 23;
			this->label1->Text = L"*";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(404, 82);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 20);
			this->label9->TabIndex = 24;
			this->label9->Text = L"*";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(75, 150);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 20);
			this->label11->TabIndex = 25;
			this->label11->Text = L"*";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(342, 150);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(15, 20);
			this->label12->TabIndex = 26;
			this->label12->Text = L"*";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(112, 221);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(15, 20);
			this->label13->TabIndex = 27;
			this->label13->Text = L"*";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(404, 219);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(15, 20);
			this->label14->TabIndex = 28;
			this->label14->Text = L"*";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(9, 296);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(132, 17);
			this->label15->TabIndex = 29;
			this->label15->Text = L"* Campos requeridos";
			// 
			// NewFlightDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(556, 350);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->saveFlightButton);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
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

		private: System::Void saveFlight_Click(System::Object^ sender, System::EventArgs^ e) {
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

				if (airlineId < 1) {
					throw gcnew Exception("Seleccione una aerolinea");
				}

				if (airplaneId < 1) {
					throw gcnew Exception("Seleccione un avión");
				}

				if (originId < 1) {
					throw gcnew Exception("Seleccione un origen");
				}

				if (destinationId < 1) {
					throw gcnew Exception("Seleccione un destino");
				}

				if (originId == destinationId) {
					throw gcnew Exception("El origen debe ser diferente al destino");
				}

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

				// dao->createFlight(flight, dbManager);

				// this->Close();
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
