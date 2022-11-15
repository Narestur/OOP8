#pragma once
#include "SharingCar.h"
#include <vector>

namespace test {

	using namespace Sharing;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	SharingCar mainService;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
			
			/*for (int i = 0; i < 10; i++)
			{
				listCars.push_back(mainService.CarList[i].model);
			}*/
			
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
	public: System::Windows::Forms::Button^ button1;
	protected:
	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::TextBox^ textBox1;
	public: System::Windows::Forms::TextBox^ textBox2;
	public: System::Windows::Forms::ListBox^ listBox1;
	public: System::Windows::Forms::TextBox^ textBox3;
	public: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::ListBox^ listBox2;
	public: System::Windows::Forms::TextBox^ textBox6;
	private:
	private: System::Windows::Forms::Label^ label5;
	public:
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private:
	public: System::Windows::Forms::Button^ button5;

	public: System::Windows::Forms::TextBox^ textBox7;
	private:
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Button^ button4;
	private:
	public: System::Windows::Forms::Button^ button6;
	public: System::Windows::Forms::TextBox^ textBox8;
	public: System::Windows::Forms::TextBox^ textBox9;
	public: System::Windows::Forms::TextBox^ textBox10;
	public: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label7;
	public:
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	public:
	public:
	public:
	private:

	protected:










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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Подати заявку";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 63);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Адміністрування";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(150, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(150, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->Visible = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(354, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 164);
			this->listBox1->TabIndex = 4;
			this->listBox1->Visible = false;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(150, 120);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(198, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->Visible = false;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(150, 164);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(198, 22);
			this->textBox4->TabIndex = 6;
			this->textBox4->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(150, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Ім\'я";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(150, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Фамілія";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(150, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Час оренди(дні)";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(150, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Дата народження";
			this->label4->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(354, 189);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 44);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Відправити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(12, 113);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(132, 196);
			this->listBox2->TabIndex = 13;
			this->listBox2->Visible = false;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(150, 208);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(198, 22);
			this->textBox6->TabIndex = 14;
			this->textBox6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(150, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Машина";
			this->label5->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(150, 239);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(119, 20);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"Пошкодження";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged_1);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(150, 265);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 44);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Відхилити";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(483, 33);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(213, 22);
			this->textBox7->TabIndex = 20;
			this->textBox7->Visible = false;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(483, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 16);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Модель";
			this->label6->Visible = false;
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(354, 265);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 44);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Добавити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(528, 265);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(168, 44);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Змінити";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(483, 76);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(213, 22);
			this->textBox8->TabIndex = 24;
			this->textBox8->Visible = false;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(483, 120);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(213, 22);
			this->textBox9->TabIndex = 25;
			this->textBox9->Visible = false;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(483, 166);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(213, 22);
			this->textBox10->TabIndex = 26;
			this->textBox10->Visible = false;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(483, 211);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(213, 22);
			this->textBox11->TabIndex = 27;
			this->textBox11->Visible = false;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(483, 58);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 16);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Рік";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(483, 101);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 16);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Ціна";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(483, 147);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 16);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Пробіг";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(483, 191);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 16);
			this->label10->TabIndex = 31;
			this->label10->Text = L"Колір";
			this->label10->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 321);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Autoservice";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
		
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void visible_app(bool i);
private: System::Void visible_adm(bool i);
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox1_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}
