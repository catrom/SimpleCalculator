#pragma once

#include <string>
#include <iostream>
#include <msclr\marshal_cppstd.h>
using namespace std;

#include "Calc.h"

namespace SimpleCalculator_CatRom {

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
	private: System::Windows::Forms::Label^  expression;
	protected:
	private: System::Windows::Forms::Label^  result;
	private: System::Windows::Forms::Label^  button0;
	private: System::Windows::Forms::Label^  button1;
	private: System::Windows::Forms::Label^  button2;
	private: System::Windows::Forms::Label^  button3;
	private: System::Windows::Forms::Label^  button4;
	private: System::Windows::Forms::Label^  button5;
	private: System::Windows::Forms::Label^  button6;
	private: System::Windows::Forms::Label^  button7;
	private: System::Windows::Forms::Label^  button8;
	private: System::Windows::Forms::Label^  button9;
	private: System::Windows::Forms::Label^  dot;
	private: System::Windows::Forms::Label^  equal;
	private: System::Windows::Forms::Label^  plus;

	private: System::Windows::Forms::Label^  sub;
	private: System::Windows::Forms::Label^  multi;
	private: System::Windows::Forms::Label^  startbracket;
	private: System::Windows::Forms::Label^  pi;
	private: System::Windows::Forms::Label^  power;
	private: System::Windows::Forms::Label^  endbracket;
	private: System::Windows::Forms::Label^  DEL;

	private: System::Windows::Forms::Label^  divison;
	private: System::Windows::Forms::Label^  AC;

	private: System::Windows::Forms::Label^  info;




































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->expression = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->button0 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Label());
			this->dot = (gcnew System::Windows::Forms::Label());
			this->equal = (gcnew System::Windows::Forms::Label());
			this->plus = (gcnew System::Windows::Forms::Label());
			this->sub = (gcnew System::Windows::Forms::Label());
			this->multi = (gcnew System::Windows::Forms::Label());
			this->startbracket = (gcnew System::Windows::Forms::Label());
			this->pi = (gcnew System::Windows::Forms::Label());
			this->power = (gcnew System::Windows::Forms::Label());
			this->endbracket = (gcnew System::Windows::Forms::Label());
			this->DEL = (gcnew System::Windows::Forms::Label());
			this->divison = (gcnew System::Windows::Forms::Label());
			this->AC = (gcnew System::Windows::Forms::Label());
			this->info = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// expression
			// 
			this->expression->BackColor = System::Drawing::Color::Gainsboro;
			this->expression->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->expression->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->expression->Location = System::Drawing::Point(6, 6);
			this->expression->Name = L"expression";
			this->expression->Size = System::Drawing::Size(354, 39);
			this->expression->TabIndex = 0;
			this->expression->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// result
			// 
			this->result->BackColor = System::Drawing::Color::Transparent;
			this->result->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result->ForeColor = System::Drawing::Color::Red;
			this->result->Location = System::Drawing::Point(6, 45);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(354, 64);
			this->result->TabIndex = 1;
			this->result->Text = L"0";
			this->result->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::Control;
			this->button0->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->button0->Cursor = System::Windows::Forms::Cursors::Default;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button0->Location = System::Drawing::Point(150, 465);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(66, 42);
			this->button0->TabIndex = 2;
			this->button0->Text = L"0";
			this->button0->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(78, 416);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->button2->Cursor = System::Windows::Forms::Cursors::Default;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(150, 416);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->button3->Cursor = System::Windows::Forms::Cursors::Default;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(222, 416);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(66, 42);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Control;
			this->button4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->button4->Cursor = System::Windows::Forms::Cursors::Default;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(78, 367);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(66, 42);
			this->button4->TabIndex = 2;
			this->button4->Text = L"4";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->button5->Cursor = System::Windows::Forms::Cursors::Default;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(150, 367);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(66, 42);
			this->button5->TabIndex = 2;
			this->button5->Text = L"5";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->button6->Cursor = System::Windows::Forms::Cursors::Default;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(222, 367);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(66, 42);
			this->button6->TabIndex = 2;
			this->button6->Text = L"6";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Control;
			this->button7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->button7->Cursor = System::Windows::Forms::Cursors::Default;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->Location = System::Drawing::Point(78, 318);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(66, 42);
			this->button7->TabIndex = 2;
			this->button7->Text = L"7";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Control;
			this->button8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->button8->Cursor = System::Windows::Forms::Cursors::Default;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button8->Location = System::Drawing::Point(150, 318);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(66, 42);
			this->button8->TabIndex = 2;
			this->button8->Text = L"8";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Control;
			this->button9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->button9->Cursor = System::Windows::Forms::Cursors::Default;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button9->Location = System::Drawing::Point(222, 318);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(66, 42);
			this->button9->TabIndex = 2;
			this->button9->Text = L"9";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// dot
			// 
			this->dot->BackColor = System::Drawing::SystemColors::Control;
			this->dot->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dot->Cursor = System::Windows::Forms::Cursors::Default;
			this->dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dot->ForeColor = System::Drawing::SystemColors::ControlText;
			this->dot->Location = System::Drawing::Point(222, 465);
			this->dot->Name = L"dot";
			this->dot->Size = System::Drawing::Size(66, 42);
			this->dot->TabIndex = 2;
			this->dot->Text = L".";
			this->dot->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->dot->Click += gcnew System::EventHandler(this, &MyForm::dot_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::Color::Silver;
			this->equal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->equal->Cursor = System::Windows::Forms::Cursors::Default;
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equal->ForeColor = System::Drawing::SystemColors::ControlText;
			this->equal->Location = System::Drawing::Point(294, 465);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(66, 42);
			this->equal->TabIndex = 2;
			this->equal->Text = L"=";
			this->equal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Silver;
			this->plus->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->plus->Cursor = System::Windows::Forms::Cursors::Default;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus->ForeColor = System::Drawing::SystemColors::ControlText;
			this->plus->Location = System::Drawing::Point(294, 416);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(66, 42);
			this->plus->TabIndex = 2;
			this->plus->Text = L"+";
			this->plus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// sub
			// 
			this->sub->BackColor = System::Drawing::Color::Silver;
			this->sub->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->sub->Cursor = System::Windows::Forms::Cursors::Default;
			this->sub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sub->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sub->Location = System::Drawing::Point(294, 367);
			this->sub->Name = L"sub";
			this->sub->Size = System::Drawing::Size(66, 42);
			this->sub->TabIndex = 2;
			this->sub->Text = L"-";
			this->sub->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->sub->Click += gcnew System::EventHandler(this, &MyForm::sub_Click);
			// 
			// multi
			// 
			this->multi->BackColor = System::Drawing::Color::Silver;
			this->multi->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->multi->Cursor = System::Windows::Forms::Cursors::Default;
			this->multi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multi->ForeColor = System::Drawing::SystemColors::ControlText;
			this->multi->Location = System::Drawing::Point(294, 318);
			this->multi->Name = L"multi";
			this->multi->Size = System::Drawing::Size(66, 42);
			this->multi->TabIndex = 2;
			this->multi->Text = L"x";
			this->multi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->multi->Click += gcnew System::EventHandler(this, &MyForm::multi_Click);
			// 
			// startbracket
			// 
			this->startbracket->BackColor = System::Drawing::Color::Silver;
			this->startbracket->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->startbracket->Cursor = System::Windows::Forms::Cursors::Default;
			this->startbracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startbracket->ForeColor = System::Drawing::SystemColors::ControlText;
			this->startbracket->Location = System::Drawing::Point(6, 465);
			this->startbracket->Name = L"startbracket";
			this->startbracket->Size = System::Drawing::Size(66, 42);
			this->startbracket->TabIndex = 2;
			this->startbracket->Text = L"(";
			this->startbracket->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->startbracket->Click += gcnew System::EventHandler(this, &MyForm::startbracket_Click);
			// 
			// pi
			// 
			this->pi->BackColor = System::Drawing::Color::Silver;
			this->pi->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pi->Cursor = System::Windows::Forms::Cursors::Default;
			this->pi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pi->ForeColor = System::Drawing::SystemColors::ControlText;
			this->pi->Location = System::Drawing::Point(6, 416);
			this->pi->Name = L"pi";
			this->pi->Size = System::Drawing::Size(66, 42);
			this->pi->TabIndex = 2;
			this->pi->Text = L"pi";
			this->pi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->pi->Click += gcnew System::EventHandler(this, &MyForm::pi_Click);
			// 
			// power
			// 
			this->power->BackColor = System::Drawing::Color::Silver;
			this->power->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->power->Cursor = System::Windows::Forms::Cursors::Default;
			this->power->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power->ForeColor = System::Drawing::SystemColors::ControlText;
			this->power->Location = System::Drawing::Point(6, 367);
			this->power->Name = L"power";
			this->power->Size = System::Drawing::Size(66, 42);
			this->power->TabIndex = 2;
			this->power->Text = L"x^y";
			this->power->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->power->Click += gcnew System::EventHandler(this, &MyForm::power_Click);
			// 
			// endbracket
			// 
			this->endbracket->BackColor = System::Drawing::Color::Silver;
			this->endbracket->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->endbracket->Cursor = System::Windows::Forms::Cursors::Default;
			this->endbracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->endbracket->ForeColor = System::Drawing::SystemColors::ControlText;
			this->endbracket->Location = System::Drawing::Point(78, 465);
			this->endbracket->Name = L"endbracket";
			this->endbracket->Size = System::Drawing::Size(66, 42);
			this->endbracket->TabIndex = 2;
			this->endbracket->Text = L")";
			this->endbracket->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->endbracket->Click += gcnew System::EventHandler(this, &MyForm::endbracket_Click);
			// 
			// DEL
			// 
			this->DEL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->DEL->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->DEL->Cursor = System::Windows::Forms::Cursors::Default;
			this->DEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DEL->ForeColor = System::Drawing::SystemColors::ControlText;
			this->DEL->Location = System::Drawing::Point(6, 318);
			this->DEL->Name = L"DEL";
			this->DEL->Size = System::Drawing::Size(66, 42);
			this->DEL->TabIndex = 2;
			this->DEL->Text = L"DEL";
			this->DEL->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->DEL->Click += gcnew System::EventHandler(this, &MyForm::DEL_Click);
			// 
			// divison
			// 
			this->divison->BackColor = System::Drawing::Color::Silver;
			this->divison->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->divison->Cursor = System::Windows::Forms::Cursors::Default;
			this->divison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divison->ForeColor = System::Drawing::SystemColors::ControlText;
			this->divison->Location = System::Drawing::Point(294, 269);
			this->divison->Name = L"divison";
			this->divison->Size = System::Drawing::Size(66, 42);
			this->divison->TabIndex = 2;
			this->divison->Text = L"/";
			this->divison->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->divison->Click += gcnew System::EventHandler(this, &MyForm::divison_Click);
			// 
			// AC
			// 
			this->AC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->AC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->AC->Cursor = System::Windows::Forms::Cursors::Default;
			this->AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AC->ForeColor = System::Drawing::SystemColors::ControlText;
			this->AC->Location = System::Drawing::Point(6, 269);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(66, 42);
			this->AC->TabIndex = 2;
			this->AC->Text = L"AC";
			this->AC->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->AC->Click += gcnew System::EventHandler(this, &MyForm::AC_Click);
			// 
			// info
			// 
			this->info->BackColor = System::Drawing::Color::Transparent;
			this->info->Cursor = System::Windows::Forms::Cursors::Default;
			this->info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->info->ForeColor = System::Drawing::Color::Silver;
			this->info->Location = System::Drawing::Point(78, 269);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(210, 42);
			this->info->TabIndex = 3;
			this->info->Text = L"SimpleCalculator\r\n--- Made by CatRom ---";
			this->info->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(366, 514);
			this->Controls->Add(this->info);
			this->Controls->Add(this->AC);
			this->Controls->Add(this->power);
			this->Controls->Add(this->divison);
			this->Controls->Add(this->multi);
			this->Controls->Add(this->sub);
			this->Controls->Add(this->pi);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->DEL);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->endbracket);
			this->Controls->Add(this->startbracket);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dot);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->result);
			this->Controls->Add(this->expression);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"SimpleCalculator";
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button0_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "0";
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "1";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "2";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "3";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "4";
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "5";
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "6";
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "7";
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "8";
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "9";
}
private: System::Void AC_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text = "";
			 result->Text = "0";
}
private: System::Void DEL_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (expression->Text->Length > 0)
				 expression->Text = expression->Text->Substring(0, expression->Text->Length - 1);
			 
}
private: System::Void plus_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "+";
}
private: System::Void sub_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "-";
}
private: System::Void multi_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "*";
}
private: System::Void divison_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "/";
}
private: System::Void pi_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "p";
}
private: System::Void power_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "^";
}
private: System::Void dot_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += ".";
}
private: System::Void startbracket_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += "(";
}
private: System::Void endbracket_Click(System::Object^  sender, System::EventArgs^  e) {
			 expression->Text += ")";
}
private: System::Void equal_Click(System::Object^  sender, System::EventArgs^  e) {
			 std::string exp = msclr::interop::marshal_as<std::string>(expression->Text);
			 
			 removeWhiteSpace(exp);

			 if (!checkValid(exp)) {
				 result->Text = "Invalid Input.";
			 }
			 else {
				 float rs = Calculate(exp);

				 if (int(rs) == -99999) {
					 result->Text = "Out of range.";
				 }
				 else {
					 string newString = to_string(rs);

					 result->Text = msclr::interop::marshal_as<String^>(newString);
				 }
			 }
}
private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 switch (e->KeyChar) {
			 case '0': button0_Click(sender, e); break;
			 case '1': button1_Click(sender, e); break;
			 case '2': button2_Click(sender, e); break;
			 case '3': button3_Click(sender, e); break;
			 case '4': button4_Click(sender, e); break;
			 case '5': button5_Click(sender, e); break;
			 case '6': button6_Click(sender, e); break;
			 case '7': button7_Click(sender, e); break;
			 case '8': button8_Click(sender, e); break;
			 case '9': button9_Click(sender, e); break;
			 case 27: AC_Click(sender, e); break;
			 case 8: DEL_Click(sender, e); break;
			 case '+': plus_Click(sender, e); break;
			 case '-': sub_Click(sender, e); break;
			 case '*': multi_Click(sender, e); break;
			 case '/': divison_Click(sender, e); break;
			 case '^': power_Click(sender, e); break;
			 case '.': dot_Click(sender, e); break;
			 case '(': startbracket_Click(sender, e); break;
			 case ')': endbracket_Click(sender, e); break;
			 case 'p':
			 case 'P': pi_Click(sender, e); break; 
			 case ' ': expression->Text += " "; break;
			 case 13: equal_Click(sender, e); break;
			 default:
				 break;
			 }

}
};
}
