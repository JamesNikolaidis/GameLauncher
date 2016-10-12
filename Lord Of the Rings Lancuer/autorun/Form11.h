#pragma once
#include "resource.h"
#include "stdafx.h"
#include <Windows.h>
#include <WinBase.h>
#include "Form12.h"
namespace autorun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form11
	/// </summary>
	public ref class Form11 : public System::Windows::Forms::Form
	{
	public:
		Form11(void)
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
		~Form11()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ProgressBar^  progressBar2;

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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 20;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form11::timer1_Tick);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(135, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Einbau in progress.Please warten ...";
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(12, 47);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(424, 23);
			this->progressBar2->TabIndex = 2;
			this->progressBar2->Click += gcnew System::EventHandler(this, &Form11::progressBar2_Click);
			// 
			// Form11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(444, 116);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->label1);
			this->Name = L"Form11";
			this->Text = L"Fortschritt";
			this->Load += gcnew System::EventHandler(this, &Form11::Form11_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
				
				 
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				  this->progressBar2->Increment(1);
					   // CopyFileA("C:\\Program Files (x86)\\Electronic Arts\\Εφαρμογές Μου\\calc\\Debug\\calc.exe" , "C:\\Users\\jim\\Desktop\\Debug\\calc.exe" , false);
				        CopyFileA("C:\\Users\\jim\\Desktop\\Εφαρμογές Μου\\calc\\Debug\\calc.exe" , "C:\\Users\\jim\\Desktop\\calc.exe" , false);
						

				 if(this->progressBar2->Value == this->progressBar2->Maximum )
				 {        
					 this->timer1->Enabled = false;
					 Form12^ fo12 = gcnew Form12();
				     Hide();
				      fo12->ShowDialog();
				     
				 }
				 
				 
				 
					 

				 
					 


			 }
	private: System::Void Form11_Load(System::Object^  sender, System::EventArgs^  e) {
				   this->timer1->Enabled = true;
				

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
private: System::Void progressBar2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
