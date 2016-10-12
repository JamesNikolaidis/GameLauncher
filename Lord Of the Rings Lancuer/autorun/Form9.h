#pragma once
#include "stdafx.h"
#include "Form10.h"
#include "Form11.h"
namespace autorun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form9
	/// </summary>
	public ref class Form9 : public System::Windows::Forms::Form
	{
	public:
		Form9(void)
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
		~Form9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form9::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(221, 329);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(341, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 27);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Hilfe";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form9::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(414, 294);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 27);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Als Nächstes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form9::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(507, 294);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 27);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Rückgängig Machen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form9::button3_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(226, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 22);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Ausgewählte Installieren Direction";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(226, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(374, 20);
			this->textBox1->TabIndex = 10;
			this->textBox1->Text = L"C:\\Program Files (x86)\\Electronic Arts\\The lord of the Rings , The Hobbit";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label2->Location = System::Drawing::Point(223, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(222, 18);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Wenn Sie ändern möchten, bitte klicken Sie auf Durchsuchen";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(257, 124);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(225, 20);
			this->textBox2->TabIndex = 12;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form9::textBox2_TextChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button4->Location = System::Drawing::Point(522, 119);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 29);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Bättern";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form9::button4_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form9::timer1_Tick);
			// 
			// Form9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(639, 329);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form9";
			this->Text = L"Der Herr der Ringe: Der Hobbit: Richtung wählen";
			this->Load += gcnew System::EventHandler(this, &Form9::Form9_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form9_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 SaveFileDialog ^ saveFileDialog1 = gcnew SaveFileDialog();
			 
		     saveFileDialog1->Title = "bättern die Installationsdatei";
			 saveFileDialog1->ShowDialog();
			 textBox2->Text= saveFileDialog1->FileName;

		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form10^ fi2 = gcnew Form10();
			 fi2->ShowDialog();

		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Start();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form11^ fi4= gcnew Form11();
			 Hide();
			 fi4->ShowDialog();
			 this->timer1->Start();



		 }
};
}
