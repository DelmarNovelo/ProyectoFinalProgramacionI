#pragma once
#include "NewFlightDialog.h"
#include "DataBaseManager.h"

public delegate void LoadFormEventHandler(String^ formName, int id);

namespace ProyectoFinalProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FlightsContainer
	/// </summary>
	public ref class FlightsContainer : public System::Windows::Forms::Form
	{
	public:
		FlightsContainer(void)
		{
			InitializeComponent();
			InitializeCustomComponents();
			dbManager = gcnew DataBaseManager();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ flight_number;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ departure_time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ arrival_time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ airline_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ airplane_model;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ origin_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ destination_name;
	private: System::Windows::Forms::Label^ label1;


	private:
		DataBaseManager^ dbManager;

	public:
		event LoadFormEventHandler^ LoadFormEvent;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		/// 

		~FlightsContainer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ newFlightBtn;
	protected:

	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->newFlightBtn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->flight_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->departure_time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->arrival_time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->airline_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->airplane_model = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->origin_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->destination_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// newFlightBtn
			// 
			this->newFlightBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->newFlightBtn->BackColor = System::Drawing::Color::Teal;
			this->newFlightBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newFlightBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newFlightBtn->ForeColor = System::Drawing::Color::White;
			this->newFlightBtn->Location = System::Drawing::Point(880, 22);
			this->newFlightBtn->Margin = System::Windows::Forms::Padding(4);
			this->newFlightBtn->Name = L"newFlightBtn";
			this->newFlightBtn->Size = System::Drawing::Size(228, 38);
			this->newFlightBtn->TabIndex = 3;
			this->newFlightBtn->Text = L"Registrar Vuelo";
			this->newFlightBtn->UseVisualStyleBackColor = false;
			this->newFlightBtn->Click += gcnew System::EventHandler(this, &FlightsContainer::newFlightBtn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->flight_number,
					this->date, this->departure_time, this->arrival_time, this->airline_name, this->airplane_model, this->origin_name, this->destination_name
			});
			this->dataGridView1->Location = System::Drawing::Point(13, 68);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->RowTemplate->Height = 35;
			this->dataGridView1->RowTemplate->ReadOnly = true;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->Size = System::Drawing::Size(1095, 404);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FlightsContainer::dataGridView1_CellContentClick);
			// 
			// flight_number
			// 
			this->flight_number->FillWeight = 60;
			this->flight_number->HeaderText = L"NO. VUELO";
			this->flight_number->Name = L"flight_number";
			// 
			// date
			// 
			this->date->FillWeight = 88.091F;
			this->date->HeaderText = L"FECHA";
			this->date->Name = L"date";
			// 
			// departure_time
			// 
			this->departure_time->FillWeight = 88.091F;
			this->departure_time->HeaderText = L"HORA SALIDA";
			this->departure_time->Name = L"departure_time";
			// 
			// arrival_time
			// 
			this->arrival_time->FillWeight = 88.091F;
			this->arrival_time->HeaderText = L"HORA LLEGADA";
			this->arrival_time->Name = L"arrival_time";
			// 
			// airline_name
			// 
			this->airline_name->FillWeight = 88.091F;
			this->airline_name->HeaderText = L"AEROLINEA";
			this->airline_name->Name = L"airline_name";
			// 
			// airplane_model
			// 
			this->airplane_model->FillWeight = 96.41069F;
			this->airplane_model->HeaderText = L"AVIÓN";
			this->airplane_model->Name = L"airplane_model";
			// 
			// origin_name
			// 
			this->origin_name->FillWeight = 96.41069F;
			this->origin_name->HeaderText = L"ORIGEN";
			this->origin_name->Name = L"origin_name";
			// 
			// destination_name
			// 
			this->destination_name->FillWeight = 96.41069F;
			this->destination_name->HeaderText = L"DESTINO";
			this->destination_name->Name = L"destination_name";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Teal;
			this->label1->Location = System::Drawing::Point(12, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Vuelos registrados";
			// 
			// FlightsContainer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1121, 485);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->newFlightBtn);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FlightsContainer";
			this->Text = L"FlightsContainer";
			this->Load += gcnew System::EventHandler(this, &FlightsContainer::FlightsContainer_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void InitializeCustomComponents() {
			// Agregar columnas de botones al DataGridView
			DataGridViewButtonColumn^ editButtonColumn = gcnew DataGridViewButtonColumn();
			editButtonColumn->HeaderText = "MENU";
			editButtonColumn->Name = "details";
			editButtonColumn->Text = "Detalles";
			editButtonColumn->UseColumnTextForButtonValue = true;
			this->dataGridView1->Columns->Add(editButtonColumn);
		}

#pragma endregion

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// Verifica que el clic no sea en el encabezado
		if (e->RowIndex >= 0) {
			String^ columnName = dataGridView1->Columns[e->ColumnIndex]->Name;

			// Verificar si se hizo clic en el botón de Editar
			if (columnName == "details") {
				int flightId = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Tag);

				LoadFormEvent("FlightDetailsForm", flightId);
			}

		}
	}

	private: System::Void newFlightBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		NewFlightDialog^ newFlightDialog = gcnew NewFlightDialog();
		newFlightDialog->ShowDialog();

		llenarTabla();
	}
		private: System::Void FlightsContainer_Load(System::Object^ sender, System::EventArgs^ e) {
			llenarTabla();
		}

	   void llenarTabla() {
		   DataTable^ dt = FlightDAO::getFlightsInTable(dbManager);
		   dataGridView1->Rows->Clear();

		   for each (DataRow ^ row in dt->Rows) {

			   // Añadir una nueva fila al DataGridView
			   int rowIndex = dataGridView1->Rows->Add(
				   row["flight_number"], 
				   row["date"], 
				   row["departure_time"], 
				   row["arrival_time"], 
				   row["airline_name"], 
				   row["airplane_model"], 
				   row["origin_name"], 
				   row["destination_name"]
			   );

			   // Asignar el ID del vuelo como tag a la fila
			   dataGridView1->Rows[rowIndex]->Tag = row["id"];
		   }
	   }

};
}
