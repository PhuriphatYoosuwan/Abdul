#pragma once
#include "ChatForm.h"

namespace ChatBot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StartForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Head;
	protected:
	private: System::Windows::Forms::Button^ Startbtn;


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
			this->Head = (gcnew System::Windows::Forms::Label());
			this->Startbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Head
			// 
			this->Head->BackColor = System::Drawing::SystemColors::Control;
			this->Head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Head->Location = System::Drawing::Point(12, 9);
			this->Head->Name = L"Head";
			this->Head->Size = System::Drawing::Size(410, 87);
			this->Head->TabIndex = 0;
			this->Head->Text = L"ChatBOT";
			this->Head->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Startbtn
			// 
			this->Startbtn->Location = System::Drawing::Point(166, 99);
			this->Startbtn->Name = L"Startbtn";
			this->Startbtn->Size = System::Drawing::Size(80, 30);
			this->Startbtn->TabIndex = 1;
			this->Startbtn->Text = L"START";
			this->Startbtn->UseVisualStyleBackColor = true;
			this->Startbtn->Click += gcnew System::EventHandler(this, &StartForm::Startbtn_Click);
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 761);
			this->Controls->Add(this->Startbtn);
			this->Controls->Add(this->Head);
			this->Name = L"StartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StartForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Startbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		//ChatForm^ obji = gcnew ChatForm();
		//obji->ShowDialog();
		ChatForm chat;
		chat.ShowDialog();
		//chat.ShowDialog();
		//MessageBox::Show("Hi");
	}
};
}
