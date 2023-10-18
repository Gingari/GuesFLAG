#pragma once

namespace Project3 {



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ MainLabel;
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::Label^ Recordlabel;
	private: System::Windows::Forms::Button^ ButtonInfo;

	private: System::Windows::Forms::Button^ ButtonLeave;
	private: System::Windows::Forms::PictureBox^ FlagPicture;
	private: System::Windows::Forms::Button^ FirstAns;
	private: System::Windows::Forms::Button^ SecAns;
	private: System::Windows::Forms::Button^ ThrAns;
	private: System::Windows::Forms::Button^ FourAns;


	protected:

	protected:




	protected:



	protected:

	protected:





	protected:









	protected:









	protected:




	protected:


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->MainLabel = (gcnew System::Windows::Forms::Label());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->Recordlabel = (gcnew System::Windows::Forms::Label());
			this->ButtonInfo = (gcnew System::Windows::Forms::Button());
			this->ButtonLeave = (gcnew System::Windows::Forms::Button());
			this->FlagPicture = (gcnew System::Windows::Forms::PictureBox());
			this->FirstAns = (gcnew System::Windows::Forms::Button());
			this->SecAns = (gcnew System::Windows::Forms::Button());
			this->ThrAns = (gcnew System::Windows::Forms::Button());
			this->FourAns = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FlagPicture))->BeginInit();
			this->SuspendLayout();
			// 
			// MainLabel
			// 
			this->MainLabel->Font = (gcnew System::Drawing::Font(L"Ravie", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainLabel->ForeColor = System::Drawing::Color::Red;
			this->MainLabel->Location = System::Drawing::Point(12, 9);
			this->MainLabel->Name = L"MainLabel";
			this->MainLabel->Size = System::Drawing::Size(800, 140);
			this->MainLabel->TabIndex = 0;
			this->MainLabel->Text = L"Guess the flag";
			this->MainLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// StartButton
			// 
			this->StartButton->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->StartButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StartButton->Font = (gcnew System::Drawing::Font(L"Ravie", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartButton->ForeColor = System::Drawing::Color::Red;
			this->StartButton->Location = System::Drawing::Point(12, 350);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(800, 185);
			this->StartButton->TabIndex = 1;
			this->StartButton->Text = L"Start Game";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &MyForm::StartButton_Click);
			// 
			// Recordlabel
			// 
			this->Recordlabel->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Recordlabel->Font = (gcnew System::Drawing::Font(L"Ravie", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Recordlabel->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->Recordlabel->Location = System::Drawing::Point(12, 9);
			this->Recordlabel->Name = L"Recordlabel";
			this->Recordlabel->Size = System::Drawing::Size(100, 23);
			this->Recordlabel->TabIndex = 2;
			this->Recordlabel->Text = L"0/0";
			this->Recordlabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ButtonInfo
			// 
			this->ButtonInfo->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ButtonInfo->Cursor = System::Windows::Forms::Cursors::Default;
			this->ButtonInfo->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->ButtonInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonInfo->Font = (gcnew System::Drawing::Font(L"Ravie", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonInfo->Location = System::Drawing::Point(694, 614);
			this->ButtonInfo->Name = L"ButtonInfo";
			this->ButtonInfo->Size = System::Drawing::Size(121, 35);
			this->ButtonInfo->TabIndex = 3;
			this->ButtonInfo->Text = L"About Us";
			this->ButtonInfo->UseVisualStyleBackColor = false;
			this->ButtonInfo->Click += gcnew System::EventHandler(this, &MyForm::ButtonInfo_Click);
			// 
			// ButtonLeave
			// 
			this->ButtonLeave->BackColor = System::Drawing::Color::Silver;
			this->ButtonLeave->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->ButtonLeave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonLeave->Font = (gcnew System::Drawing::Font(L"Ravie", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonLeave->Location = System::Drawing::Point(20, 614);
			this->ButtonLeave->Name = L"ButtonLeave";
			this->ButtonLeave->Size = System::Drawing::Size(121, 35);
			this->ButtonLeave->TabIndex = 4;
			this->ButtonLeave->Text = L"Exit";
			this->ButtonLeave->UseVisualStyleBackColor = false;
			this->ButtonLeave->Click += gcnew System::EventHandler(this, &MyForm::ButtonLeave_Click);
			// 
			// FlagPicture
			// 
			this->FlagPicture->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->FlagPicture->Location = System::Drawing::Point(212, 179);
			this->FlagPicture->Name = L"FlagPicture";
			this->FlagPicture->Size = System::Drawing::Size(400, 165);
			this->FlagPicture->TabIndex = 5;
			this->FlagPicture->TabStop = false;
			// 
			// FirstAns
			// 
			this->FirstAns->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->FirstAns->Enabled = false;
			this->FirstAns->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->FirstAns->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FirstAns->Font = (gcnew System::Drawing::Font(L"Ravie", 18));
			this->FirstAns->Location = System::Drawing::Point(12, 350);
			this->FirstAns->Name = L"FirstAns";
			this->FirstAns->Size = System::Drawing::Size(180, 185);
			this->FirstAns->TabIndex = 6;
			this->FirstAns->Text = L"button1";
			this->FirstAns->UseVisualStyleBackColor = false;
			this->FirstAns->Visible = false;
			this->FirstAns->Click += gcnew System::EventHandler(this, &MyForm::FirstAns_Click);
			// 
			// SecAns
			// 
			this->SecAns->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->SecAns->Enabled = false;
			this->SecAns->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->SecAns->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SecAns->Font = (gcnew System::Drawing::Font(L"Ravie", 18));
			this->SecAns->Location = System::Drawing::Point(212, 410);
			this->SecAns->Name = L"SecAns";
			this->SecAns->Size = System::Drawing::Size(180, 185);
			this->SecAns->TabIndex = 7;
			this->SecAns->Text = L"button2";
			this->SecAns->UseVisualStyleBackColor = false;
			this->SecAns->Visible = false;
			this->SecAns->Click += gcnew System::EventHandler(this, &MyForm::SecAns_Click);
			// 
			// ThrAns
			// 
			this->ThrAns->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ThrAns->Enabled = false;
			this->ThrAns->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->ThrAns->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ThrAns->Font = (gcnew System::Drawing::Font(L"Ravie", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ThrAns->Location = System::Drawing::Point(432, 410);
			this->ThrAns->Name = L"ThrAns";
			this->ThrAns->Size = System::Drawing::Size(180, 185);
			this->ThrAns->TabIndex = 8;
			this->ThrAns->Text = L"button3";
			this->ThrAns->UseVisualStyleBackColor = false;
			this->ThrAns->Visible = false;
			this->ThrAns->Click += gcnew System::EventHandler(this, &MyForm::ThrAns_Click);
			// 
			// FourAns
			// 
			this->FourAns->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->FourAns->Enabled = false;
			this->FourAns->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->FourAns->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FourAns->Font = (gcnew System::Drawing::Font(L"Ravie", 18));
			this->FourAns->Location = System::Drawing::Point(632, 350);
			this->FourAns->Name = L"FourAns";
			this->FourAns->Size = System::Drawing::Size(180, 185);
			this->FourAns->TabIndex = 9;
			this->FourAns->Text = L"123";
			this->FourAns->UseVisualStyleBackColor = false;
			this->FourAns->Visible = false;
			this->FourAns->Click += gcnew System::EventHandler(this, &MyForm::FourAns_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(834, 661);
			this->ControlBox = false;
			this->Controls->Add(this->FourAns);
			this->Controls->Add(this->ThrAns);
			this->Controls->Add(this->SecAns);
			this->Controls->Add(this->FirstAns);
			this->Controls->Add(this->FlagPicture);
			this->Controls->Add(this->ButtonLeave);
			this->Controls->Add(this->ButtonInfo);
			this->Controls->Add(this->Recordlabel);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->MainLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FlagQuesser";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FlagPicture))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


private: int allcount = 0;
private: int correctcount = 0;
private: int CorrectAns;
private: int FunAns;
private: int SunAns;
private: int TunAns;
private: bool play = false;
private: String^ CorFilename;
private: int CorFilenum;


private: void Game();
private: void RandomPicture();
private: String^ RandomPictureNameF();
private: String^ RandomPictureNameS();
private: String^ RandomPictureNameT();
private: void GenUncorrect();
private: void Answer();

private: System::Void ButtonLeave_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ButtonInfo_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void FirstAns_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void SecAns_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ThrAns_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void FourAns_Click(System::Object^ sender, System::EventArgs^ e);

};
}
