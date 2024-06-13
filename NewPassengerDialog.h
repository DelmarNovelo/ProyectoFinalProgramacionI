#pragma once

#include "DataBaseManager.h"
#include "PassengerDAO.h"
#include "Passenger.h"

namespace ProyectoFinalProgramacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NewPassengerDialog
	/// </summary>
	public ref class NewPassengerDialog : public System::Windows::Forms::Form
	{
	public:
		NewPassengerDialog(void)
		{
			InitializeComponent();
			dbManager = gcnew DataBaseManager();
		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerBirthDate;
	private: System::Windows::Forms::Button^ saveButton;
	public:


	private: System::Windows::Forms::TextBox^ textBoxPassport;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxPhone;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxLastName;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxFirstName;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxAddress;

	private: System::Windows::Forms::Label^ Direccion;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label15;


	private:
		DataBaseManager^ dbManager;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~NewPassengerDialog()
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerBirthDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->saveButton = (gcnew System::Windows::Forms::Button());
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
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(11, 298);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 16);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Fecha nacimiento:";
			// 
			// dateTimePickerBirthDate
			// 
			this->dateTimePickerBirthDate->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->dateTimePickerBirthDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePickerBirthDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePickerBirthDate->Location = System::Drawing::Point(14, 319);
			this->dateTimePickerBirthDate->MaxDate = System::DateTime(2224, 6, 5, 16, 33, 0, 0);
			this->dateTimePickerBirthDate->Name = L"dateTimePickerBirthDate";
			this->dateTimePickerBirthDate->Size = System::Drawing::Size(551, 23);
			this->dateTimePickerBirthDate->TabIndex = 31;
			this->dateTimePickerBirthDate->Value = System::DateTime(2024, 6, 5, 0, 0, 0, 0);
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::Color::Teal;
			this->saveButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->saveButton->FlatAppearance->BorderSize = 0;
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold));
			this->saveButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->saveButton->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->saveButton->Location = System::Drawing::Point(424, 435);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(144, 42);
			this->saveButton->TabIndex = 30;
			this->saveButton->Text = L"Guardar";
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &NewPassengerDialog::saveButton_Click_1);
			// 
			// textBoxPassport
			// 
			this->textBoxPassport->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPassport->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassport->Location = System::Drawing::Point(14, 241);
			this->textBoxPassport->Multiline = true;
			this->textBoxPassport->Name = L"textBoxPassport";
			this->textBoxPassport->Size = System::Drawing::Size(554, 35);
			this->textBoxPassport->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(11, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 16);
			this->label4->TabIndex = 28;
			this->label4->Text = L"No. Pasaporte:";
			// 
			// textBoxPhone
			// 
			this->textBoxPhone->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPhone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPhone->Location = System::Drawing::Point(14, 168);
			this->textBoxPhone->Multiline = true;
			this->textBoxPhone->Name = L"textBoxPhone";
			this->textBoxPhone->Size = System::Drawing::Size(554, 35);
			this->textBoxPhone->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(11, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 16);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Telefono:";
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxLastName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxLastName->Location = System::Drawing::Point(14, 99);
			this->textBoxLastName->Multiline = true;
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(554, 35);
			this->textBoxLastName->TabIndex = 25;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(11, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Apellido:";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->BackColor = System::Drawing::Color::White;
			this->textBoxFirstName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxFirstName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxFirstName->Location = System::Drawing::Point(14, 31);
			this->textBoxFirstName->Multiline = true;
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(554, 35);
			this->textBoxFirstName->TabIndex = 23;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(11, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 16);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Nombre:";
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxAddress->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAddress->Location = System::Drawing::Point(14, 380);
			this->textBoxAddress->Multiline = true;
			this->textBoxAddress->Name = L"textBoxAddress";
			this->textBoxAddress->Size = System::Drawing::Size(554, 35);
			this->textBoxAddress->TabIndex = 34;
			// 
			// Direccion
			// 
			this->Direccion->AutoSize = true;
			this->Direccion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Direccion->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Direccion->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Direccion->Location = System::Drawing::Point(11, 359);
			this->Direccion->Name = L"Direccion";
			this->Direccion->Size = System::Drawing::Size(67, 16);
			this->Direccion->TabIndex = 33;
			this->Direccion->Text = L"Direccion:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(67, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 20);
			this->label10->TabIndex = 38;
			this->label10->Text = L"*";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(70, 76);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 20);
			this->label6->TabIndex = 39;
			this->label6->Text = L"*";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(70, 146);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 20);
			this->label7->TabIndex = 40;
			this->label7->Text = L"*";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(100, 218);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 20);
			this->label8->TabIndex = 41;
			this->label8->Text = L"*";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(125, 296);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 20);
			this->label9->TabIndex = 42;
			this->label9->Text = L"*";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(76, 357);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 20);
			this->label11->TabIndex = 43;
			this->label11->Text = L"*";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(11, 435);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(132, 17);
			this->label15->TabIndex = 44;
			this->label15->Text = L"* Campos requeridos";
			// 
			// RegistrarPasajeroDialog
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
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->textBoxPassport);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxPhone);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxLastName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxFirstName);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"RegistrarPasajeroDialog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Registrar Pasajero";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void saveButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
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

		// Llamar al método para guardar el pasajero en la base de datos
		PassengerDAO::createPassenger(passenger, dbManager);

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
