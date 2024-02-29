#pragma once

namespace ChatBot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChatForm
	/// </summary>
	public ref class ChatForm : public System::Windows::Forms::Form
	{
	public:
		ChatForm(void)
		{
			InitializeComponent();
			btnSend->Show();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChatForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::Windows::Forms::TextBox^ textBox_UserInput;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->textBox_UserInput = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(410, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BOT";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnSend
			// 
			this->btnSend->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSend->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnSend->Location = System::Drawing::Point(347, 719);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(75, 30);
			this->btnSend->TabIndex = 1;
			this->btnSend->Text = L"Send";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &ChatForm::btnSend_Click);
			// 
			// textBox_UserInput
			// 
			this->textBox_UserInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_UserInput->Location = System::Drawing::Point(12, 713);
			this->textBox_UserInput->Name = L"textBox_UserInput";
			this->textBox_UserInput->Size = System::Drawing::Size(322, 38);
			this->textBox_UserInput->TabIndex = 2;
			// 
			// ChatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 761);
			this->Controls->Add(this->textBox_UserInput);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->label1);
			this->Name = L"ChatForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ChatForm";
			this->Load += gcnew System::EventHandler(this, &ChatForm::ChatForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ChatForm_Load(System::Object^ sender, System::EventArgs^ e) {
		btnSend->Show();

	}
		   int Top = 80;
		   int Left = 280;
		   int Count = 0;

	private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {
		Count++;
		for (int i = 0; i < Count; i++)
		{
			Label lblText = new Label();
			this->Controls->Add(lblText);

			lblText->BackColor = System::Drawing::Color::DeepSkyBlue;
			lblText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			lblText->ForeColor = System::Drawing::Color::White;
			lblText->Location = System::Drawing::Point(Left, Top);
			lblText->Name = L"lblText";
			lblText->Size = System::Drawing::Size(143, 40);
			lblText->TabIndex = 2;
			lblText->Text = L"TextTest";
			lblText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			Top += 50;
			Count--;
		}
	}
	};
}
