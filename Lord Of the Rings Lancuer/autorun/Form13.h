#pragma once
#include "resource.h"
#include "stdafx.h"
#include <Windows.h>
#include <WinBase.h>
#include "Form14.h"
namespace autorun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form13
	/// </summary>
	public ref class Form13 : public System::Windows::Forms::Form
	{
	public:
		Form13(void)
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
		~Form13()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
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
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 92);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(387, 34);
			this->progressBar1->TabIndex = 0;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form13::progressBar1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 20;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form13::timer1_Tick);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(68, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Install-in progress.Please wait ...";
			// 
			// Form13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(411, 179);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->Name = L"Form13";
			this->Text = L"installation progress ";
			this->Load += gcnew System::EventHandler(this, &Form13::Form13_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form13_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->timer1->Enabled = true;
			 }
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 this->progressBar1->Increment(1);
					   // CopyFileA("C:\\Program Files (x86)\\Electronic Arts\\Εφαρμογές Μου\\calc\\Debug\\calc.exe" , "C:\\Users\\jim\\Desktop\\Debug\\calc.exe" , false);
				        CopyFileA("C:\\Users\\jim\\Desktop\\Εφαρμογές Μου\\calc\\Debug\\calc.exe" , "C:\\Users\\jim\\Desktop\\calc.exe" , false);
						

				 if(this->progressBar1->Value == this->progressBar1->Maximum )
				 {        
					 this->timer1->Enabled = false;
					 Form14^ fo16 = gcnew Form14();
				     Hide();
				      fo16->ShowDialog();
				     
				 }
			 }
	};
}
