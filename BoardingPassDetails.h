#pragma once
#include "BoardingPassDAO.h"
#include "DataBaseManager.h"
#include "BoardingPass.h"
using namespace System::Globalization;

namespace ProyectoFinalProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de BoardingPassDetails
	/// </summary>
	public ref class BoardingPassDetails : public System::Windows::Forms::Form
	{
	public:
		BoardingPassDetails(int boardingPassIdParam)
		{
			InitializeComponent();
			this->Load += gcnew EventHandler(this, &BoardingPassDetails::BoardingPassDetails_Load);
			dbManager = gcnew DataBaseManager();
			this->boardingPassId = boardingPassIdParam;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	private:
		DataBaseManager^ dbManager;
	private: System::Windows::Forms::Label^ ticketLabel;
	private: System::Windows::Forms::Label^ bookingLabel;
	private: System::Windows::Forms::Label^ flightLabel;

	private: System::Windows::Forms::Label^ arrivalLabel;

	private: System::Windows::Forms::Label^ departureLabel;
	private: System::Windows::Forms::Label^ airlineLabel;
	private: System::Windows::Forms::Label^ seatLabel;
	private: System::Windows::Forms::Label^ dateLabel;
	private: System::Windows::Forms::Label^ boardingTimeLabel;

		   int boardingPassId;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~BoardingPassDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ nameLabel;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ destinationIataCodeLabel;
	private: System::Windows::Forms::Label^ originIataCodeLabel;



	private: System::Windows::Forms::Label^ destinationLabel;

	private: System::Windows::Forms::Label^ originLabel;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label25;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BoardingPassDetails::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->ticketLabel = (gcnew System::Windows::Forms::Label());
			this->bookingLabel = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->destinationIataCodeLabel = (gcnew System::Windows::Forms::Label());
			this->originIataCodeLabel = (gcnew System::Windows::Forms::Label());
			this->destinationLabel = (gcnew System::Windows::Forms::Label());
			this->originLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->boardingTimeLabel = (gcnew System::Windows::Forms::Label());
			this->airlineLabel = (gcnew System::Windows::Forms::Label());
			this->seatLabel = (gcnew System::Windows::Forms::Label());
			this->flightLabel = (gcnew System::Windows::Forms::Label());
			this->arrivalLabel = (gcnew System::Windows::Forms::Label());
			this->departureLabel = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->destinationIataCodeLabel);
			this->panel1->Controls->Add(this->originIataCodeLabel);
			this->panel1->Controls->Add(this->destinationLabel);
			this->panel1->Controls->Add(this->originLabel);
			this->panel1->Controls->Add(this->nameLabel);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 16);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1091, 268);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->ticketLabel);
			this->panel3->Controls->Add(this->bookingLabel);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->panel3->Location = System::Drawing::Point(602, 199);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(484, 65);
			this->panel3->TabIndex = 8;
			// 
			// ticketLabel
			// 
			this->ticketLabel->AutoSize = true;
			this->ticketLabel->Location = System::Drawing::Point(204, 35);
			this->ticketLabel->Name = L"ticketLabel";
			this->ticketLabel->Size = System::Drawing::Size(57, 21);
			this->ticketLabel->TabIndex = 4;
			this->ticketLabel->Text = L"label3";
			// 
			// bookingLabel
			// 
			this->bookingLabel->AutoSize = true;
			this->bookingLabel->Location = System::Drawing::Point(339, 9);
			this->bookingLabel->Name = L"bookingLabel";
			this->bookingLabel->Size = System::Drawing::Size(57, 21);
			this->bookingLabel->TabIndex = 3;
			this->bookingLabel->Text = L"label3";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(4, 9);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(330, 19);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Código de reservación / Booking number";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(4, 35);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(186, 19);
			this->label10->TabIndex = 1;
			this->label10->Text = L"No. de boleto / Ticket #";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, -39);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(328, 21);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Código de reservación / Booking number";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dateLabel);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->panel2->Location = System::Drawing::Point(0, 199);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(335, 65);
			this->panel2->TabIndex = 7;
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->Location = System::Drawing::Point(120, 9);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(57, 21);
			this->dateLabel->TabIndex = 2;
			this->dateLabel->Text = L"label3";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(4, 35);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(231, 19);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Familia tarifaria / Fare family";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(4, 9);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 19);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Fecha / date";
			// 
			// destinationIataCodeLabel
			// 
			this->destinationIataCodeLabel->AutoSize = true;
			this->destinationIataCodeLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->destinationIataCodeLabel->ForeColor = System::Drawing::Color::MidnightBlue;
			this->destinationIataCodeLabel->Location = System::Drawing::Point(481, 151);
			this->destinationIataCodeLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->destinationIataCodeLabel->Name = L"destinationIataCodeLabel";
			this->destinationIataCodeLabel->Size = System::Drawing::Size(129, 28);
			this->destinationIataCodeLabel->TabIndex = 6;
			this->destinationIataCodeLabel->Text = L"iata Code";
			// 
			// originIataCodeLabel
			// 
			this->originIataCodeLabel->AutoSize = true;
			this->originIataCodeLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->originIataCodeLabel->ForeColor = System::Drawing::Color::MidnightBlue;
			this->originIataCodeLabel->Location = System::Drawing::Point(70, 151);
			this->originIataCodeLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->originIataCodeLabel->Name = L"originIataCodeLabel";
			this->originIataCodeLabel->Size = System::Drawing::Size(129, 28);
			this->originIataCodeLabel->TabIndex = 5;
			this->originIataCodeLabel->Text = L"iata Code";
			// 
			// destinationLabel
			// 
			this->destinationLabel->AutoSize = true;
			this->destinationLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->destinationLabel->ForeColor = System::Drawing::Color::MidnightBlue;
			this->destinationLabel->Location = System::Drawing::Point(421, 116);
			this->destinationLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->destinationLabel->Name = L"destinationLabel";
			this->destinationLabel->Size = System::Drawing::Size(86, 25);
			this->destinationLabel->TabIndex = 4;
			this->destinationLabel->Text = L"Destino";
			// 
			// originLabel
			// 
			this->originLabel->AutoSize = true;
			this->originLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->originLabel->ForeColor = System::Drawing::Color::MidnightBlue;
			this->originLabel->Location = System::Drawing::Point(-2, 116);
			this->originLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->originLabel->Name = L"originLabel";
			this->originLabel->Size = System::Drawing::Size(82, 25);
			this->originLabel->TabIndex = 3;
			this->originLabel->Text = L"Origen";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->ForeColor = System::Drawing::Color::MidnightBlue;
			this->nameLabel->Location = System::Drawing::Point(0, 69);
			this->nameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(194, 30);
			this->nameLabel->TabIndex = 2;
			this->nameLabel->Text = L"Delmar Novelo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label2->Location = System::Drawing::Point(-3, 34);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"BOARDING PASS";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(-3, 0);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PASE DE ABORDAR";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->boardingTimeLabel);
			this->panel4->Controls->Add(this->airlineLabel);
			this->panel4->Controls->Add(this->seatLabel);
			this->panel4->Controls->Add(this->flightLabel);
			this->panel4->Controls->Add(this->arrivalLabel);
			this->panel4->Controls->Add(this->departureLabel);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->label21);
			this->panel4->Controls->Add(this->label22);
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->label24);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->ForeColor = System::Drawing::Color::MidnightBlue;
			this->panel4->Location = System::Drawing::Point(12, 287);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1091, 103);
			this->panel4->TabIndex = 1;
			// 
			// boardingTimeLabel
			// 
			this->boardingTimeLabel->AutoSize = true;
			this->boardingTimeLabel->Location = System::Drawing::Point(40, 65);
			this->boardingTimeLabel->Name = L"boardingTimeLabel";
			this->boardingTimeLabel->Size = System::Drawing::Size(57, 21);
			this->boardingTimeLabel->TabIndex = 17;
			this->boardingTimeLabel->Text = L"label3";
			// 
			// airlineLabel
			// 
			this->airlineLabel->AutoSize = true;
			this->airlineLabel->Location = System::Drawing::Point(944, 65);
			this->airlineLabel->Name = L"airlineLabel";
			this->airlineLabel->Size = System::Drawing::Size(57, 21);
			this->airlineLabel->TabIndex = 16;
			this->airlineLabel->Text = L"label3";
			// 
			// seatLabel
			// 
			this->seatLabel->AutoSize = true;
			this->seatLabel->Location = System::Drawing::Point(797, 65);
			this->seatLabel->Name = L"seatLabel";
			this->seatLabel->Size = System::Drawing::Size(57, 21);
			this->seatLabel->TabIndex = 15;
			this->seatLabel->Text = L"label3";
			// 
			// flightLabel
			// 
			this->flightLabel->AutoSize = true;
			this->flightLabel->Location = System::Drawing::Point(594, 65);
			this->flightLabel->Name = L"flightLabel";
			this->flightLabel->Size = System::Drawing::Size(57, 21);
			this->flightLabel->TabIndex = 14;
			this->flightLabel->Text = L"label5";
			// 
			// arrivalLabel
			// 
			this->arrivalLabel->AutoSize = true;
			this->arrivalLabel->Location = System::Drawing::Point(398, 65);
			this->arrivalLabel->Name = L"arrivalLabel";
			this->arrivalLabel->Size = System::Drawing::Size(57, 21);
			this->arrivalLabel->TabIndex = 13;
			this->arrivalLabel->Text = L"label4";
			// 
			// departureLabel
			// 
			this->departureLabel->AutoSize = true;
			this->departureLabel->Location = System::Drawing::Point(242, 65);
			this->departureLabel->Name = L"departureLabel";
			this->departureLabel->Size = System::Drawing::Size(57, 21);
			this->departureLabel->TabIndex = 12;
			this->departureLabel->Text = L"label3";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(944, 36);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(108, 19);
			this->label19->TabIndex = 11;
			this->label19->Text = L"Operated by";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(800, 36);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(42, 19);
			this->label20->TabIndex = 10;
			this->label20->Text = L"Seat";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(599, 36);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(50, 19);
			this->label21->TabIndex = 9;
			this->label21->Text = L"Flight";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(400, 36);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(59, 19);
			this->label22->TabIndex = 8;
			this->label22->Text = L"Arrival";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(230, 36);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(86, 19);
			this->label23->TabIndex = 7;
			this->label23->Text = L"Departure";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(17, 36);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(118, 19);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Boarding time";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(944, 19);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(110, 19);
			this->label18->TabIndex = 5;
			this->label18->Text = L"Operado por";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(789, 19);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(65, 19);
			this->label17->TabIndex = 4;
			this->label17->Text = L"Asiento";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(599, 19);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 19);
			this->label16->TabIndex = 3;
			this->label16->Text = L"Vuelo";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(396, 19);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(74, 19);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Llegada";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(246, 19);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(58, 19);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Salida";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(4, 19);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(148, 19);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Hora de abordaje";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label25);
			this->panel5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel5->Location = System::Drawing::Point(12, 397);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1091, 100);
			this->panel5->TabIndex = 2;
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label25->Location = System::Drawing::Point(4, 10);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(2138, 17);
			this->label25->TabIndex = 0;
			this->label25->Text = resources->GetString(L"label25.Text");
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BoardingPassDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1117, 524);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"BoardingPassDetails";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Detalles del Pase de Abordaje";
			this->Load += gcnew System::EventHandler(this, &BoardingPassDetails::BoardingPassDetails_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BoardingPassDetails_Load(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			// Intenta obtener los detalles del pase de abordar usando el ID de pase de abordar y el gestor de base de datos actual
			BoardingPass^ boardingPassDetails = BoardingPassDAO::getBoardingPassDetails(this->boardingPassId, this->dbManager);

			// Si se obtienen los detalles del pase de abordar correctamente
			if (boardingPassDetails != nullptr) {
				// Actualizar los controles de la ventana con los datos obtenidos del pase de abordar
				this->nameLabel->Text = boardingPassDetails->PassengerName;
				this->originLabel->Text = boardingPassDetails->OriginName;
				this->dateLabel->Text = boardingPassDetails->ReservationDate;
				this->destinationLabel->Text = boardingPassDetails->DestinationName;
				this->originIataCodeLabel->Text = boardingPassDetails->OriginIataCode;
				this->destinationIataCodeLabel->Text = boardingPassDetails->DestinationIataCode;
				this->bookingLabel->Text = boardingPassDetails->BookingReference;
				this->ticketLabel->Text = boardingPassDetails->TicketNumber;
				this->boardingTimeLabel->Text = boardingPassDetails->BoardingTime;
				this->departureLabel->Text = boardingPassDetails->DepartureTime;
				this->arrivalLabel->Text = boardingPassDetails->ArrivalTime;
				this->flightLabel->Text = boardingPassDetails->FlightNumber;
				this->seatLabel->Text = boardingPassDetails->SeatNumber;
				this->airlineLabel->Text = boardingPassDetails->AirlineName;

				// Llamar a la función para ajustar el tamaño del Label
				this->labelAjust();
			}
			else {
				// Si no se encuentran detalles del pase de abordar, cerrar la ventana
				this->Close();
			}
		}
		catch (Exception^ e)
		{
			// Capturar cualquier excepción que ocurra durante la carga y mostrar un mensaje de error
			MessageBox::Show(e->Message);
		}
	}

	void labelAjust() {
		// Ajustar el tamaño del Label en el evento Load
		label25->AutoSize = false;
		label25->MaximumSize = System::Drawing::Size(panel5->Width, 0);
		label25->Size = System::Drawing::Size(panel5->Width, panel5->Height);
		label25->Location = System::Drawing::Point(0, 0);
		label25->Text = "Presentarse en el aeropuerto 2 horas antes de la salida de su vuelo. Hora de abordaje 45 minutos antes de la salida del vuelo. La puerta cierra 15 minutos antes de la salida. / Show up at the airport 2 hours before departure of your flight. Boarding time 45 minutes before flight departure. Door cloosing 15 minutes before departure.";
}
};
}
