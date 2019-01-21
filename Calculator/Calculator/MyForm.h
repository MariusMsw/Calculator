#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtDisplay;
			 System::Windows::Forms::Button^  btn7;
			 System::Windows::Forms::Button^  btn0;
			 System::Windows::Forms::Button^  btnDot;
			 System::Windows::Forms::Button^  btnEquals;
			 System::Windows::Forms::Button^  btnDiv;
			 System::Windows::Forms::Button^  btnMult;
			 System::Windows::Forms::Button^  btn3;
			 System::Windows::Forms::Button^  btn2;
			 System::Windows::Forms::Button^  btn1;
			 System::Windows::Forms::Button^  btn4;
			 System::Windows::Forms::Button^  btn5;
			 System::Windows::Forms::Button^  btn6;
			 System::Windows::Forms::Button^  btnSub;
			 System::Windows::Forms::Button^  btnPlus;
			 System::Windows::Forms::Button^  btn9;
			 System::Windows::Forms::Button^  btn8;
			 System::Windows::Forms::Label^  lblShowOp;
			 System::Windows::Forms::Button^  btnCE;
			 System::Windows::Forms::Button^  btnC;
			 System::Windows::Forms::Button^  btnBackSpace;
			 System::Windows::Forms::Button^  btnPM;
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 void InitializeComponent(void)
			 {
				 this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
				 this->btn7 = (gcnew System::Windows::Forms::Button());
				 this->btn0 = (gcnew System::Windows::Forms::Button());
				 this->btnDot = (gcnew System::Windows::Forms::Button());
				 this->btnEquals = (gcnew System::Windows::Forms::Button());
				 this->btnDiv = (gcnew System::Windows::Forms::Button());
				 this->btnMult = (gcnew System::Windows::Forms::Button());
				 this->btn3 = (gcnew System::Windows::Forms::Button());
				 this->btn2 = (gcnew System::Windows::Forms::Button());
				 this->btn1 = (gcnew System::Windows::Forms::Button());
				 this->btn4 = (gcnew System::Windows::Forms::Button());
				 this->btn5 = (gcnew System::Windows::Forms::Button());
				 this->btn6 = (gcnew System::Windows::Forms::Button());
				 this->btnSub = (gcnew System::Windows::Forms::Button());
				 this->btnPlus = (gcnew System::Windows::Forms::Button());
				 this->btn9 = (gcnew System::Windows::Forms::Button());
				 this->btn8 = (gcnew System::Windows::Forms::Button());
				 this->lblShowOp = (gcnew System::Windows::Forms::Label());
				 this->btnCE = (gcnew System::Windows::Forms::Button());
				 this->btnC = (gcnew System::Windows::Forms::Button());
				 this->btnBackSpace = (gcnew System::Windows::Forms::Button());
				 this->btnPM = (gcnew System::Windows::Forms::Button());
				 this->SuspendLayout();
				 // 
				 // txtDisplay
				 // 
				 this->txtDisplay->BackColor = System::Drawing::SystemColors::Menu;
				 this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->txtDisplay->ForeColor = System::Drawing::Color::Black;
				 this->txtDisplay->Location = System::Drawing::Point(4, 31);
				 this->txtDisplay->Multiline = true;
				 this->txtDisplay->Name = L"txtDisplay";
				 this->txtDisplay->Size = System::Drawing::Size(318, 48);
				 this->txtDisplay->TabIndex = 0;
				 this->txtDisplay->Text = L"0";
				 this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
				 // 
				 // btn7
				 // 
				 this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btn7->Location = System::Drawing::Point(4, 159);
				 this->btn7->Name = L"btn7";
				 this->btn7->Size = System::Drawing::Size(75, 52);
				 this->btn7->TabIndex = 1;
				 this->btn7->Text = L"7";
				 this->btn7->UseVisualStyleBackColor = true;
				 this->btn7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
				 // 
				 // btn0
				 // 
				 this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btn0->Location = System::Drawing::Point(4, 341);
				 this->btn0->Name = L"btn0";
				 this->btn0->Size = System::Drawing::Size(75, 56);
				 this->btn0->TabIndex = 1;
				 this->btn0->Text = L"0";
				 this->btn0->UseVisualStyleBackColor = true;
				 this->btn0->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
				 // 
				 // btnDot
				 // 
				 this->btnDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnDot->ForeColor = System::Drawing::Color::Black;
				 this->btnDot->Location = System::Drawing::Point(85, 341);
				 this->btnDot->Name = L"btnDot";
				 this->btnDot->Size = System::Drawing::Size(75, 56);
				 this->btnDot->TabIndex = 2;
				 this->btnDot->Text = L".";
				 this->btnDot->UseVisualStyleBackColor = true;
				 this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::btnDot_Click);
				 // 
				 // btnEquals
				 // 
				 this->btnEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnEquals->Location = System::Drawing::Point(166, 341);
				 this->btnEquals->Name = L"btnEquals";
				 this->btnEquals->Size = System::Drawing::Size(75, 56);
				 this->btnEquals->TabIndex = 3;
				 this->btnEquals->Text = L"=";
				 this->btnEquals->UseVisualStyleBackColor = true;
				 this->btnEquals->Click += gcnew System::EventHandler(this, &MyForm::btnEquals_Click);
				 // 
				 // btnDiv
				 // 
				 this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnDiv->Location = System::Drawing::Point(247, 341);
				 this->btnDiv->Name = L"btnDiv";
				 this->btnDiv->Size = System::Drawing::Size(75, 56);
				 this->btnDiv->TabIndex = 4;
				 this->btnDiv->Text = L"/";
				 this->btnDiv->UseVisualStyleBackColor = true;
				 this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
				 // 
				 // btnMult
				 // 
				 this->btnMult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnMult->Location = System::Drawing::Point(247, 277);
				 this->btnMult->Name = L"btnMult";
				 this->btnMult->Size = System::Drawing::Size(75, 58);
				 this->btnMult->TabIndex = 4;
				 this->btnMult->Text = L"*";
				 this->btnMult->UseVisualStyleBackColor = true;
				 this->btnMult->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
				 // 
				 // btn3
				 // 
				 this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btn3->Location = System::Drawing::Point(166, 277);
				 this->btn3->Name = L"btn3";
				 this->btn3->Size = System::Drawing::Size(75, 58);
				 this->btn3->TabIndex = 3;
				 this->btn3->Text = L"3";
				 this->btn3->UseVisualStyleBackColor = true;
				 this->btn3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
				 // 
				 // btn2
				 // 
				 this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btn2->Location = System::Drawing::Point(85, 277);
				 this->btn2->Name = L"btn2";
				 this->btn2->Size = System::Drawing::Size(75, 58);
				 this->btn2->TabIndex = 2;
				 this->btn2->Text = L"2";
				 this->btn2->UseVisualStyleBackColor = true;
				 this->btn2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
				 // 
				 // btn1
				 // 
				 this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btn1->Location = System::Drawing::Point(4, 277);
				 this->btn1->Name = L"btn1";
				 this->btn1->Size = System::Drawing::Size(75, 58);
				 this->btn1->TabIndex = 1;
				 this->btn1->Text = L"1";
				 this->btn1->UseVisualStyleBackColor = true;
				 this->btn1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
				 // 
				 // btn4
				 // 
				 this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btn4->Location = System::Drawing::Point(4, 217);
				 this->btn4->Name = L"btn4";
				 this->btn4->Size = System::Drawing::Size(75, 54);
				 this->btn4->TabIndex = 1;
				 this->btn4->Text = L"4";
				 this->btn4->UseVisualStyleBackColor = true;
				 this->btn4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
				 // 
				 // btn5
				 // 
				 this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btn5->Location = System::Drawing::Point(85, 217);
				 this->btn5->Name = L"btn5";
				 this->btn5->Size = System::Drawing::Size(75, 54);
				 this->btn5->TabIndex = 2;
				 this->btn5->Text = L"5";
				 this->btn5->UseVisualStyleBackColor = true;
				 this->btn5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
				 // 
				 // btn6
				 // 
				 this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btn6->Location = System::Drawing::Point(166, 217);
				 this->btn6->Name = L"btn6";
				 this->btn6->Size = System::Drawing::Size(75, 54);
				 this->btn6->TabIndex = 3;
				 this->btn6->Text = L"6";
				 this->btn6->UseVisualStyleBackColor = true;
				 this->btn6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
				 // 
				 // btnSub
				 // 
				 this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnSub->Location = System::Drawing::Point(247, 217);
				 this->btnSub->Name = L"btnSub";
				 this->btnSub->Size = System::Drawing::Size(75, 54);
				 this->btnSub->TabIndex = 4;
				 this->btnSub->Text = L"-";
				 this->btnSub->UseVisualStyleBackColor = true;
				 this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
				 // 
				 // btnPlus
				 // 
				 this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnPlus->Location = System::Drawing::Point(247, 159);
				 this->btnPlus->Name = L"btnPlus";
				 this->btnPlus->Size = System::Drawing::Size(75, 52);
				 this->btnPlus->TabIndex = 4;
				 this->btnPlus->Text = L"+";
				 this->btnPlus->UseVisualStyleBackColor = true;
				 this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
				 // 
				 // btn9
				 // 
				 this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btn9->Location = System::Drawing::Point(166, 159);
				 this->btn9->Name = L"btn9";
				 this->btn9->Size = System::Drawing::Size(75, 52);
				 this->btn9->TabIndex = 3;
				 this->btn9->Text = L"9";
				 this->btn9->UseVisualStyleBackColor = true;
				 this->btn9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
				 // 
				 // btn8
				 // 
				 this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btn8->Location = System::Drawing::Point(85, 159);
				 this->btn8->Name = L"btn8";
				 this->btn8->Size = System::Drawing::Size(75, 52);
				 this->btn8->TabIndex = 2;
				 this->btn8->Text = L"8";
				 this->btn8->UseVisualStyleBackColor = true;
				 this->btn8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
				 // 
				 // lblShowOp
				 // 
				 this->lblShowOp->AutoSize = true;
				 this->lblShowOp->BackColor = System::Drawing::Color::White;
				 this->lblShowOp->Location = System::Drawing::Point(7, 35);
				 this->lblShowOp->Name = L"lblShowOp";
				 this->lblShowOp->Size = System::Drawing::Size(0, 13);
				 this->lblShowOp->TabIndex = 5;
				 this->lblShowOp->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
				 // 
				 // btnCE
				 // 
				 this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnCE->Location = System::Drawing::Point(85, 95);
				 this->btnCE->Name = L"btnCE";
				 this->btnCE->Size = System::Drawing::Size(75, 56);
				 this->btnCE->TabIndex = 1;
				 this->btnCE->Text = L"CE";
				 this->btnCE->UseVisualStyleBackColor = true;
				 this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::btnCE_Click);
				 // 
				 // btnC
				 // 
				 this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnC->Location = System::Drawing::Point(166, 95);
				 this->btnC->Name = L"btnC";
				 this->btnC->Size = System::Drawing::Size(75, 56);
				 this->btnC->TabIndex = 1;
				 this->btnC->Text = L"C";
				 this->btnC->UseVisualStyleBackColor = true;
				 this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
				 // 
				 // btnBackSpace
				 // 
				 this->btnBackSpace->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnBackSpace->ForeColor = System::Drawing::Color::Red;
				 this->btnBackSpace->Location = System::Drawing::Point(4, 95);
				 this->btnBackSpace->Name = L"btnBackSpace";
				 this->btnBackSpace->Size = System::Drawing::Size(75, 56);
				 this->btnBackSpace->TabIndex = 1;
				 this->btnBackSpace->Text = L"←";
				 this->btnBackSpace->UseVisualStyleBackColor = true;
				 this->btnBackSpace->Click += gcnew System::EventHandler(this, &MyForm::btnBackSpace_Click);
				 // 
				 // btnPM
				 // 
				 this->btnPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnPM->ForeColor = System::Drawing::Color::Red;
				 this->btnPM->Location = System::Drawing::Point(247, 95);
				 this->btnPM->Name = L"btnPM";
				 this->btnPM->Size = System::Drawing::Size(75, 56);
				 this->btnPM->TabIndex = 1;
				 this->btnPM->Text = L"+/-";
				 this->btnPM->UseVisualStyleBackColor = true;
				 this->btnPM->Click += gcnew System::EventHandler(this, &MyForm::btnPM_Click);
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::Navy;
				 this->ClientSize = System::Drawing::Size(323, 413);
				 this->Controls->Add(this->lblShowOp);
				 this->Controls->Add(this->btnDiv);
				 this->Controls->Add(this->btnMult);
				 this->Controls->Add(this->btnSub);
				 this->Controls->Add(this->btnPlus);
				 this->Controls->Add(this->btnEquals);
				 this->Controls->Add(this->btn3);
				 this->Controls->Add(this->btn6);
				 this->Controls->Add(this->btn9);
				 this->Controls->Add(this->btnDot);
				 this->Controls->Add(this->btnPM);
				 this->Controls->Add(this->btnC);
				 this->Controls->Add(this->btnBackSpace);
				 this->Controls->Add(this->btnCE);
				 this->Controls->Add(this->btn0);
				 this->Controls->Add(this->btn2);
				 this->Controls->Add(this->btn1);
				 this->Controls->Add(this->btn5);
				 this->Controls->Add(this->btn4);
				 this->Controls->Add(this->btn8);
				 this->Controls->Add(this->btn7);
				 this->Controls->Add(this->txtDisplay);
				 this->Name = L"MyForm";
				 this->Text = L"Marius\'s Calculator";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
			 double iFirstNumber;
			 double iSecondNumber;
			 double iResult;
			 String^ iOperator;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
	}
			 System::Void label1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
			 }
			 System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if (txtDisplay->Text == "")
				 {
					 txtDisplay->Text = "0";
				 }
			 }
			 System::Void btnCE_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtDisplay->Text = "0";
			 }
			 System::Void btnC_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtDisplay->Text = "0";
				 lblShowOp->Text = "";
			 }
			 System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
				 Button ^ Numbers = safe_cast<Button^>(sender);
				 if (txtDisplay->Text == "0")
				 {
					 txtDisplay->Text = Numbers->Text;
				 }
				 else
				 {
					 txtDisplay->Text = txtDisplay->Text + Numbers->Text;
				 }
			 }
			 System::Void Arithmetic(System::Object^  sender, System::EventArgs^  e) {
				 Button ^ operators = safe_cast<Button^>(sender);
				 iFirstNumber = Double::Parse(txtDisplay->Text);
				 txtDisplay->Text = "";
				 iOperator = operators->Text;
				 lblShowOp->Text = System::Convert::ToString(iFirstNumber) + " " + iOperator;
			 }
			 System::Void btnEquals_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblShowOp->Text = "";
				 iSecondNumber = Double::Parse(txtDisplay->Text);

				 if (iOperator == "+")
				 {
					 iResult = iFirstNumber + iSecondNumber;
					 txtDisplay->Text = System::Convert::ToString(iResult);
				 }
				 else if (iOperator == "-")
				 {
					 iResult = iFirstNumber - iSecondNumber;
					 txtDisplay->Text = System::Convert::ToString(iResult);
				 }
				 else if (iOperator == "*")
				 {
					 iResult = iFirstNumber * iSecondNumber;
					 txtDisplay->Text = System::Convert::ToString(iResult);
				 }
				 else if (iOperator == "/")
				 {
					 iResult = iFirstNumber / iSecondNumber;
					 txtDisplay->Text = System::Convert::ToString(iResult);
				 }
			 }
			 System::Void btnBackSpace_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (txtDisplay->Text->Length > 0)
				 {
					 txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
				 }
			 }
			 System::Void btnDot_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (!txtDisplay->Text->Contains("."))
				 {
					 txtDisplay->Text = txtDisplay->Text + ".";
				 }
			 }

			 System::Void btnPM_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (txtDisplay->Text->Contains("-"))
				 {
					 txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
				 }
				 else
				 {
					 txtDisplay->Text = "-" + txtDisplay->Text;
				 }
			 }
	};
}
