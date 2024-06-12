#pragma once

#include "PassengerDAO.h"
#include "Passenger.h"
#include "DataBaseManager.h"

namespace ProyectoFinalProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de EditarPasajeroDialog
	/// </summary>
	public ref class EditarPasajeroDialog : public System::Windows::Forms::Form
	{
	public:
		EditarPasajeroDialog(int passengerId)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			this->passengerId = passengerId;
			this->dbManager = gcnew DataBaseManager();
		}

	private:
		int passengerId;
	private: System::Windows::Forms::TextBox^ textBoxAddress;
	private: System::Windows::Forms::Label^ Direccion;
		   DataBaseManager^ dbManager;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~EditarPasajeroDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerNacimiento;
	private: System::Windows::Forms::Button^ buttonGuardar;
	private: System::Windows::Forms::TextBox^ textBoxPasaporte;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxTelefono;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxApellido;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxNombre;
	private: System::Windows::Forms::Label^ label1;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerNacimiento = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonGuardar = (gcnew System::Windows::Forms::Button());
			this->textBoxPasaporte = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxApellido = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->Direccion = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(9, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 15);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Fecha Nacimiento:";
			// 
			// dateTimePickerNacimiento
			// 
			this->dateTimePickerNacimiento->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->dateTimePickerNacimiento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePickerNacimiento->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePickerNacimiento->Location = System::Drawing::Point(12, 317);
			this->dateTimePickerNacimiento->MaxDate = System::DateTime(2224, 6, 5, 16, 33, 0, 0);
			this->dateTimePickerNacimiento->Name = L"dateTimePickerNacimiento";
			this->dateTimePickerNacimiento->Size = System::Drawing::Size(551, 22);
			this->dateTimePickerNacimiento->TabIndex = 20;
			this->dateTimePickerNacimiento->Value = System::DateTime(2024, 6, 5, 0, 0, 0, 0);
			// 
			// buttonGuardar
			// 
			this->buttonGuardar->BackColor = System::Drawing::Color::Black;
			this->buttonGuardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonGuardar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonGuardar->Location = System::Drawing::Point(428, 437);
			this->buttonGuardar->Name = L"buttonGuardar";
			this->buttonGuardar->Size = System::Drawing::Size(144, 42);
			this->buttonGuardar->TabIndex = 19;
			this->buttonGuardar->Text = L"ACTUALIZAR";
			this->buttonGuardar->UseVisualStyleBackColor = false;
			this->buttonGuardar->Click += gcnew System::EventHandler(this, &EditarPasajeroDialog::buttonGuardar_Click);
			// 
			// textBoxPasaporte
			// 
			this->textBoxPasaporte->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPasaporte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxPasaporte->Location = System::Drawing::Point(12, 239);
			this->textBoxPasaporte->Multiline = true;
			this->textBoxPasaporte->Name = L"textBoxPasaporte";
			this->textBoxPasaporte->Size = System::Drawing::Size(554, 35);
			this->textBoxPasaporte->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(9, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 15);
			this->label4->TabIndex = 17;
			this->label4->Text = L"No. Pasaporte:";
			// 
			// textBoxTelefono
			// 
			this->textBoxTelefono->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxTelefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTelefono->Location = System::Drawing::Point(12, 166);
			this->textBoxTelefono->Multiline = true;
			this->textBoxTelefono->Name = L"textBoxTelefono";
			this->textBoxTelefono->Size = System::Drawing::Size(554, 35);
			this->textBoxTelefono->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(9, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 15);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Telefono:";
			// 
			// textBoxApellido
			// 
			this->textBoxApellido->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxApellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxApellido->Location = System::Drawing::Point(12, 97);
			this->textBoxApellido->Multiline = true;
			this->textBoxApellido->Name = L"textBoxApellido";
			this->textBoxApellido->Size = System::Drawing::Size(554, 35);
			this->textBoxApellido->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(9, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 15);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Apellido:";
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->BackColor = System::Drawing::Color::White;
			this->textBoxNombre->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNombre->Location = System::Drawing::Point(12, 29);
			this->textBoxNombre->Multiline = true;
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(554, 35);
			this->textBoxNombre->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(9, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 15);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Nombre:";
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAddress->Location = System::Drawing::Point(12, 384);
			this->textBoxAddress->Multiline = true;
			this->textBoxAddress->Name = L"textBoxAddress";
			this->textBoxAddress->Size = System::Drawing::Size(554, 35);
			this->textBoxAddress->TabIndex = 36;
			// 
			// Direccion
			// 
			this->Direccion->AutoSize = true;
			this->Direccion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Direccion->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Direccion->Location = System::Drawing::Point(9, 363);
			this->Direccion->Name = L"Direccion";
			this->Direccion->Size = System::Drawing::Size(68, 15);
			this->Direccion->TabIndex = 35;
			this->Direccion->Text = L"Direccion";
			// 
			// EditarPasajeroDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 491);
			this->Controls->Add(this->textBoxAddress);
			this->Controls->Add(this->Direccion);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePickerNacimiento);
			this->Controls->Add(this->buttonGuardar);
			this->Controls->Add(this->textBoxPasaporte);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxTelefono);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxApellido);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxNombre);
			this->Controls->Add(this->label1);
			this->Name = L"EditarPasajeroDialog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Editar Pasajero";
			this->Load += gcnew System::EventHandler(this, &EditarPasajeroDialog::EditarPasajeroDialog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditarPasajeroDialog_Load(System::Object^ sender, System::EventArgs^ e) {
		Passenger^ passenger = PassengerDAO::getPassengerDetailsForEditting(this->passengerId, this->dbManager);

		try
		{
			textBoxNombre->Text = passenger->FirstName;
			textBoxApellido->Text = passenger->LastName;
			textBoxTelefono->Text = passenger->Phone;
			textBoxAddress->Text = passenger->Address;
			dateTimePickerNacimiento->Text = passenger->BirthDate;
			textBoxPasaporte->Text = passenger->PassportNumber;
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}

	private: System::Void buttonGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			DateTime selectedDate = dateTimePickerNacimiento->Value;

			Passenger^ passenger = gcnew Passenger(
				textBoxNombre->Text,
				textBoxApellido->Text,
				textBoxTelefono->Text,
				textBoxAddress->Text,
				selectedDate.ToString("yyyy-MM-dd"),
				textBoxPasaporte->Text
			);

			passenger->Id = this->passengerId;

			PassengerDAO::updatePassenger(passenger, dbManager);

			this->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
	};
}
