#pragma once

#include "RegistrarPasajeroDialog.h"
#include "DataBaseManager.h"
#include "EditarPasajeroDialog.h"

namespace ProyectoFinalProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PassengersContainer
	/// </summary>
	public ref class PassengersContainer : public System::Windows::Forms::Form
	{
	public:
		PassengersContainer(void)
		{
			InitializeComponent();
			InitializeCustomComponents();
			dbManager = gcnew DataBaseManager();
		}

	public:





	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ telefono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pasaporte;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fecha_nacimiento;


	private: 
		DataBaseManager^ dbManager;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PassengersContainer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Button^ btnCrearPasajero;

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
		this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
		this->btnCrearPasajero = (gcnew System::Windows::Forms::Button());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->pasaporte = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->fecha_nacimiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
		this->SuspendLayout();
		// 
		// dataGridView1
		// 
		this->dataGridView1->AllowUserToOrderColumns = true;
		this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
		this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
			this->id, this->nombre,
				this->apellido, this->telefono, this->pasaporte, this->fecha_nacimiento
		});
		this->dataGridView1->Location = System::Drawing::Point(13, 68);
		this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
		this->dataGridView1->Name = L"dataGridView1";
		this->dataGridView1->RowTemplate->Height = 35;
		this->dataGridView1->RowTemplate->ReadOnly = true;
		this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView1->Size = System::Drawing::Size(1095, 404);
		this->dataGridView1->TabIndex = 0;
		this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PassengersContainer::dataGridView1_CellContentClick);
		// 
		// btnCrearPasajero
		// 
		this->btnCrearPasajero->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->btnCrearPasajero->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
		this->btnCrearPasajero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnCrearPasajero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btnCrearPasajero->ForeColor = System::Drawing::Color::White;
		this->btnCrearPasajero->Location = System::Drawing::Point(880, 22);
		this->btnCrearPasajero->Margin = System::Windows::Forms::Padding(4);
		this->btnCrearPasajero->Name = L"btnCrearPasajero";
		this->btnCrearPasajero->Size = System::Drawing::Size(228, 38);
		this->btnCrearPasajero->TabIndex = 1;
		this->btnCrearPasajero->Text = L"REGISTRAR PASAJERO";
		this->btnCrearPasajero->UseVisualStyleBackColor = false;
		this->btnCrearPasajero->Click += gcnew System::EventHandler(this, &PassengersContainer::btnCrearPasajero_Click);
		// 
		// textBox1
		// 
		this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textBox1->Location = System::Drawing::Point(13, 39);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(815, 22);
		this->textBox1->TabIndex = 2;
		// 
		// id
		// 
		this->id->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
		this->id->FillWeight = 143.1472F;
		this->id->Frozen = true;
		this->id->HeaderText = L"ID";
		this->id->Name = L"id";
		this->id->Width = 60;
		// 
		// nombre
		// 
		this->nombre->FillWeight = 91.37057F;
		this->nombre->HeaderText = L"NOMBRE";
		this->nombre->Name = L"first_name";
		// 
		// apellido
		// 
		this->apellido->FillWeight = 91.37057F;
		this->apellido->HeaderText = L"APELLIDO";
		this->apellido->Name = L"last_name";
		// 
		// telefono
		// 
		this->telefono->FillWeight = 91.37057F;
		this->telefono->HeaderText = L"TELEFONO";
		this->telefono->Name = L"phone";
		// 
		// pasaporte
		// 
		this->pasaporte->FillWeight = 91.37057F;
		this->pasaporte->HeaderText = L"PASAPORTE";
		this->pasaporte->Name = L"passport_number";
		// 
		// fecha_nacimiento
		// 
		this->fecha_nacimiento->FillWeight = 91.37057F;
		this->fecha_nacimiento->HeaderText = L"FECHA NACIMIENTO";
		this->fecha_nacimiento->Name = L"birth_date";
		// 
		// PassengersContainer
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(1121, 485);
		this->Controls->Add(this->textBox1);
		this->Controls->Add(this->btnCrearPasajero);
		this->Controls->Add(this->dataGridView1);
		this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->Margin = System::Windows::Forms::Padding(4);
		this->Name = L"PassengersContainer";
		this->Text = L"ContenedorPasajeros";
		this->Load += gcnew System::EventHandler(this, &PassengersContainer::ContenedorPasajeros_Load);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}

	void InitializeCustomComponents() {
		// Agregar columnas de botones al DataGridView
		DataGridViewButtonColumn^ editButtonColumn = gcnew DataGridViewButtonColumn();
		editButtonColumn->HeaderText = "EDITAR";
		editButtonColumn->Name = "editar";
		editButtonColumn->Text = "Editar";
		editButtonColumn->UseColumnTextForButtonValue = true;
		this->dataGridView1->Columns->Add(editButtonColumn);

		DataGridViewButtonColumn^ deleteButtonColumn = gcnew DataGridViewButtonColumn();
		deleteButtonColumn->HeaderText = "ELIMINAR";
		deleteButtonColumn->Name = "eliminar";
		deleteButtonColumn->Text = "Eliminar";
		deleteButtonColumn->UseColumnTextForButtonValue = true;
		this->dataGridView1->Columns->Add(deleteButtonColumn);
	}

	private: System::Void ContenedorPasajeros_Load(System::Object^ sender, System::EventArgs^ e) {
		llenarTabla();
	}

	private: System::Void btnCrearPasajero_Click(System::Object^ sender, System::EventArgs^ e) {
		RegistrarPasajeroDialog^ dialog = gcnew RegistrarPasajeroDialog();
		dialog->ShowDialog();

		llenarTabla();
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// Verifica que el clic no sea en el encabezado
		if (e->RowIndex >= 0) {
			String^ columnName = dataGridView1->Columns[e->ColumnIndex]->Name;

			// Verificar si se hizo clic en el botón de Editar
			if (columnName == "editar") {
				int passengerId = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells["id"]->Value);

				openEditPassengerDialog(passengerId);
			}

			// Verifica si se hizo clic en el botón de Eliminar
			if (columnName == "eliminar") {
				int passengerId = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells["id"]->Value);
				
				confirmDeletePassengerDialog(passengerId);
			}
		}
	}

	void llenarTabla() {
		DataTable^ dt = PassengerDAO::getPassengers(dbManager);
		dataGridView1->Rows->Clear();
		for each (DataRow ^ row in dt->Rows) {
			dataGridView1->Rows->Add(row["id"], row["first_name"], row["last_name"], row["phone"], row["address"], row["birth_date"], row["passport_number"]);
		}
	}

	void openEditPassengerDialog(int passengerId) {
		EditarPasajeroDialog^ editarPasajeroDialog = gcnew EditarPasajeroDialog(passengerId);
		editarPasajeroDialog->ShowDialog();

		llenarTabla();
	}

	void EditarPasajeroDialog_Closed() {
		llenarTabla();
	}

	void confirmDeletePassengerDialog(int passengerId) {
		System::Windows::Forms::DialogResult result = MessageBox::Show("¿Estás seguro de eliminar el pasajero?", "Confirmar eliminación", MessageBoxButtons::OKCancel);
	
		if (result == System::Windows::Forms::DialogResult::OK) {
			PassengerDAO::deletePassenger(passengerId, dbManager);

			llenarTabla();
		}
	}

};
}
