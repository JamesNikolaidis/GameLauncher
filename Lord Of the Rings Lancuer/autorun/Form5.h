#pragma once
#include "stdafx.h"
#include "Form6.h"
#include "Form13.h"
namespace autorun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		Form5(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//fbd = gcnew FolderBrowserDialog;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form5::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(221, 329);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(303, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Help";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form5::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(409, 294);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Next";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form5::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(509, 294);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form5::button3_Click);
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &Form5::folderBrowserDialog1_HelpRequest);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(522, 146);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Browse";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form5::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(226, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label2->Location = System::Drawing::Point(226, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 23);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Selected  Install Direction";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label3->Location = System::Drawing::Point(226, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 41);
			this->label3->TabIndex = 8;
			this->label3->Text = L"If you want to change please click Browse";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(232, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(374, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"C:\\Program Files (x86)\\Electronic Arts\\The lord of the Rings , The Hobbit";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(275, 149);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(223, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form5::textBox2_TextChanged_1);
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 329);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form5";
			this->Text = L"Lord Of the Rings : The Hobbit : Direction Choose";
			this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// FolderBrowserDialog ^ fbd;
	private: System::Void Form5_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
        SaveFileDialog ^ saveFileDialog1 = gcnew SaveFileDialog();	
		saveFileDialog1->Filter = "Tetx File|*.txt|All files|";
		 saveFileDialog1->Title = "Broswe The Installation File";
		 saveFileDialog1->ShowDialog();
		
      
       









		 }
private: System::Void folderBrowserDialog1_HelpRequest(System::Object^  sender, System::EventArgs^  e) {
			

		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			SaveFileDialog ^ saveFileDialog1 = gcnew SaveFileDialog();	
		saveFileDialog1->Filter = "Text File|*.txt|All files|";
		 saveFileDialog1->Title = "Browse The Installation File";
		 saveFileDialog1->ShowDialog();
		 textBox2->Text= saveFileDialog1->FileName;

		 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			Form6^ for4 =gcnew Form6();

			for4->ShowDialog();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
             Form13^ fi7= gcnew Form13();
			 Hide();
			 fi7->ShowDialog();
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
