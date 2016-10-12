#pragma once

namespace autorun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form14
	/// </summary>
	public ref class Form14 : public System::Windows::Forms::Form
	{
	public:
		Form14(void)
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
		~Form14()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form14::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-8, -34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(408, 330);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(416, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 82);
			this->label1->TabIndex = 2;
			this->label1->Text = L"The game has installed succesfully. If you want to see the Readme.txt click in th" 
				L"e proper button . We Hope to enjoy it .";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(514, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 24);
			this->button1->TabIndex = 3;
			this->button1->Text = L"View Readme.txt";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(514, 179);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 24);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form14::button2_Click);
			// 
			// Form14
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 294);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form14";
			this->Text = L"Finish";
			this->Load += gcnew System::EventHandler(this, &Form14::Form14_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form14_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
};
}
