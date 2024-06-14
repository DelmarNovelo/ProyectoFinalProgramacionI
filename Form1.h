#pragma once

#include "PassengersContainer.h"
#include "DataBaseManager.h"
#include "FlightsContainer.h"
#include "FlightDetails.h"

using namespace std;

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panelContenedor;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelContenedor = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1121, 41);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Teal;
			this->label1->Location = System::Drawing::Point(408, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(476, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"AEROPUERTO INTERNACIONAL MUNDO MAYA";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(12, 49);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1121, 62);
			this->panel2->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::OrangeRed;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(184, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"VUELOS";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(52, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"PASAJEROS";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panelContenedor
			// 
			this->panelContenedor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelContenedor->Location = System::Drawing::Point(12, 118);
			this->panelContenedor->Name = L"panelContenedor";
			this->panelContenedor->Size = System::Drawing::Size(1121, 485);
			this->panelContenedor->TabIndex = 2;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1145, 615);
			this->Controls->Add(this->panelContenedor);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Proyecto Final Programacion I";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
		// Método genérico para cargar un formulario dentro de un panel contenedor
		template<class T>
		void loadForm(T form) {
			// Verificar si hay controles en el panel contenedor y remover el primero si existe
			if (this->panelContenedor->Controls->Count > 0) {
				this->panelContenedor->Controls->RemoveAt(0);
			}

			// Configurar el formulario para que no sea de nivel superior y se ajuste al tamaño del panel contenedor
			form->TopLevel = false;
			form->Dock = DockStyle::Fill;

			// Agregar el formulario al panel contenedor
			this->panelContenedor->Controls->Add(form);

			// Establecer el formulario como Tag del panel contenedor
			this->panelContenedor->Tag = form;

			// Mostrar el formulario
			form->Show();
		}

		// Evento que se dispara al cargar el formulario principal (Form1)
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	// Cargar inicialmente el formulario de contenedor de pasajeros
	this->loadForm(gcnew ProyectoFinalProgramacion::PassengersContainer);
}

	   // Evento que se dispara al hacer clic en el botón 1
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Cargar el formulario de contenedor de pasajeros al hacer clic en el botón 1
	this->loadForm(gcnew ProyectoFinalProgramacion::PassengersContainer);
}

	   // Evento que se dispara al hacer clic en el botón 2
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Crear una instancia del contenedor de vuelos
	ProyectoFinalProgramacion::FlightsContainer^ flightsContainer = gcnew ProyectoFinalProgramacion::FlightsContainer();

	// Suscribirse al evento de carga de formulario del contenedor de vuelos
	flightsContainer->LoadFormEvent += gcnew LoadFormEventHandler(this, &Form1::OnLoadFormEvent);

	// Cargar el contenedor de vuelos dentro del panel contenedor principal
	this->loadForm(flightsContainer);
}

	   // Manejador de evento personalizado que se dispara cuando se carga un formulario dentro del contenedor
private: void OnLoadFormEvent(String^ formName, int id) {
	// Verificar si el nombre del formulario es "FlightDetailsForm"
	if (formName == "FlightDetailsForm") {
		// Crear una instancia del formulario de detalles de vuelo con el ID proporcionado
		ProyectoFinalProgramacion::FlightDetails^ flightDetails = gcnew ProyectoFinalProgramacion::FlightDetails(id);

		// Cargar el formulario de detalles de vuelo dentro del panel contenedor principal
		this->loadForm(flightDetails);
	}
}

};
}
