#pragma once
#include "stdafx.h"
#include "Form3.h"
#include "Form7.h"
namespace autorun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(289, 394);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(309, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 53);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Please Select The Language you prefer to install the game";
			this->label1->Click += gcnew System::EventHandler(this, &Form2::label1_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AllowDrop = true;
			this->radioButton3->Location = System::Drawing::Point(363, 124);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(53, 17);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Italian";
			this->radioButton3->UseMnemonic = false;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AllowDrop = true;
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(362, 193);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(52, 17);
			this->radioButton4->TabIndex = 5;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Spain";
			this->radioButton4->UseMnemonic = false;
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AllowDrop = true;
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(362, 216);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(63, 17);
			this->radioButton5->TabIndex = 6;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Russian";
			this->radioButton5->UseMnemonic = false;
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AllowDrop = true;
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(362, 239);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(68, 17);
			this->radioButton6->TabIndex = 7;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Ελληνικά";
			this->radioButton6->UseMnemonic = false;
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AllowDrop = true;
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(362, 262);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(58, 17);
			this->radioButton7->TabIndex = 8;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Turkey";
			this->radioButton7->UseMnemonic = false;
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(418, 355);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(522, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(323, 355);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Help";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AllowDrop = true;
			this->radioButton1->Location = System::Drawing::Point(362, 147);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(59, 17);
			this->radioButton1->TabIndex = 12;
			this->radioButton1->Text = L"English";
			this->radioButton1->UseMnemonic = false;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form2::radioButton1_CheckedChanged_1);
			// 
			// radioButton2
			// 
			this->radioButton2->AllowDrop = true;
			this->radioButton2->Location = System::Drawing::Point(363, 170);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(62, 17);
			this->radioButton2->TabIndex = 13;
			this->radioButton2->Text = L"German";
			this->radioButton2->UseMnemonic = false;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form2::radioButton2_CheckedChanged_1);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 390);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form2";
			this->Text = L"Lord Of the Rings : The Hobbit : Language Selection";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				
			if (radioButton1->Checked == true )
			{ 			Hide();
			Form3^ fo8 = gcnew Form3();
			 fo8->ShowDialog();} 
			else
			{  
				 if (radioButton2->Checked ==true )
				 { 
				 Hide();
				 Form7^ fo6 = gcnew Form7();
				 fo6->ShowDialog();
				 } 
			
			
			}



		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 //radioButton2->AutoCheck=false;
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //radioButton1->AutoCheck=false;
		 }
private: System::Void radioButton1_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
			// radioButton1->AutoCheck=false;
		 }
private: System::Void radioButton2_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 //radioButton2->AutoCheck=false;
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
