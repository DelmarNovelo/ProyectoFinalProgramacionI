#pragma once

#include "NewPassengerDialog.h"
#include "DataBaseManager.h"
#include "EditPassengerDialog.h"

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

			// Crea una nueva instancia del administrador de base de datos
			dbManager = gcnew DataBaseManager();
		}

	private:
		// Declaración de un miembro privado para manejar la conexión con la base de datos
		DataBaseManager^ dbManager;

	public:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ telefono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pasaporte;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fecha_nacimiento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ first_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ last_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ passport_number;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ birth_date;




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
		System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
		this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->first_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->last_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->passport_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->birth_date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->btnCrearPasajero = (gcnew System::Windows::Forms::Button());
		this->label1 = (gcnew System::Windows::Forms::Label());
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
		this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
		this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
		dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle13->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		dataGridViewCellStyle13->ForeColor = System::Drawing::Color::Teal;
		dataGridViewCellStyle13->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle13->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
		this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle13;
		this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
			this->id, this->first_name,
				this->last_name, this->phone, this->passport_number, this->birth_date
		});
		this->dataGridView1->Location = System::Drawing::Point(13, 68);
		this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
		this->dataGridView1->Name = L"dataGridView1";
		dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle15;
		this->dataGridView1->RowTemplate->Height = 35;
		this->dataGridView1->RowTemplate->ReadOnly = true;
		this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView1->Size = System::Drawing::Size(1095, 404);
		this->dataGridView1->TabIndex = 0;
		this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PassengersContainer::dataGridView1_CellContentClick);
		// 
		// id
		// 
		this->id->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
		dataGridViewCellStyle14->BackColor = System::Drawing::Color::White;
		dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->id->DefaultCellStyle = dataGridViewCellStyle14;
		this->id->FillWeight = 143.1472F;
		this->id->Frozen = true;
		this->id->HeaderText = L"ID";
		this->id->Name = L"id";
		this->id->Width = 60;
		// 
		// first_name
		// 
		this->first_name->FillWeight = 91.37057F;
		this->first_name->HeaderText = L"NOMBRE";
		this->first_name->Name = L"first_name";
		// 
		// last_name
		// 
		this->last_name->FillWeight = 91.37057F;
		this->last_name->HeaderText = L"APELLIDO";
		this->last_name->Name = L"last_name";
		// 
		// phone
		// 
		this->phone->FillWeight = 91.37057F;
		this->phone->HeaderText = L"TELEFONO";
		this->phone->Name = L"phone";
		// 
		// passport_number
		// 
		this->passport_number->FillWeight = 91.37057F;
		this->passport_number->HeaderText = L"PASAPORTE";
		this->passport_number->Name = L"passport_number";
		// 
		// birth_date
		// 
		this->birth_date->FillWeight = 91.37057F;
		this->birth_date->HeaderText = L"FECHA NACIMIENTO";
		this->birth_date->Name = L"birth_date";
		// 
		// btnCrearPasajero
		// 
		this->btnCrearPasajero->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->btnCrearPasajero->BackColor = System::Drawing::Color::Teal;
		this->btnCrearPasajero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnCrearPasajero->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btnCrearPasajero->ForeColor = System::Drawing::Color::White;
		this->btnCrearPasajero->Location = System::Drawing::Point(880, 22);
		this->btnCrearPasajero->Margin = System::Windows::Forms::Padding(4);
		this->btnCrearPasajero->Name = L"btnCrearPasajero";
		this->btnCrearPasajero->Size = System::Drawing::Size(228, 38);
		this->btnCrearPasajero->TabIndex = 1;
		this->btnCrearPasajero->Text = L"Registrar Pasajero";
		this->btnCrearPasajero->UseVisualStyleBackColor = false;
		this->btnCrearPasajero->Click += gcnew System::EventHandler(this, &PassengersContainer::btnCrearPasajero_Click);
		// 
		// label1
		// 
		this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left));
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label1->ForeColor = System::Drawing::Color::Teal;
		this->label1->Location = System::Drawing::Point(9, 27);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(205, 23);
		this->label1->TabIndex = 2;
		this->label1->Text = L"Pasajeros registrados";
		// 
		// PassengersContainer
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::White;
		this->ClientSize = System::Drawing::Size(1121, 485);
		this->Controls->Add(this->label1);
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
		NewPassengerDialog^ dialog = gcnew NewPassengerDialog();
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

	// Método para llenar la tabla de pasajeros en el DataGridView
	void llenarTabla() {
		// Obtiene una DataTable con todos los pasajeros desde la base de datos
		DataTable^ dt = PassengerDAO::getPassengers(dbManager);

		// Limpia todas las filas actuales en el DataGridView
		dataGridView1->Rows->Clear();

		// Itera sobre cada fila en la DataTable
		for each (DataRow ^ row in dt->Rows) {

			// Añade una nueva fila al DataGridView con los datos del pasajero
			dataGridView1->Rows->Add(row["id"], row["first_name"], row["last_name"], row["phone"], row["address"], row["birth_date"], row["passport_number"]);
		}
	}

	// Método para abrir el diálogo de edición de pasajero
	void openEditPassengerDialog(int passengerId) {

		// Crea una nueva instancia del diálogo de edición de pasajero, pasando el ID del pasajero
		EditPassengerDialog^ editarPasajeroDialog = gcnew EditPassengerDialog(passengerId);

		// Muestra el diálogo de edición de pasajero de manera modal
		editarPasajeroDialog->ShowDialog();

		// Después de cerrar el diálogo, vuelve a llenar la tabla de pasajeros
		llenarTabla();
	}

	// Método para confirmar y eliminar un pasajero
	void confirmDeletePassengerDialog(int passengerId) {

		// Muestra un cuadro de diálogo de confirmación para la eliminación del pasajero
		System::Windows::Forms::DialogResult result = MessageBox::Show("¿Está seguro que desea eliminar el pasajero seleccionado?", "Confirmar eliminación", MessageBoxButtons::OKCancel);

		// Si el usuario confirma
		if (result == System::Windows::Forms::DialogResult::OK) {

			// Elimina el pasajero de la base de datos usando su ID
			PassengerDAO::deletePassenger(passengerId, dbManager);

			// Vuelve a llenar la tabla de pasajeros
			llenarTabla();
		}
	}

};
}
