#pragma once

#include "NewReservationDialog.h"
#include "FlightDAO.h"
#include "DataBaseManager.h"
#include "BoardingPass.h"
#include "BoardingPassDAO.h"
#include "Utils.h"
#include "BoardingPassDetails.h"

namespace ProyectoFinalProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FlightDetails
	/// </summary>
	public ref class FlightDetails : public System::Windows::Forms::Form
	{
	public:
		FlightDetails(int flightId)
		{
			InitializeComponent();
			InitializeCustomComponents();
			dbManager = gcnew DataBaseManager();

			this->flightId = flightId;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	private:
		int flightId;
	private: System::Windows::Forms::Label^ flightNumberLabel;
	private: System::Windows::Forms::Label^ destinationLabel;

	private: System::Windows::Forms::Label^ originLabel;
	private: System::Windows::Forms::Label^ airplaneLabel;
	private: System::Windows::Forms::Label^ airlineLabel;
	private: System::Windows::Forms::Label^ arrivalTimeLabel;
	private: System::Windows::Forms::Label^ departureTimeLabel;
	private: System::Windows::Forms::Label^ dateLabel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ passenger;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ passport_number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ reservation_date;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BoardingPassId;
	private: System::Windows::Forms::Label^ boardingTimeLabel;

	private: System::Windows::Forms::Label^ label12;








		   DataBaseManager^ dbManager;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FlightDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ reservationsDataGridView;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label9;





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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->reservationsDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->passenger = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->passport_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->reservation_date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BoardingPassId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->boardingTimeLabel = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->destinationLabel = (gcnew System::Windows::Forms::Label());
			this->originLabel = (gcnew System::Windows::Forms::Label());
			this->airplaneLabel = (gcnew System::Windows::Forms::Label());
			this->airlineLabel = (gcnew System::Windows::Forms::Label());
			this->arrivalTimeLabel = (gcnew System::Windows::Forms::Label());
			this->departureTimeLabel = (gcnew System::Windows::Forms::Label());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->flightNumberLabel = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reservationsDataGridView))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// reservationsDataGridView
			// 
			this->reservationsDataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->reservationsDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->reservationsDataGridView->BackgroundColor = System::Drawing::Color::White;
			this->reservationsDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->reservationsDataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->reservationsDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->reservationsDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->passenger,
					this->passport_number, this->price, this->reservation_date, this->BoardingPassId
			});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->reservationsDataGridView->DefaultCellStyle = dataGridViewCellStyle6;
			this->reservationsDataGridView->Location = System::Drawing::Point(654, 68);
			this->reservationsDataGridView->Name = L"reservationsDataGridView";
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->reservationsDataGridView->RowHeadersDefaultCellStyle = dataGridViewCellStyle7;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reservationsDataGridView->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->reservationsDataGridView->RowTemplate->Height = 35;
			this->reservationsDataGridView->Size = System::Drawing::Size(596, 536);
			this->reservationsDataGridView->TabIndex = 0;
			this->reservationsDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FlightDetails::dataGridView1_CellContentClick);
			// 
			// passenger
			// 
			this->passenger->HeaderText = L"PASAJERO";
			this->passenger->Name = L"passenger";
			// 
			// passport_number
			// 
			this->passport_number->HeaderText = L"NO. PASAPORTE";
			this->passport_number->Name = L"passport_number";
			// 
			// price
			// 
			this->price->HeaderText = L"PRECIO DE VUELO";
			this->price->Name = L"price";
			// 
			// reservation_date
			// 
			this->reservation_date->HeaderText = L"FECHA RESERVACIÓN";
			this->reservation_date->Name = L"reservation_date";
			// 
			// BoardingPassId
			// 
			this->BoardingPassId->HeaderText = L"BoardingPassId";
			this->BoardingPassId->Name = L"BoardingPassId";
			this->BoardingPassId->Visible = false;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::Teal;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1099, 20);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Nueva Reservación";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FlightDetails::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->boardingTimeLabel);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->destinationLabel);
			this->panel1->Controls->Add(this->originLabel);
			this->panel1->Controls->Add(this->airplaneLabel);
			this->panel1->Controls->Add(this->airlineLabel);
			this->panel1->Controls->Add(this->arrivalTimeLabel);
			this->panel1->Controls->Add(this->departureTimeLabel);
			this->panel1->Controls->Add(this->dateLabel);
			this->panel1->Controls->Add(this->flightNumberLabel);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(13, 68);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(621, 413);
			this->panel1->TabIndex = 4;
			// 
			// boardingTimeLabel
			// 
			this->boardingTimeLabel->AutoSize = true;
			this->boardingTimeLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardingTimeLabel->Location = System::Drawing::Point(137, 96);
			this->boardingTimeLabel->Name = L"boardingTimeLabel";
			this->boardingTimeLabel->Size = System::Drawing::Size(47, 17);
			this->boardingTimeLabel->TabIndex = 17;
			this->boardingTimeLabel->Text = L"label3";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(13, 96);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(128, 16);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Hora de abordaje:";
			// 
			// destinationLabel
			// 
			this->destinationLabel->AutoSize = true;
			this->destinationLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->destinationLabel->Location = System::Drawing::Point(131, 364);
			this->destinationLabel->Name = L"destinationLabel";
			this->destinationLabel->Size = System::Drawing::Size(54, 17);
			this->destinationLabel->TabIndex = 15;
			this->destinationLabel->Text = L"label16";
			// 
			// originLabel
			// 
			this->originLabel->AutoSize = true;
			this->originLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->originLabel->Location = System::Drawing::Point(127, 317);
			this->originLabel->Name = L"originLabel";
			this->originLabel->Size = System::Drawing::Size(54, 17);
			this->originLabel->TabIndex = 14;
			this->originLabel->Text = L"label15";
			// 
			// airplaneLabel
			// 
			this->airplaneLabel->AutoSize = true;
			this->airplaneLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->airplaneLabel->Location = System::Drawing::Point(58, 271);
			this->airplaneLabel->Name = L"airplaneLabel";
			this->airplaneLabel->Size = System::Drawing::Size(54, 17);
			this->airplaneLabel->TabIndex = 13;
			this->airplaneLabel->Text = L"label14";
			// 
			// airlineLabel
			// 
			this->airlineLabel->AutoSize = true;
			this->airlineLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->airlineLabel->Location = System::Drawing::Point(85, 226);
			this->airlineLabel->Name = L"airlineLabel";
			this->airlineLabel->Size = System::Drawing::Size(54, 17);
			this->airlineLabel->TabIndex = 12;
			this->airlineLabel->Text = L"label13";
			// 
			// arrivalTimeLabel
			// 
			this->arrivalTimeLabel->AutoSize = true;
			this->arrivalTimeLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrivalTimeLabel->Location = System::Drawing::Point(129, 181);
			this->arrivalTimeLabel->Name = L"arrivalTimeLabel";
			this->arrivalTimeLabel->Size = System::Drawing::Size(54, 17);
			this->arrivalTimeLabel->TabIndex = 11;
			this->arrivalTimeLabel->Text = L"label12";
			// 
			// departureTimeLabel
			// 
			this->departureTimeLabel->AutoSize = true;
			this->departureTimeLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->departureTimeLabel->Location = System::Drawing::Point(119, 140);
			this->departureTimeLabel->Name = L"departureTimeLabel";
			this->departureTimeLabel->Size = System::Drawing::Size(54, 17);
			this->departureTimeLabel->TabIndex = 10;
			this->departureTimeLabel->Text = L"label11";
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateLabel->Location = System::Drawing::Point(64, 54);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(54, 17);
			this->dateLabel->TabIndex = 9;
			this->dateLabel->Text = L"label10";
			// 
			// flightNumberLabel
			// 
			this->flightNumberLabel->AutoSize = true;
			this->flightNumberLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flightNumberLabel->Location = System::Drawing::Point(86, 14);
			this->flightNumberLabel->Name = L"flightNumberLabel";
			this->flightNumberLabel->Size = System::Drawing::Size(54, 17);
			this->flightNumberLabel->TabIndex = 8;
			this->flightNumberLabel->Text = L"label10";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(13, 364);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Lugar de destino:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(13, 317);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Lugar de origen:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(13, 271);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Avión:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 226);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Aerolinea:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 181);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Hora de llegada:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Hora de salida:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Fecha:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"No. Vuelo:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Teal;
			this->label9->Location = System::Drawing::Point(13, 25);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(175, 23);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Detalles del vuelo";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Teal;
			this->label10->Location = System::Drawing::Point(650, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(270, 23);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Reservaciones en este vuelo";
			// 
			// FlightDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 616);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->reservationsDataGridView);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FlightDetails";
			this->Text = L"Detalles del vuelo";
			this->Load += gcnew System::EventHandler(this, &FlightDetails::FlightDetails_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reservationsDataGridView))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void InitializeCustomComponents() {
			// Agregar columnas de botones al DataGridView
			DataGridViewButtonColumn^ editButtonColumn = gcnew DataGridViewButtonColumn();
			editButtonColumn->HeaderText = "PASE DE ABORDAJE";
			editButtonColumn->Name = "generate";
			editButtonColumn->Text = "Generar Pase";
			editButtonColumn->UseColumnTextForButtonValue = true;
			this->reservationsDataGridView->Columns->Add(editButtonColumn);

			DataGridViewButtonColumn^ deleteButtonColumn = gcnew DataGridViewButtonColumn();
			deleteButtonColumn->HeaderText = "DETALLES PASE";
			deleteButtonColumn->Name = "eliminar";
			deleteButtonColumn->Text = "Detalles Pase de Abordaje";
			deleteButtonColumn->UseColumnTextForButtonValue = true;
			this->reservationsDataGridView->Columns->Add(deleteButtonColumn);
		}

#pragma endregion

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// Verifica que el clic no sea en el encabezado
		if (e->RowIndex >= 0) {
			String^ columnName = reservationsDataGridView->Columns[e->ColumnIndex]->Name;

			// Verificar si se hizo clic en el botón de Editar
			if (columnName == "generate") {
				int reservationId = Convert::ToInt32(reservationsDataGridView->Rows[e->RowIndex]->Tag);

				confirmGenerateBoardingPass(reservationId);
			}

			// Verifica si se hizo clic en el botón de Eliminar
			if (columnName == "eliminar") {
				int boardingPassId = Convert::ToInt32(reservationsDataGridView->Rows[e->RowIndex]->Cells[4]->Value);

				openBoardingPassDetailsDialog(boardingPassId);
			}
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		NewReservationDialog^ newReservationDialog = gcnew NewReservationDialog(this->flightId);
		newReservationDialog->ShowDialog();

		this->getFlightDetails();

	}
	private: System::Void FlightDetails_Load(System::Object^ sender, System::EventArgs^ e) {
		this->getFlightDetails();
	}

	void getFlightDetails() {
		Flight^ flightDetails = FlightDAO::getFlightDetails(this->flightId, dbManager);

		if (flightDetails != nullptr) {
			flightNumberLabel->Text = flightDetails->FlightNumber;
			dateLabel->Text = flightDetails->Date;
			boardingTimeLabel->Text = flightDetails->BoardingTime;
			departureTimeLabel->Text = flightDetails->DepartureTime;
			arrivalTimeLabel->Text = flightDetails->ArrivalTime;
			airlineLabel->Text = flightDetails->AirlineName;
			airplaneLabel->Text = flightDetails->AirplaneModel;
			originLabel->Text = flightDetails->OriginName;
			destinationLabel->Text = flightDetails->DestinationName;

			// Llenar el DataGridView con las reservaciones
			reservationsDataGridView->Rows->Clear();

			for each (Reservation ^ reservation in flightDetails->Reservations) {
				DataGridViewRow^ row = gcnew DataGridViewRow();
				row->CreateCells(reservationsDataGridView);
				row->Cells[0]->Value = reservation->PassengerName;
				row->Cells[1]->Value = reservation->PassportNumber;
				row->Cells[2]->Value = reservation->Price.ToString("F2");
				row->Cells[3]->Value = reservation->ReservationDate;

				row->Cells[4]->Value = reservation->BoardingPassId;

				row->Tag = reservation->Id;  // Usar Tag para almacenar el ID de la reserva
				reservationsDataGridView->Rows->Add(row);
			}
		}

	};

	void confirmGenerateBoardingPass(int reservationId) {

		// Muestra un cuadro de diálogo de confirmación para la eliminación del pasajero
		System::Windows::Forms::DialogResult result = MessageBox::Show("¿Está seguro que desea generar el pase de abordaje para el pasajero seleccionado?", "Confirmar", MessageBoxButtons::OKCancel);

		// Si el usuario confirma
		if (result == System::Windows::Forms::DialogResult::OK) {

			try
			{
				// Toma la fecha acutal
				DateTime currentDate = DateTime::Now;

				BoardingPass^ boardingPass = gcnew BoardingPass(reservationId, "A1", Utils::FormatDateToyyyyMMdd(currentDate));

				BoardingPassDAO::insertBoardingPass(boardingPass, dbManager);

				this->getFlightDetails();

			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
		}
	}

	void openBoardingPassDetailsDialog(int boardingPassId) {
		BoardingPassDetails^ boardingPassDetails = gcnew BoardingPassDetails(boardingPassId);

		boardingPassDetails->ShowDialog();
	}

};
}
