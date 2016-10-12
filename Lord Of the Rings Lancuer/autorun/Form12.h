#pragma once

namespace autorun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form12
	/// </summary>
	public ref class Form12 : public System::Windows::Forms::Form
	{
	public:
		Form12(void)
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
		~Form12()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form12::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(408, 330);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(427, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 82);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Das Spiel erfolgreich installiert wurde. Wenn Sie in der Readme.txt-Klick in der " 
				L"richtigen er angezeigt werden soll. Wir hoffen, es zu genießen.";
			// 
			// radioButton1
			// 
			this->radioButton1->AllowDrop = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->radioButton1->Location = System::Drawing::Point(521, 150);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(119, 24);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Zeige Bitte lesen";
			this->radioButton1->UseMnemonic = false;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form12::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AllowDrop = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->radioButton2->Location = System::Drawing::Point(521, 173);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(119, 24);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Zu Schließen";
			this->radioButton2->UseMnemonic = false;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// Form12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 327);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form12";
			this->Text = L"Ziel der Anlage";
			this->Load += gcnew System::EventHandler(this, &Form12::Form12_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form12_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				if(radioButton1->Checked==true)
				{ }


				if (radioButton1->Checked==false && radioButton2->Checked==true)
				{ Close(); }
			 }
};
}
