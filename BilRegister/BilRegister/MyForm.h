#pragma once

namespace BilRegister {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

#include<string>
#include<vector>
#include <iostream>

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ container;
	private: System::Windows::Forms::TextBox^ tbYear;

	private: System::Windows::Forms::TextBox^ tbBrand;

	private: System::Windows::Forms::TextBox^ tbModell;

	private: System::Windows::Forms::Button^ btnClear;

	private: System::Windows::Forms::Button^ btnSubmit;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ lbCarContainer;
	private: System::Windows::Forms::TextBox^ tbCar;



	private: System::Windows::Forms::Label^ label5;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->container = (gcnew System::Windows::Forms::GroupBox());
			this->tbCar = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbYear = (gcnew System::Windows::Forms::TextBox());
			this->tbBrand = (gcnew System::Windows::Forms::TextBox());
			this->tbModell = (gcnew System::Windows::Forms::TextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbCarContainer = (gcnew System::Windows::Forms::ListBox());
			this->container->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Modell";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Brand";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Year";
			// 
			// container
			// 
			this->container->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->container->Controls->Add(this->tbCar);
			this->container->Controls->Add(this->label5);
			this->container->Controls->Add(this->tbYear);
			this->container->Controls->Add(this->tbBrand);
			this->container->Controls->Add(this->tbModell);
			this->container->Controls->Add(this->btnClear);
			this->container->Controls->Add(this->btnSubmit);
			this->container->Controls->Add(this->label4);
			this->container->Controls->Add(this->lbCarContainer);
			this->container->Controls->Add(this->label3);
			this->container->Controls->Add(this->label2);
			this->container->Controls->Add(this->label1);
			this->container->Location = System::Drawing::Point(85, 103);
			this->container->Name = L"container";
			this->container->Size = System::Drawing::Size(351, 328);
			this->container->TabIndex = 3;
			this->container->TabStop = false;
			// 
			// tbCar
			// 
			this->tbCar->Location = System::Drawing::Point(7, 228);
			this->tbCar->Name = L"tbCar";
			this->tbCar->Size = System::Drawing::Size(100, 20);
			this->tbCar->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Car";
			// 
			// tbYear
			// 
			this->tbYear->Location = System::Drawing::Point(6, 168);
			this->tbYear->Name = L"tbYear";
			this->tbYear->Size = System::Drawing::Size(100, 20);
			this->tbYear->TabIndex = 9;
			// 
			// tbBrand
			// 
			this->tbBrand->Location = System::Drawing::Point(7, 103);
			this->tbBrand->Name = L"tbBrand";
			this->tbBrand->Size = System::Drawing::Size(100, 20);
			this->tbBrand->TabIndex = 8;
			// 
			// tbModell
			// 
			this->tbModell->Location = System::Drawing::Point(9, 41);
			this->tbModell->Name = L"tbModell";
			this->tbModell->Size = System::Drawing::Size(100, 20);
			this->tbModell->TabIndex = 7;
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(182, 259);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(91, 35);
			this->btnClear->TabIndex = 6;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			// 
			// btnSubmit
			// 
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->Location = System::Drawing::Point(14, 265);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(74, 29);
			this->btnSubmit->TabIndex = 5;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &MyForm::btnSubmit_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(149, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Your Regristrations";
			// 
			// lbCarContainer
			// 
			this->lbCarContainer->FormattingEnabled = true;
			this->lbCarContainer->Location = System::Drawing::Point(169, 41);
			this->lbCarContainer->Name = L"lbCarContainer";
			this->lbCarContainer->Size = System::Drawing::Size(120, 212);
			this->lbCarContainer->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(550, 517);
			this->Controls->Add(this->container);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->container->ResumeLayout(false);
			this->container->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ model = tbModell->Text;
	String^ brand = tbBrand->Text;
	String^ year = tbYear->Text;
	String^ car = tbCar->Text;

	String^ registration = String::Concat(model, ", ", brand, ", ", year, ", ", car);

	lbCarContainer->Text = registration;
}


};
}
