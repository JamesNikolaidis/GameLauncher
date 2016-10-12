#pragma once
#include "stdafx.h"
#include "Form8.h"
#include "Form9.h"
namespace autorun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form7
	/// </summary>
	public ref class Form7 : public System::Windows::Forms::Form
	{
	public:
		Form7(void)
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
		~Form7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form7::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(185, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(485, 143);
			this->label1->TabIndex = 2;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(180, 323);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AllowDrop = true;
			this->radioButton1->AutoSize = true;
			this->radioButton1->CheckAlign = System::Drawing::ContentAlignment::TopRight;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->radioButton1->Location = System::Drawing::Point(226, 175);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(373, 20);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->Text = L"Ich glaube nicht, Akzeptieren Sie die Nutzungsbedingungen.";
			this->radioButton1->UseMnemonic = false;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form7::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AllowDrop = true;
			this->radioButton2->AutoSize = true;
			this->radioButton2->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->radioButton2->Location = System::Drawing::Point(208, 201);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(391, 20);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->Text = L"Ich habe die Nutzungsbedingungen gelesen und akzeptiere sie.";
			this->radioButton2->UseMnemonic = false;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form7::radioButton2_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(315, 283);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Hilfe";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form7::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(523, 283);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Rückgängig Machen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form7::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(408, 283);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Als Nächstes";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form7::button3_Click);
			// 
			// Form7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 318);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form7";
			this->Text = L"Der Herr der Ringe: Der Hobbit: Regeln";
			this->Load += gcnew System::EventHandler(this, &Form7::Form7_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form7_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {Close();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form8^ fo10 =gcnew Form8();
			 fo10->ShowDialog();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ( radioButton2->Checked==true)
			{ Hide();
			Form9^ fi1 = gcnew Form9();
			fi1->ShowDialog();}
			   if (radioButton2->Checked==false && radioButton1->Checked==true)
			 {
				  
				   MessageBox::Show("Leider kann nicht wir, weiterzumachen, müssen Sie die Bedingungen akzeptieren use.Please überprüfen Sie die richtige Taste","Achtung",MessageBoxButtons::OK); 
			 }
			 
			 
			 




		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //radioButton2->Checked=true;
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //radioButton1->Checked=true;
		 }
};
}
