#pragma once

namespace Ram {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ PlayerOb;
	private: System::Windows::Forms::Label^ PlayerXB;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnTic3;
	private: System::Windows::Forms::Button^ btnTic2;
	private: System::Windows::Forms::Button^ btnTic1;
	private: System::Windows::Forms::Button^ btnTic8;
	private: System::Windows::Forms::Button^ btnTic7;
	private: System::Windows::Forms::Button^ btnTic6;
	private: System::Windows::Forms::Button^ btnTic5;
	private: System::Windows::Forms::Button^ btnTic4;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnNewGame;
	private: System::Windows::Forms::Button^ btnTic9;








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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnNewGame = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->PlayerOb = (gcnew System::Windows::Forms::Label());
			this->PlayerXB = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnTic9 = (gcnew System::Windows::Forms::Button());
			this->btnTic8 = (gcnew System::Windows::Forms::Button());
			this->btnTic7 = (gcnew System::Windows::Forms::Button());
			this->btnTic6 = (gcnew System::Windows::Forms::Button());
			this->btnTic5 = (gcnew System::Windows::Forms::Button());
			this->btnTic4 = (gcnew System::Windows::Forms::Button());
			this->btnTic3 = (gcnew System::Windows::Forms::Button());
			this->btnTic2 = (gcnew System::Windows::Forms::Button());
			this->btnTic1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1338, 129);
			this->panel1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(59, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(799, 91);
			this->label5->TabIndex = 1;
			this->label5->Text = L"TIC TOC TOE GAME";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Location = System::Drawing::Point(684, 13);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(623, 566);
			this->panel4->TabIndex = 1;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->btnReset);
			this->panel6->Controls->Add(this->btnNewGame);
			this->panel6->Location = System::Drawing::Point(18, 299);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(592, 240);
			this->panel6->TabIndex = 1;
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(57, 146);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(450, 71);
			this->btnReset->TabIndex = 1;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnNewGame
			// 
			this->btnNewGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewGame->Location = System::Drawing::Point(57, 49);
			this->btnNewGame->Name = L"btnNewGame";
			this->btnNewGame->Size = System::Drawing::Size(450, 77);
			this->btnNewGame->TabIndex = 0;
			this->btnNewGame->Text = L"New Game";
			this->btnNewGame->UseVisualStyleBackColor = true;
			this->btnNewGame->Click += gcnew System::EventHandler(this, &MyForm::btnNewGame_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->PlayerOb);
			this->panel5->Controls->Add(this->PlayerXB);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(18, 28);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(592, 233);
			this->panel5->TabIndex = 0;
			// 
			// PlayerOb
			// 
			this->PlayerOb->BackColor = System::Drawing::Color::Gold;
			this->PlayerOb->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PlayerOb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerOb->Location = System::Drawing::Point(313, 137);
			this->PlayerOb->Name = L"PlayerOb";
			this->PlayerOb->Size = System::Drawing::Size(194, 75);
			this->PlayerOb->TabIndex = 3;
			this->PlayerOb->Text = L"0";
			this->PlayerOb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PlayerXB
			// 
			this->PlayerXB->BackColor = System::Drawing::Color::Gold;
			this->PlayerXB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PlayerXB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerXB->Location = System::Drawing::Point(313, 27);
			this->PlayerXB->Name = L"PlayerXB";
			this->PlayerXB->Size = System::Drawing::Size(194, 75);
			this->PlayerXB->TabIndex = 2;
			this->PlayerXB->Text = L"0";
			this->PlayerXB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 46);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player O:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(49, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Player X:";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btnTic9);
			this->panel2->Controls->Add(this->btnTic8);
			this->panel2->Controls->Add(this->btnTic7);
			this->panel2->Controls->Add(this->btnTic6);
			this->panel2->Controls->Add(this->btnTic5);
			this->panel2->Controls->Add(this->btnTic4);
			this->panel2->Controls->Add(this->btnTic3);
			this->panel2->Controls->Add(this->btnTic2);
			this->panel2->Controls->Add(this->btnTic1);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Location = System::Drawing::Point(12, 147);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1338, 594);
			this->panel2->TabIndex = 0;
			// 
			// btnTic9
			// 
			this->btnTic9->BackColor = System::Drawing::Color::LightPink;
			this->btnTic9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic9->Location = System::Drawing::Point(452, 394);
			this->btnTic9->Name = L"btnTic9";
			this->btnTic9->Size = System::Drawing::Size(160, 150);
			this->btnTic9->TabIndex = 10;
			this->btnTic9->UseVisualStyleBackColor = false;
			this->btnTic9->Click += gcnew System::EventHandler(this, &MyForm::btnTic9_Click);
			// 
			// btnTic8
			// 
			this->btnTic8->BackColor = System::Drawing::Color::LightPink;
			this->btnTic8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic8->Location = System::Drawing::Point(248, 394);
			this->btnTic8->Name = L"btnTic8";
			this->btnTic8->Size = System::Drawing::Size(160, 150);
			this->btnTic8->TabIndex = 9;
			this->btnTic8->UseVisualStyleBackColor = false;
			this->btnTic8->Click += gcnew System::EventHandler(this, &MyForm::btnTic8_Click);
			// 
			// btnTic7
			// 
			this->btnTic7->BackColor = System::Drawing::Color::LightPink;
			this->btnTic7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic7->Location = System::Drawing::Point(44, 394);
			this->btnTic7->Name = L"btnTic7";
			this->btnTic7->Size = System::Drawing::Size(160, 150);
			this->btnTic7->TabIndex = 8;
			this->btnTic7->UseVisualStyleBackColor = false;
			this->btnTic7->Click += gcnew System::EventHandler(this, &MyForm::btnTic7_Click);
			// 
			// btnTic6
			// 
			this->btnTic6->BackColor = System::Drawing::Color::LightPink;
			this->btnTic6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic6->Location = System::Drawing::Point(452, 216);
			this->btnTic6->Name = L"btnTic6";
			this->btnTic6->Size = System::Drawing::Size(160, 150);
			this->btnTic6->TabIndex = 7;
			this->btnTic6->UseVisualStyleBackColor = false;
			this->btnTic6->Click += gcnew System::EventHandler(this, &MyForm::btnTic6_Click);
			// 
			// btnTic5
			// 
			this->btnTic5->BackColor = System::Drawing::Color::LightPink;
			this->btnTic5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic5->Location = System::Drawing::Point(248, 216);
			this->btnTic5->Name = L"btnTic5";
			this->btnTic5->Size = System::Drawing::Size(160, 150);
			this->btnTic5->TabIndex = 6;
			this->btnTic5->UseVisualStyleBackColor = false;
			this->btnTic5->Click += gcnew System::EventHandler(this, &MyForm::btnTic5_Click);
			// 
			// btnTic4
			// 
			this->btnTic4->BackColor = System::Drawing::Color::LightPink;
			this->btnTic4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic4->Location = System::Drawing::Point(44, 216);
			this->btnTic4->Name = L"btnTic4";
			this->btnTic4->Size = System::Drawing::Size(160, 150);
			this->btnTic4->TabIndex = 5;
			this->btnTic4->UseVisualStyleBackColor = false;
			this->btnTic4->Click += gcnew System::EventHandler(this, &MyForm::btnTic4_Click);
			// 
			// btnTic3
			// 
			this->btnTic3->BackColor = System::Drawing::Color::LightPink;
			this->btnTic3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic3->Location = System::Drawing::Point(452, 31);
			this->btnTic3->Name = L"btnTic3";
			this->btnTic3->Size = System::Drawing::Size(160, 150);
			this->btnTic3->TabIndex = 4;
			this->btnTic3->UseVisualStyleBackColor = false;
			this->btnTic3->Click += gcnew System::EventHandler(this, &MyForm::btnTic3_Click);
			// 
			// btnTic2
			// 
			this->btnTic2->BackColor = System::Drawing::Color::LightPink;
			this->btnTic2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic2->Location = System::Drawing::Point(248, 31);
			this->btnTic2->Name = L"btnTic2";
			this->btnTic2->Size = System::Drawing::Size(160, 150);
			this->btnTic2->TabIndex = 3;
			this->btnTic2->UseVisualStyleBackColor = false;
			this->btnTic2->Click += gcnew System::EventHandler(this, &MyForm::btnTic2_Click);
			// 
			// btnTic1
			// 
			this->btnTic1->BackColor = System::Drawing::Color::LightPink;
			this->btnTic1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic1->Location = System::Drawing::Point(44, 31);
			this->btnTic1->Name = L"btnTic1";
			this->btnTic1->Size = System::Drawing::Size(160, 150);
			this->btnTic1->TabIndex = 2;
			this->btnTic1->UseVisualStyleBackColor = false;
			this->btnTic1->Click += gcnew System::EventHandler(this, &MyForm::btnTic1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(1362, 753);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		int plusone;
		Boolean checker;
#pragma endregion

		void Enable_False() {
			btnTic1->Enabled = false;
			btnTic2->Enabled = false;
			btnTic3->Enabled = false;
			btnTic4->Enabled = false;
			btnTic5->Enabled = false;
			btnTic6->Enabled = false;
			btnTic7->Enabled = false;
			btnTic8->Enabled = false;
			btnTic9->Enabled = false;
		}

		void overCondition() {
			if (btnTic1->Enabled == false && btnTic2->Enabled == false && btnTic3->Enabled == false && btnTic4->Enabled == false && btnTic5->Enabled == false && btnTic6->Enabled == false && btnTic7->Enabled == false && btnTic8->Enabled == false && btnTic9->Enabled == false) {
				MessageBox::Show("Game over, No One Can Win", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
			}
		}


		void score() {
			bool flag = false;
			//else{
			if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "X") {
				btnTic1->BackColor = System::Drawing::Color::Chocolate;
				btnTic2->BackColor = System::Drawing::Color::Chocolate;
				btnTic3->BackColor = System::Drawing::Color::Chocolate;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerXB->Text);
				PlayerXB->Text = Convert::ToString(plusone + 1);
				Enable_False();
				flag = true;
			}

			if (btnTic1->Text == "X" && btnTic4->Text == "X" && btnTic7->Text == "X") {
				btnTic1->BackColor = System::Drawing::Color::Chocolate;
				btnTic4->BackColor = System::Drawing::Color::Chocolate;
				btnTic7->BackColor = System::Drawing::Color::Chocolate;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerXB->Text);
				PlayerXB->Text = Convert::ToString(plusone + 1);
				Enable_False(); flag = true;
			}

			if (btnTic1->Text == "X" && btnTic5->Text == "X" && btnTic9->Text == "X") {
				btnTic1->BackColor = System::Drawing::Color::Chocolate;
				btnTic5->BackColor = System::Drawing::Color::Chocolate;
				btnTic9->BackColor = System::Drawing::Color::Chocolate;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerXB->Text);
				PlayerXB->Text = Convert::ToString(plusone + 1);
				Enable_False();    flag = true;
			}

			if (btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "X") {
				btnTic4->BackColor = System::Drawing::Color::Chocolate;
				btnTic5->BackColor = System::Drawing::Color::Chocolate;
				btnTic6->BackColor = System::Drawing::Color::Chocolate;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerXB->Text);
				PlayerXB->Text = Convert::ToString(plusone + 1);
				Enable_False();  flag = true;
			}

			if (btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "X") {
				btnTic7->BackColor = System::Drawing::Color::Chocolate;
				btnTic8->BackColor = System::Drawing::Color::Chocolate;
				btnTic9->BackColor = System::Drawing::Color::Chocolate;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerXB->Text);
				PlayerXB->Text = Convert::ToString(plusone + 1);
				Enable_False(); flag = true;
			}

			if (btnTic3->Text == "X" && btnTic6->Text == "X" && btnTic9->Text == "X") {
				btnTic3->BackColor = System::Drawing::Color::Chocolate;
				btnTic6->BackColor = System::Drawing::Color::Chocolate;
				btnTic9->BackColor = System::Drawing::Color::Chocolate;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerXB->Text);
				PlayerXB->Text = Convert::ToString(plusone + 1);
				Enable_False();  flag = true;
			}

			if (btnTic3->Text == "X" && btnTic5->Text == "X" && btnTic7->Text == "X") {
				btnTic3->BackColor = System::Drawing::Color::Chocolate;
				btnTic5->BackColor = System::Drawing::Color::Chocolate;
				btnTic7->BackColor = System::Drawing::Color::Chocolate;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerXB->Text);
				PlayerXB->Text = Convert::ToString(plusone + 1);
				Enable_False();  flag = true;
			}
			//==============================================================

			if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "O") {
				btnTic1->BackColor = System::Drawing::Color::MintCream;
				btnTic2->BackColor = System::Drawing::Color::MintCream;
				btnTic3->BackColor = System::Drawing::Color::MintCream;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerOb->Text);
				PlayerOb->Text = Convert::ToString(plusone + 1);
				Enable_False();  flag = true;
			}

			if (btnTic1->Text == "O" && btnTic4->Text == "O" && btnTic7->Text == "O") {
				btnTic1->BackColor = System::Drawing::Color::MintCream;
				btnTic4->BackColor = System::Drawing::Color::MintCream;
				btnTic7->BackColor = System::Drawing::Color::MintCream;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerOb->Text);
				PlayerOb->Text = Convert::ToString(plusone + 1);
				Enable_False();  flag = true;
			}

			if (btnTic1->Text == "O" && btnTic5->Text == "O" && btnTic9->Text == "O") {
				btnTic1->BackColor = System::Drawing::Color::MintCream;
				btnTic5->BackColor = System::Drawing::Color::MintCream;
				btnTic9->BackColor = System::Drawing::Color::MintCream;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerOb->Text);
				PlayerOb->Text = Convert::ToString(plusone + 1);
				Enable_False();  flag = true;
			}

			if (btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "O") {
				btnTic4->BackColor = System::Drawing::Color::MintCream;
				btnTic5->BackColor = System::Drawing::Color::MintCream;
				btnTic6->BackColor = System::Drawing::Color::MintCream;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerOb->Text);
				PlayerOb->Text = Convert::ToString(plusone + 1);
				Enable_False();   flag = true;
			}

			if (btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "O") {
				btnTic7->BackColor = System::Drawing::Color::MintCream;
				btnTic8->BackColor = System::Drawing::Color::MintCream;
				btnTic9->BackColor = System::Drawing::Color::MintCream;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerOb->Text);
				PlayerOb->Text = Convert::ToString(plusone + 1);
				Enable_False();  flag = true;
			}

			if (btnTic3->Text == "O" && btnTic6->Text == "O" && btnTic9->Text == "O") {
				btnTic3->BackColor = System::Drawing::Color::MintCream;
				btnTic6->BackColor = System::Drawing::Color::MintCream;
				btnTic9->BackColor = System::Drawing::Color::MintCream;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerOb->Text);
				PlayerOb->Text = Convert::ToString(plusone + 1);
				Enable_False();  flag = true;
			}

			if (btnTic3->Text == "O" && btnTic5->Text == "O" && btnTic7->Text == "O") {
				btnTic3->BackColor = System::Drawing::Color::MintCream;
				btnTic5->BackColor = System::Drawing::Color::MintCream;
				btnTic7->BackColor = System::Drawing::Color::MintCream;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(PlayerOb->Text);
				PlayerOb->Text = Convert::ToString(plusone + 1);
				Enable_False();  flag = true;
			}

			if (flag == false)overCondition();
		//}


		}
			//===================================================


	private: System::Void btnTic1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false) {
			btnTic1->Text = "X";
			checker = true;
		}
		else {
			btnTic1->Text = "O";
			checker = false;
		}
		
		btnTic1->Enabled = false;
		score();
	}
private: System::Void btnTic5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic5->Text = "X";
		checker = true;
	}
	else {
		btnTic5->Text = "O";
		checker = false;
	}
	
	btnTic5->Enabled = false;
	score();
}
private: System::Void btnTic6_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		btnTic6->Text = "X";
		checker = true;
	}
	else {
		btnTic6->Text = "O";
		checker = false;
	}
	
	btnTic6->Enabled = false;
	score();
}
private: System::Void btnTic9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic9->Text = "X";
		checker = true;
	}
	else {
		btnTic9->Text = "O";
		checker = false;
	}
	
	btnTic9->Enabled = false;
	score();

}
private: System::Void btnTic2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic2->Text = "X";
		checker = true;
	}
	else {
		btnTic2->Text = "O";
		checker = false;
	}
	
	btnTic2->Enabled = false;
	score();
}
private: System::Void btnTic3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic3->Text = "X";
		checker = true;
	}
	else {
		btnTic3->Text = "O";
		checker = false;
	}
	
	btnTic3->Enabled = false;
	score();
}
private: System::Void btnTic4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic4->Text = "X";
		checker = true;
	}
	else {
		btnTic4->Text = "O";
		checker = false;
	}
	
	btnTic4->Enabled = false;
	score();
}
private: System::Void btnTic7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic7->Text = "X";
		checker = true;
	}
	else {
		btnTic7->Text = "O";
		checker = false;
	}
	
	btnTic7->Enabled = false;
	score();
}
private: System::Void btnTic8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic8->Text = "X";
		checker = true;
	}
	else {
		btnTic8->Text = "O";
		checker = false;
	}
	
	btnTic8->Enabled = false;
	score();
}
private: System::Void btnNewGame_Click(System::Object^ sender, System::EventArgs^ e) {
	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";

	PlayerXB->Text = "0";
	PlayerOb->Text = "0";

	btnTic1->BackColor = System::Drawing::Color::Pink;
	btnTic2->BackColor = System::Drawing::Color::Pink;
	btnTic3->BackColor = System::Drawing::Color::Pink;
	btnTic4->BackColor = System::Drawing::Color::Pink;
	btnTic5->BackColor = System::Drawing::Color::Pink;
	btnTic6->BackColor = System::Drawing::Color::Pink;
	btnTic7->BackColor = System::Drawing::Color::Pink;
	btnTic8->BackColor = System::Drawing::Color::Pink;
	btnTic9->BackColor = System::Drawing::Color::Pink;
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";
	btnNewGame->Enabled = true;

	btnTic1->BackColor = System::Drawing::Color::Pink;
	btnTic2->BackColor = System::Drawing::Color::Pink;
	btnTic3->BackColor = System::Drawing::Color::Pink;
	btnTic4->BackColor = System::Drawing::Color::Pink;
	btnTic5->BackColor = System::Drawing::Color::Pink;
	btnTic6->BackColor = System::Drawing::Color::Pink;
	btnTic7->BackColor = System::Drawing::Color::Pink;
	btnTic8->BackColor = System::Drawing::Color::Pink;
	btnTic9->BackColor = System::Drawing::Color::Pink;
}
};
}
