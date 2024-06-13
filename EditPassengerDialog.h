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
	/// Resumen de EditPassengerDialog
	/// </summary>
	public ref class EditPassengerDialog : public System::Windows::Forms::Form
	{
	public:
		EditPassengerDialog(int passengerId)
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
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label15;
		   DataBaseManager^ dbManager;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~EditPassengerDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerBirthDate;
	protected:

	private: System::Windows::Forms::Button^ updateButton;
	private: System::Windows::Forms::TextBox^ textBoxPassport;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxPhone;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxLastName;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxFirstName;


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
			this->dateTimePickerBirthDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->updateButton = (gcnew System::Windows::Forms::Button());
			this->textBoxPassport = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxPhone = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->Direccion = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(9, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 16);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Fecha de nacimiento:";
			// 
			// dateTimePickerBirthDate
			// 
			this->dateTimePickerBirthDate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePickerBirthDate->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->dateTimePickerBirthDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePickerBirthDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePickerBirthDate->Location = System::Drawing::Point(12, 317);
			this->dateTimePickerBirthDate->MaxDate = System::DateTime(2224, 6, 5, 16, 33, 0, 0);
			this->dateTimePickerBirthDate->Name = L"dateTimePickerBirthDate";
			this->dateTimePickerBirthDate->Size = System::Drawing::Size(551, 23);
			this->dateTimePickerBirthDate->TabIndex = 20;
			this->dateTimePickerBirthDate->Value = System::DateTime(2024, 6, 5, 0, 0, 0, 0);
			// 
			// updateButton
			// 
			this->updateButton->BackColor = System::Drawing::Color::Teal;
			this->updateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->updateButton->Location = System::Drawing::Point(422, 437);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(144, 42);
			this->updateButton->TabIndex = 19;
			this->updateButton->Text = L"Actualizar";
			this->updateButton->UseVisualStyleBackColor = false;
			this->updateButton->Click += gcnew System::EventHandler(this, &EditPassengerDialog::updateButton_Click);
			// 
			// textBoxPassport
			// 
			this->textBoxPassport->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPassport->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassport->Location = System::Drawing::Point(12, 239);
			this->textBoxPassport->Multiline = true;
			this->textBoxPassport->Name = L"textBoxPassport";
			this->textBoxPassport->Size = System::Drawing::Size(554, 35);
			this->textBoxPassport->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(9, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 16);
			this->label4->TabIndex = 17;
			this->label4->Text = L"No. Pasaporte:";
			// 
			// textBoxPhone
			// 
			this->textBoxPhone->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPhone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPhone->Location = System::Drawing::Point(12, 166);
			this->textBoxPhone->Multiline = true;
			this->textBoxPhone->Name = L"textBoxPhone";
			this->textBoxPhone->Size = System::Drawing::Size(554, 35);
			this->textBoxPhone->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(9, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 16);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Telefono:";
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxLastName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxLastName->Location = System::Drawing::Point(12, 97);
			this->textBoxLastName->Multiline = true;
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(554, 35);
			this->textBoxLastName->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(9, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Apellido:";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->BackColor = System::Drawing::Color::White;
			this->textBoxFirstName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxFirstName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxFirstName->Location = System::Drawing::Point(12, 29);
			this->textBoxFirstName->Multiline = true;
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(554, 35);
			this->textBoxFirstName->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(9, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Nombre:";
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxAddress->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->Direccion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Direccion->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Direccion->Location = System::Drawing::Point(9, 363);
			this->Direccion->Name = L"Direccion";
			this->Direccion->Size = System::Drawing::Size(67, 16);
			this->Direccion->TabIndex = 35;
			this->Direccion->Text = L"Dirección:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(65, 6);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 20);
			this->label10->TabIndex = 37;
			this->label10->Text = L"*";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(68, 74);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 20);
			this->label6->TabIndex = 38;
			this->label6->Text = L"*";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(68, 143);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 20);
			this->label7->TabIndex = 39;
			this->label7->Text = L"*";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(100, 216);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 20);
			this->label8->TabIndex = 40;
			this->label8->Text = L"*";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(142, 294);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 20);
			this->label9->TabIndex = 41;
			this->label9->Text = L"*";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(74, 361);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 20);
			this->label11->TabIndex = 42;
			this->label11->Text = L"*";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(9, 437);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(132, 17);
			this->label15->TabIndex = 43;
			this->label15->Text = L"* Campos requeridos";
			// 
			// EditarPasajeroDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(584, 491);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBoxAddress);
			this->Controls->Add(this->Direccion);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePickerBirthDate);
			this->Controls->Add(this->updateButton);
			this->Controls->Add(this->textBoxPassport);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxPhone);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxLastName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxFirstName);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"EditarPasajeroDialog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Editar Pasajero";
			this->Load += gcnew System::EventHandler(this, &EditPassengerDialog::EditarPasajeroDialog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditarPasajeroDialog_Load(System::Object^ sender, System::EventArgs^ e) {
		Passenger^ passenger = PassengerDAO::getPassengerDetails(this->passengerId, this->dbManager);

		try
		{
			textBoxFirstName->Text = passenger->FirstName;
			textBoxLastName->Text = passenger->LastName;
			textBoxPhone->Text = passenger->Phone;
			textBoxAddress->Text = passenger->Address;
			dateTimePickerBirthDate->Text = passenger->BirthDate;
			textBoxPassport->Text = passenger->PassportNumber;
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}

		   // Evento que se dispara al hacer clic en el botón "Actualizar"
	private: System::Void updateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			// Obtener los valores de los campos de texto
			String^ firstName = textBoxFirstName->Text;
			String^ lastName = textBoxLastName->Text;
			String^ phone = textBoxPhone->Text;
			String^ address = textBoxAddress->Text;
			String^ passportNumber = textBoxPassport->Text;

			// Validar que el campo "Nombre" no esté vacío.
			if (String::IsNullOrEmpty(firstName->Trim())) {
				throw gcnew Exception("Ingrese un nombre");
			}

			// Validar que el campo "Apellido" no esté vacío.
			if (String::IsNullOrEmpty(lastName->Trim())) {
				throw gcnew Exception("Ingrese un apellido");
			}

			// Validar que el campo "Teléfono" no esté vacío.
			if (String::IsNullOrEmpty(phone->Trim())) {
				throw gcnew Exception("Ingrese un número de teléfono");
			}

			// Validar que el campo "Dirección" no esté vacío.
			if (String::IsNullOrEmpty(address->Trim())) {
				throw gcnew Exception("Ingrese una dirección");
			}

			// Validar que el campo "Número de pasaporte" no esté vacío.
			if (String::IsNullOrEmpty(passportNumber->Trim())) {
				throw gcnew Exception("Ingrese un número de pasaporte");
			}

			// Obtener la fecha seleccionada en el DateTimePicker
			DateTime selectedDate = dateTimePickerBirthDate->Value;

			// Crear una instancia de la clase Passenger con los valores obtenidos
			Passenger^ passenger = gcnew Passenger(
				firstName,
				lastName,
				phone,
				address,
				selectedDate.ToString("yyyy-MM-dd"),
				passportNumber
			);

			// Asignar el ID del pasajero a la instancia creada
			passenger->Id = this->passengerId;

			// Llamar al método para actualizar el pasajero en la base de datos
			PassengerDAO::updatePassenger(passenger, dbManager);

			// Cerrar el formulario actual
			this->Close();
		}
		catch (Exception^ e)
		{
			// Mostrar un mensaje de error en caso de excepción
			MessageBox::Show(e->Message);
		}
	}

};
}
