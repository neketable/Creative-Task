#pragma once
#include <string>
#include <iostream>
namespace lator {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button30;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(425, 611);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"CE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Yellow;
			this->button2->Location = System::Drawing::Point(501, 611);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 70);
			this->button2->TabIndex = 1;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Yellow;
			this->button3->Location = System::Drawing::Point(577, 611);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 70);
			this->button3->TabIndex = 2;
			this->button3->Text = L",";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Yellow;
			this->button4->Location = System::Drawing::Point(425, 535);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 70);
			this->button4->TabIndex = 3;
			this->button4->Text = L"7";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Yellow;
			this->button5->Location = System::Drawing::Point(501, 535);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 70);
			this->button5->TabIndex = 4;
			this->button5->Text = L"8";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Yellow;
			this->button6->Location = System::Drawing::Point(577, 535);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 70);
			this->button6->TabIndex = 5;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::Yellow;
			this->button7->Location = System::Drawing::Point(425, 456);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 70);
			this->button7->TabIndex = 6;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button8->FlatAppearance->BorderSize = 2;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::Yellow;
			this->button8->Location = System::Drawing::Point(501, 456);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 70);
			this->button8->TabIndex = 7;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button9->FlatAppearance->BorderSize = 2;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::Yellow;
			this->button9->Location = System::Drawing::Point(577, 456);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(70, 70);
			this->button9->TabIndex = 8;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button10->FlatAppearance->BorderSize = 2;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::Yellow;
			this->button10->Location = System::Drawing::Point(425, 380);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(70, 70);
			this->button10->TabIndex = 9;
			this->button10->Text = L"1";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button11->FlatAppearance->BorderSize = 2;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::Yellow;
			this->button11->Location = System::Drawing::Point(501, 380);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(70, 70);
			this->button11->TabIndex = 10;
			this->button11->Text = L"2";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button12->FlatAppearance->BorderSize = 2;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::Yellow;
			this->button12->Location = System::Drawing::Point(577, 380);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(70, 70);
			this->button12->TabIndex = 11;
			this->button12->Text = L"3";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button13->FlatAppearance->BorderSize = 2;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::Yellow;
			this->button13->Location = System::Drawing::Point(653, 380);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(70, 70);
			this->button13->TabIndex = 12;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button14->FlatAppearance->BorderSize = 2;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::Yellow;
			this->button14->Location = System::Drawing::Point(653, 456);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(70, 70);
			this->button14->TabIndex = 13;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button15->FlatAppearance->BorderSize = 2;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Fuchsia;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::Yellow;
			this->button15->Location = System::Drawing::Point(653, 535);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(70, 70);
			this->button15->TabIndex = 14;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button16->FlatAppearance->BorderSize = 2;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::Yellow;
			this->button16->Location = System::Drawing::Point(653, 611);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(70, 70);
			this->button16->TabIndex = 15;
			this->button16->Text = L"/";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button17->FlatAppearance->BorderSize = 2;
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::Color::Yellow;
			this->button17->Location = System::Drawing::Point(729, 456);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(70, 70);
			this->button17->TabIndex = 16;
			this->button17->Text = L"(";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button18->FlatAppearance->BorderSize = 2;
			this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Fuchsia;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::Color::Yellow;
			this->button18->Location = System::Drawing::Point(729, 535);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(70, 70);
			this->button18->TabIndex = 17;
			this->button18->Text = L")";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button19->FlatAppearance->BorderSize = 2;
			this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::Color::Yellow;
			this->button19->Location = System::Drawing::Point(729, 611);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(70, 70);
			this->button19->TabIndex = 18;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(860, 497);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(241, 46);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)));
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button20->FlatAppearance->BorderSize = 2;
			this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::Color::Yellow;
			this->button20->Location = System::Drawing::Point(729, 380);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(70, 70);
			this->button20->TabIndex = 20;
			this->button20->Text = L"<-";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(1063, 505);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(21, 17);
			this->listBox1->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(860, 591);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(234, 74);
			this->textBox2->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)));
			this->label1->Location = System::Drawing::Point(861, 451);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 43);
			this->label1->TabIndex = 23;
			this->label1->Text = L"INPUT:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)));
			this->label2->Location = System::Drawing::Point(861, 546);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 43);
			this->label2->TabIndex = 24;
			this->label2->Text = L"OUTPUT:";
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(994, 353);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(123, 86);
			this->button21->TabIndex = 25;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(1003, 756);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(15, 13);
			this->button22->TabIndex = 26;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(959, 756);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(15, 13);
			this->button23->TabIndex = 27;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(1049, 756);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(15, 13);
			this->button24->TabIndex = 28;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(971, 781);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(15, 13);
			this->button25->TabIndex = 29;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->button26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(1020, 782);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(15, 13);
			this->button26->TabIndex = 30;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->button27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(1069, 782);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(15, 13);
			this->button27->TabIndex = 31;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)));
			this->label3->Location = System::Drawing::Point(953, 717);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 31);
			this->label3->TabIndex = 32;
			this->label3->Text = L"COLORS:";
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(250, 403);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(52, 47);
			this->button28->TabIndex = 33;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)));
			this->label4->Location = System::Drawing::Point(152, 407);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 43);
			this->label4->TabIndex = 34;
			this->label4->Text = L"INFO:";
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Location = System::Drawing::Point(534, 756);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(23, 19);
			this->button29->TabIndex = 35;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"progresspixel-bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)));
			this->label5->Location = System::Drawing::Point(340, 751);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 43);
			this->label5->TabIndex = 36;
			this->label5->Text = L"PREV RES:";
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Location = System::Drawing::Point(795, 764);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(15, 13);
			this->button30->TabIndex = 37;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1540, 845);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "1";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "2";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "3";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "4";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "5";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "6";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "7";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "8";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "9";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "0";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//if (!textBox1->Text->Contains(","))
			textBox1->Text = textBox1->Text + ",";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "+";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "-";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "*";
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "/";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length > 0)
		textBox1->Text = textBox1->Text->Substring(0, textBox1->Text->Length - 1);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "(";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += ")";
}
	   // ФУНКЦИЯ ПОИСКА СКОБОК
	   private: System::String^ search(System::String^ text) {
		bool open = false; bool close = false;
		int open_pos = -1; int close_pos = -1;
		System::String^ text1 = "";
		for (int i = 0; i < text->Length; i++) {
			if (text[i] == '(') {
				open = true;
				open_pos = i;
			}
			if (text[i] == ')') {
				if (open) {
					close = true;
					close_pos = i;
				    String^ res = calculate(text->Substring(open_pos + 1, close_pos - open_pos-1));
					text = text->Remove(open_pos, close_pos - open_pos+1);
					text = text->Insert(open_pos, res);
					i = 0;
					for (int j = 0; j < text->Length; j++)
						if (j != text->Length-1) {
							if ((text[j] == '+') && (text[j + 1] == '-')) {
								for (int f = j + 1; f < text->Length; f++)
									text1 += text[f];
								text = text->Remove(j);
								text += text1;
							}
						}
					for (int j = 0; j < text->Length; j++)
						if (j != text->Length - 1) {
							if ((text[j] == '-') && (text[j + 1] == '-')) {
								text1 = "+";
								for (int f = j + 2; f < text->Length; f++)
									text1 += text[f];
								text = text->Remove(j);
								text += text1;
							}
						}
					open = false; close = false;
					open_pos = -1; close_pos = -1;
				}
				else return "Ошибка: вы не открыли скобки ";
			}
		}
		if (open && !close)
			return "Ошибка: вы не закрыли скобки";
		for (int i = 0; i < text->Length; i++) {
			if (text[i] == '(')
				search(text);
		}
		return calculate(text);
	}
			  // ФУНКЦИЯ ПОДСЧЕТА
	private: System::String^ calculate(System::String^ text) {
		listBox1->Items->Clear();
		System::String^ tmp = "";
		for (int i = 0; i < text->Length; i++) {
			
			if (text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/')
			{
					listBox1->Items->Add(tmp);
					listBox1->Items->Add(text[i]);
					tmp = "";
			}
			else tmp += text[i];
		}
		listBox1->Items->Add(tmp);
		for (int i = 0; i < listBox1->Items->Count; i++) {
			if (listBox1->Items[i]->ToString() == "*" || listBox1->Items[i]->ToString() == "/") {
				if (i == 0 || i == listBox1->Items->Count - 1)
					return "Ошибка";
				System::String^ res = calc1(listBox1->Items[i - 1]->ToString(), listBox1->Items[i]->ToString(), listBox1->Items[i + 1]->ToString());
				if (res == "Ошибка") return "Ошибка";
				listBox1->Items->RemoveAt(i - 1);
				listBox1->Items->RemoveAt(i - 1);
				listBox1->Items->RemoveAt(i - 1);
				listBox1->Items->Insert(i - 1, res);
				i--;
			}
		}
		for (int i = 0; i < listBox1->Items->Count; i++) {
			if (listBox1->Items[i]->ToString() == "+" || listBox1->Items[i]->ToString() == "-") {
				if (i == 0 || i == listBox1->Items->Count - 1)
					return "Ошибка";
				if ((listBox1->Items[i-1]->ToString() == "") && (listBox1->Items[i]->ToString() == "-")) {
					System::String^ res1 = "-" + listBox1->Items[i + 1]->ToString();
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->Insert(i - 1, res1);
					i = 0;
				}
				else {
					System::String^ res = calc1(listBox1->Items[i - 1]->ToString(), listBox1->Items[i]->ToString(), listBox1->Items[i + 1]->ToString());
					if (res == "Ошибка") return "Ошибка";
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->Insert(i - 1, res);
					i = 0;
				}
			}
		}
		return listBox1->Items[0]->ToString();
	}
		   // ФУНКЦИ ВЫПОЛНЕНИЯ ДЕЙСТВИЙ
private: System::String^ calc1(System::String^ n1, System::String^ d, System::String^ n2) {
	try {
		double number1 = Convert::ToDouble(n1);
		double number2 = Convert::ToDouble(n2);
		if (d == "/") {
			if (number2 != 0) {
				return (number1 / number2).ToString();
			}
			else return "Ошибка. На ноль делить нельзя";
		}
		if (d == "*") {
			return (number1 * number2).ToString();
		}
		if (d == "+")
		{
			return (number1 + number2).ToString();
		}
		if (d == "-")
		{
			return (number1 - number2).ToString();
		}
	}
	catch (SystemException^ e1) {
		return "Ошибка";
	}
	return "Ошибка";
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	search(textBox1->Text);
}
	   System::String^ c; System::String^ c1;
private: System::Void button19_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->Text->Contains("-"))
	textBox2->Text ="-" + search(textBox1->Text);
	else textBox2->Text = search(textBox1->Text);
	c = textBox1->Text; c1 = textBox2->Text;
}
	   // ИНТЕРФЕЙС
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->FlatAppearance->BorderColor = Color::Red;
	button1->ForeColor = Color::Red;
	button2->FlatAppearance->BorderColor = Color::Red;
	button2->ForeColor = Color::Red;
	button3->FlatAppearance->BorderColor = Color::Red;
	button3->ForeColor = Color::Red;
	button4->FlatAppearance->BorderColor = Color::Red;
	button4->ForeColor = Color::Red;
	button5->FlatAppearance->BorderColor = Color::Red;
	button5->ForeColor = Color::Red;
	button6->FlatAppearance->BorderColor = Color::Red;
	button6->ForeColor = Color::Red;
	button7->FlatAppearance->BorderColor = Color::Red;
	button7->ForeColor = Color::Red;
	button8->FlatAppearance->BorderColor = Color::Red;
	button8->ForeColor = Color::Red;
	button9->FlatAppearance->BorderColor = Color::Red;
	button9->ForeColor = Color::Red;
	button10->FlatAppearance->BorderColor = Color::Red;
	button10->ForeColor = Color::Red;
	button11->FlatAppearance->BorderColor = Color::Red;
	button11->ForeColor = Color::Red;
	button12->FlatAppearance->BorderColor = Color::Red;
	button12->ForeColor = Color::Red;
	button13->FlatAppearance->BorderColor = Color::Red;
	button13->ForeColor = Color::Red;
	button14->FlatAppearance->BorderColor = Color::Red;
	button14->ForeColor = Color::Red;
	button15->FlatAppearance->BorderColor = Color::Red;
	button15->ForeColor = Color::Red;
	button16->FlatAppearance->BorderColor = Color::Red;
	button16->ForeColor = Color::Red;
	button17->FlatAppearance->BorderColor = Color::Red;
	button17->ForeColor = Color::Red;
	button18->FlatAppearance->BorderColor = Color::Red;
	button18->ForeColor = Color::Red;
	button19->FlatAppearance->BorderColor = Color::Red;
	button19->ForeColor = Color::Red;
	button20->FlatAppearance->BorderColor = Color::Red;
	button20->ForeColor = Color::Red;
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->FlatAppearance->BorderColor = Color::Orange;
	button1->ForeColor = Color::Orange;
	button2->FlatAppearance->BorderColor = Color::Orange;
	button2->ForeColor = Color::Orange;
	button3->FlatAppearance->BorderColor = Color::Orange;
	button3->ForeColor = Color::Orange;
	button4->FlatAppearance->BorderColor = Color::Orange;
	button4->ForeColor = Color::Orange;
	button5->FlatAppearance->BorderColor = Color::Orange;
	button5->ForeColor = Color::Orange;
	button6->FlatAppearance->BorderColor = Color::Orange;
	button6->ForeColor = Color::Orange;
	button7->FlatAppearance->BorderColor = Color::Orange;
	button7->ForeColor = Color::Orange;
	button8->FlatAppearance->BorderColor = Color::Orange;
	button8->ForeColor = Color::Orange;
	button9->FlatAppearance->BorderColor = Color::Orange;
	button9->ForeColor = Color::Orange;
	button10->FlatAppearance->BorderColor = Color::Orange;
	button10->ForeColor = Color::Orange;
	button11->FlatAppearance->BorderColor = Color::Orange;
	button11->ForeColor = Color::Orange;
	button12->FlatAppearance->BorderColor = Color::Orange;
	button12->ForeColor = Color::Orange;
	button13->FlatAppearance->BorderColor = Color::Orange;
	button13->ForeColor = Color::Orange;
	button14->FlatAppearance->BorderColor = Color::Orange;
	button14->ForeColor = Color::Orange;
	button15->FlatAppearance->BorderColor = Color::Orange;
	button15->ForeColor = Color::Orange;
	button16->FlatAppearance->BorderColor = Color::Orange;
	button16->ForeColor = Color::Orange;
	button17->FlatAppearance->BorderColor = Color::Orange;
	button17->ForeColor = Color::Orange;
	button18->FlatAppearance->BorderColor = Color::Orange;
	button18->ForeColor = Color::Orange;
	button19->FlatAppearance->BorderColor = Color::Orange;
	button19->ForeColor = Color::Orange;
	button20->FlatAppearance->BorderColor = Color::Orange;
	button20->ForeColor = Color::Orange;
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->FlatAppearance->BorderColor = Color::Green;
	button1->ForeColor = Color::Green;
	button2->FlatAppearance->BorderColor = Color::Green;
	button2->ForeColor = Color::Green;
	button3->FlatAppearance->BorderColor = Color::Green;
	button3->ForeColor = Color::Green;
	button4->FlatAppearance->BorderColor = Color::Green;
	button4->ForeColor = Color::Green;
	button5->FlatAppearance->BorderColor = Color::Green;
	button5->ForeColor = Color::Green;
	button6->FlatAppearance->BorderColor = Color::Green;
	button6->ForeColor = Color::Green;
	button7->FlatAppearance->BorderColor = Color::Green;
	button7->ForeColor = Color::Green;
	button8->FlatAppearance->BorderColor = Color::Green;
	button8->ForeColor = Color::Green;
	button9->FlatAppearance->BorderColor = Color::Green;
	button9->ForeColor = Color::Green;
	button10->FlatAppearance->BorderColor = Color::Green;
	button10->ForeColor = Color::Green;
	button11->FlatAppearance->BorderColor = Color::Green;
	button11->ForeColor = Color::Green;
	button12->FlatAppearance->BorderColor = Color::Green;
	button12->ForeColor = Color::Green;
	button13->FlatAppearance->BorderColor = Color::Green;
	button13->ForeColor = Color::Green;
	button14->FlatAppearance->BorderColor = Color::Green;
	button14->ForeColor = Color::Green;
	button15->FlatAppearance->BorderColor = Color::Green;
	button15->ForeColor = Color::Green;
	button16->FlatAppearance->BorderColor = Color::Green;
	button16->ForeColor = Color::Green;
	button17->FlatAppearance->BorderColor = Color::Green;
	button17->ForeColor = Color::Green;
	button18->FlatAppearance->BorderColor = Color::Green;
	button18->ForeColor = Color::Green;
	button19->FlatAppearance->BorderColor = Color::Green;
	button19->ForeColor = Color::Green;
	button20->FlatAppearance->BorderColor = Color::Green;
	button20->ForeColor = Color::Green;
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->FlatAppearance->BorderColor = Color::DarkBlue;
	button1->ForeColor = Color::DarkBlue;
	button2->FlatAppearance->BorderColor = Color::DarkBlue;
	button2->ForeColor = Color::DarkBlue;
	button3->FlatAppearance->BorderColor = Color::DarkBlue;
	button3->ForeColor = Color::DarkBlue;
	button4->FlatAppearance->BorderColor = Color::DarkBlue;
	button4->ForeColor = Color::DarkBlue;
	button5->FlatAppearance->BorderColor = Color::DarkBlue;
	button5->ForeColor = Color::DarkBlue;
	button6->FlatAppearance->BorderColor = Color::DarkBlue;
	button6->ForeColor = Color::DarkBlue;
	button7->FlatAppearance->BorderColor = Color::DarkBlue;
	button7->ForeColor = Color::DarkBlue;
	button8->FlatAppearance->BorderColor = Color::DarkBlue;
	button8->ForeColor = Color::DarkBlue;
	button9->FlatAppearance->BorderColor = Color::DarkBlue;
	button9->ForeColor = Color::DarkBlue;
	button10->FlatAppearance->BorderColor = Color::DarkBlue;
	button10->ForeColor = Color::DarkBlue;
	button11->FlatAppearance->BorderColor = Color::DarkBlue;
	button11->ForeColor = Color::DarkBlue;
	button12->FlatAppearance->BorderColor = Color::DarkBlue;
	button12->ForeColor = Color::DarkBlue;
	button13->FlatAppearance->BorderColor = Color::DarkBlue;
	button13->ForeColor = Color::DarkBlue;
	button14->FlatAppearance->BorderColor = Color::DarkBlue;
	button14->ForeColor = Color::DarkBlue;
	button15->FlatAppearance->BorderColor = Color::DarkBlue;
	button15->ForeColor = Color::DarkBlue;
	button16->FlatAppearance->BorderColor = Color::DarkBlue;
	button16->ForeColor = Color::DarkBlue;
	button17->FlatAppearance->BorderColor = Color::DarkBlue;
	button17->ForeColor = Color::DarkBlue;
	button18->FlatAppearance->BorderColor = Color::DarkBlue;
	button18->ForeColor = Color::DarkBlue;
	button19->FlatAppearance->BorderColor = Color::DarkBlue;
	button19->ForeColor = Color::DarkBlue;
	button20->FlatAppearance->BorderColor = Color::DarkBlue;
	button20->ForeColor = Color::DarkBlue;
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->FlatAppearance->BorderColor = Color::Yellow;
	button1->ForeColor = Color::Yellow;
	button2->FlatAppearance->BorderColor = Color::Yellow;
	button2->ForeColor = Color::Yellow;
	button3->FlatAppearance->BorderColor = Color::Yellow;
	button3->ForeColor = Color::Yellow;
	button4->FlatAppearance->BorderColor = Color::Yellow;
	button4->ForeColor = Color::Yellow;
	button5->FlatAppearance->BorderColor = Color::Yellow;
	button5->ForeColor = Color::Yellow;
	button6->FlatAppearance->BorderColor = Color::Yellow;
	button6->ForeColor = Color::Yellow;
	button7->FlatAppearance->BorderColor = Color::Yellow;
	button7->ForeColor = Color::Yellow;
	button8->FlatAppearance->BorderColor = Color::Yellow;
	button8->ForeColor = Color::Yellow;
	button9->FlatAppearance->BorderColor = Color::Yellow;
	button9->ForeColor = Color::Yellow;
	button10->FlatAppearance->BorderColor = Color::Yellow;
	button10->ForeColor = Color::Yellow;
	button11->FlatAppearance->BorderColor = Color::Yellow;
	button11->ForeColor = Color::Yellow;
	button12->FlatAppearance->BorderColor = Color::Yellow;
	button12->ForeColor = Color::Yellow;
	button13->FlatAppearance->BorderColor = Color::Yellow;
	button13->ForeColor = Color::Yellow;
	button14->FlatAppearance->BorderColor = Color::Yellow;
	button14->ForeColor = Color::Yellow;
	button15->FlatAppearance->BorderColor = Color::Yellow;
	button15->ForeColor = Color::Yellow;
	button16->FlatAppearance->BorderColor = Color::Yellow;
	button16->ForeColor = Color::Yellow;
	button17->FlatAppearance->BorderColor = Color::Yellow;
	button17->ForeColor = Color::Yellow;
	button18->FlatAppearance->BorderColor = Color::Yellow;
	button18->ForeColor = Color::Yellow;
	button19->FlatAppearance->BorderColor = Color::Yellow;
	button19->ForeColor = Color::Yellow;
	button20->FlatAppearance->BorderColor = Color::Yellow;
	button20->ForeColor = Color::Yellow;
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->FlatAppearance->BorderColor = Color::Beige;
	button1->ForeColor = Color::Beige;
	button2->FlatAppearance->BorderColor = Color::Beige;
	button2->ForeColor = Color::Beige;
	button3->FlatAppearance->BorderColor = Color::Beige;
	button3->ForeColor = Color::Beige;
	button4->FlatAppearance->BorderColor = Color::Beige;
	button4->ForeColor = Color::Beige;
	button5->FlatAppearance->BorderColor = Color::Beige;
	button5->ForeColor = Color::Beige;
	button6->FlatAppearance->BorderColor = Color::Beige;
	button6->ForeColor = Color::Beige;
	button7->FlatAppearance->BorderColor = Color::Beige;
	button7->ForeColor = Color::Beige;
	button8->FlatAppearance->BorderColor = Color::Beige;
	button8->ForeColor = Color::Beige;
	button9->FlatAppearance->BorderColor = Color::Beige;
	button9->ForeColor = Color::Beige;
	button10->FlatAppearance->BorderColor = Color::Beige;
	button10->ForeColor = Color::Beige;
	button11->FlatAppearance->BorderColor = Color::Beige;
	button11->ForeColor = Color::Beige;
	button12->FlatAppearance->BorderColor = Color::Beige;
	button12->ForeColor = Color::Beige;
	button13->FlatAppearance->BorderColor = Color::Beige;
	button13->ForeColor = Color::Beige;
	button14->FlatAppearance->BorderColor = Color::Beige;
	button14->ForeColor = Color::Beige;
	button15->FlatAppearance->BorderColor = Color::Beige;
	button15->ForeColor = Color::Beige;
	button16->FlatAppearance->BorderColor = Color::Beige;
	button16->ForeColor = Color::Beige;
	button17->FlatAppearance->BorderColor = Color::Beige;
	button17->ForeColor = Color::Beige;
	button18->FlatAppearance->BorderColor = Color::Beige;
	button18->ForeColor = Color::Beige;
	button19->FlatAppearance->BorderColor = Color::Beige;
	button19->ForeColor = Color::Beige;
	button20->FlatAppearance->BorderColor = Color::Beige;
	button20->ForeColor = Color::Beige;
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("© Иванов Никита РИС1-19 1б", "Arcade Calcul 2020");
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(c1, "Previous Result");
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->Text->Contains("-"))
		textBox2->Text = "-" + search(textBox1->Text);
	else textBox2->Text = search(textBox1->Text);
	c = textBox1->Text; c1 = textBox2->Text;
}
};
}
