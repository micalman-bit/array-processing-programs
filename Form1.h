//#include <vcl.h>
#include "vcclr.h"
#include <ctime>
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cmath>
#include <ctime>

#include "stdafx.h"
using namespace System;
using namespace System::IO;
using namespace System::Text;

#pragma once


static int Mass[2000];

namespace MASSIF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::Label^  lbl3;
	private: System::Windows::Forms::Label^  lbl4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::TextBox^  textBox2;


	private: System::Windows::Forms::Label^  lbl5;
	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::Label^  lbl7;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  btnGener;

	private: System::Windows::Forms::Button^  btnVvod;

	private: System::Windows::Forms::Button^  btnDo;

	private: System::Windows::Forms::Button^  btnSave;

	private: System::Windows::Forms::Button^  btnClose;

	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  lbl8;
	private: System::Windows::Forms::Label^  lbl9;
	private: System::Windows::Forms::Label^  lbl6;
    private:  int kolvo; 
    private:
			 int z1;     // Вспомогательная переменная (имеется ли минус в строке)
             char ds;    // Символ десятичного разделителя
	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		bool f_gen;
	


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->btnGener = (gcnew System::Windows::Forms::Button());
			this->btnVvod = (gcnew System::Windows::Forms::Button());
			this->btnDo = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->lbl8 = (gcnew System::Windows::Forms::Label());
			this->lbl9 = (gcnew System::Windows::Forms::Label());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl1->Location = System::Drawing::Point(12, 9);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(223, 13);
			this->lbl1->TabIndex = 0;
			this->lbl1->Text = L"Исходные данные для генерации массива";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(12, 39);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(174, 13);
			this->lbl2->TabIndex = 1;
			this->lbl2->Text = L"Количество элементов массива:";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Location = System::Drawing::Point(12, 68);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(188, 13);
			this->lbl3->TabIndex = 2;
			this->lbl3->Text = L"Минимальное значение диапазона:";
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->BackColor = System::Drawing::SystemColors::Control;
			this->lbl4->Location = System::Drawing::Point(12, 98);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(194, 13);
			this->lbl4->TabIndex = 3;
			this->lbl4->Text = L"Максимальное значение диапазона:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(246, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(246, 95);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(246, 65);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl5->Location = System::Drawing::Point(12, 146);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(102, 13);
			this->lbl5->TabIndex = 7;
			this->lbl5->Text = L"Исходный массив:";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->Location = System::Drawing::Point(15, 172);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(371, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox4_KeyPress);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(15, 242);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(117, 17);
			this->radioButton1->TabIndex = 10;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Сумма элементов";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(15, 274);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(118, 17);
			this->radioButton2->TabIndex = 11;
			this->radioButton2->Text = L"Среднее значение";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(15, 306);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(144, 17);
			this->radioButton3->TabIndex = 12;
			this->radioButton3->Text = L"Минимальный элемент";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(15, 339);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(150, 17);
			this->radioButton4->TabIndex = 13;
			this->radioButton4->Text = L"Максимальный элемент";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(210, 242);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(118, 17);
			this->radioButton5->TabIndex = 14;
			this->radioButton5->Text = L"Четные элементы";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(210, 274);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(129, 17);
			this->radioButton6->TabIndex = 15;
			this->radioButton6->Text = L"Нечетные элементы";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton6_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(210, 306);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(170, 17);
			this->radioButton7->TabIndex = 16;
			this->radioButton7->Text = L"Сортировка по возрастанию";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(210, 339);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(154, 17);
			this->radioButton8->TabIndex = 17;
			this->radioButton8->Text = L"Сортировка по убыванию";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton8_CheckedChanged);
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl7->Location = System::Drawing::Point(12, 380);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(113, 13);
			this->lbl7->TabIndex = 18;
			this->lbl7->Text = L"Результат операции:";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Window;
			this->textBox5->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox5->Location = System::Drawing::Point(15, 409);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(370, 20);
			this->textBox5->TabIndex = 19;
			// 
			// btnGener
			// 
			this->btnGener->BackColor = System::Drawing::Color::Gainsboro;
			this->btnGener->Location = System::Drawing::Point(439, 25);
			this->btnGener->Name = L"btnGener";
			this->btnGener->Size = System::Drawing::Size(124, 27);
			this->btnGener->TabIndex = 20;
			this->btnGener->Text = L"Генерация массива";
			this->btnGener->UseVisualStyleBackColor = false;
			this->btnGener->Click += gcnew System::EventHandler(this, &Form1::btnGener_Click);
			// 
			// btnVvod
			// 
			this->btnVvod->BackColor = System::Drawing::Color::Gainsboro;
			this->btnVvod->Location = System::Drawing::Point(439, 101);
			this->btnVvod->Name = L"btnVvod";
			this->btnVvod->Size = System::Drawing::Size(124, 27);
			this->btnVvod->TabIndex = 21;
			this->btnVvod->Text = L"Ввод из файла";
			this->btnVvod->UseVisualStyleBackColor = false;
			this->btnVvod->Click += gcnew System::EventHandler(this, &Form1::btnVvod_Click);
			// 
			// btnDo
			// 
			this->btnDo->BackColor = System::Drawing::Color::Gainsboro;
			this->btnDo->Location = System::Drawing::Point(439, 237);
			this->btnDo->Name = L"btnDo";
			this->btnDo->Size = System::Drawing::Size(124, 27);
			this->btnDo->TabIndex = 22;
			this->btnDo->Text = L"Выполнить";
			this->btnDo->UseVisualStyleBackColor = false;
			this->btnDo->Click += gcnew System::EventHandler(this, &Form1::btnDo_Click);
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::Gainsboro;
			this->btnSave->Location = System::Drawing::Point(439, 316);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(124, 52);
			this->btnSave->TabIndex = 23;
			this->btnSave->Text = L"Сохранить в файл";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &Form1::btnSave_Click);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::Gainsboro;
			this->btnClose->Location = System::Drawing::Point(439, 402);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(124, 27);
			this->btnClose->TabIndex = 24;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(439, 75);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(123, 20);
			this->textBox6->TabIndex = 25;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(439, 288);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(123, 20);
			this->textBox7->TabIndex = 26;
			// 
			// lbl8
			// 
			this->lbl8->AutoSize = true;
			this->lbl8->Location = System::Drawing::Point(438, 59);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(100, 13);
			this->lbl8->TabIndex = 27;
			this->lbl8->Text = L"Имя файла ввода:";
			// 
			// lbl9
			// 
			this->lbl9->AutoSize = true;
			this->lbl9->BackColor = System::Drawing::SystemColors::Control;
			this->lbl9->Location = System::Drawing::Point(438, 272);
			this->lbl9->Name = L"lbl9";
			this->lbl9->Size = System::Drawing::Size(108, 13);
			this->lbl9->TabIndex = 28;
			this->lbl9->Text = L"Имя файла вывода:";
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl6->Location = System::Drawing::Point(12, 217);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(121, 13);
			this->lbl6->TabIndex = 29;
			this->lbl6->Text = L"Операции с массивом";
			this->lbl6->Click += gcnew System::EventHandler(this, &Form1::lbl6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(576, 440);
			this->Controls->Add(this->lbl6);
			this->Controls->Add(this->lbl9);
			this->Controls->Add(this->lbl8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnDo);
			this->Controls->Add(this->btnVvod);
			this->Controls->Add(this->btnGener);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->lbl7);
			this->Controls->Add(this->radioButton8);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->lbl5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lbl4);
			this->Controls->Add(this->lbl3);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Обработка массива";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e){
	Close(); 
}
private: System::Void lbl6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnDo_Click(System::Object^  sender, System::EventArgs^  e) {
        if(textBox4->Text==""){
			MessageBox::Show("Пустое поле массива. Сгенерируйте или введите массив", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (textBox4->Text!=""){
			String^str=textBox4->Text; 
			String^ strnew=formirStr(str);
			array<System::String^>^arg=strnew->Split(' ');
			kolvo=arg->Length;
			textBox4->Text=strnew;
			if (radioButton1->Checked){  
				textBox5->Text="Сумма элементов: "+Convert::ToString(Summa(arg));
			}
			else if (radioButton2->Checked){
				textBox5->Text="Среднее значение: "+Convert::ToString(Srednee(arg));
			} 
			else if (radioButton3->Checked){
				textBox5->Text="Минимальный элемент: "+Convert::ToString(Min(arg));
			} 
			else if (radioButton4->Checked){
				textBox5->Text="Максимальный элемент: "+Convert::ToString(Max(arg));
			} 	
			else if (radioButton5->Checked){ 
				textBox5->Text="Четные элементы: "+Chetn(arg);
			}
			else if (radioButton6->Checked){ 
				textBox5->Text="Нечетные элементы: "+Nechetn(arg);
			}
			else if (radioButton7->Checked){
				textBox5->Text="Сортировка по возрастанию: "+Vozrast(arg);
			} 
			else if (radioButton8->Checked){
				textBox5->Text="Сортировка по убыванию: "+Ubiv(arg);
			} 
		}
}
private: System::Void btnGener_Click(System::Object^  sender, System::EventArgs^  e) 
		 {  
			 if((textBox1->Text=="")||(textBox2->Text=="")||(textBox3->Text==""))
			 {
				 MessageBox::Show("Заполните пустые поля ввода", "Ошибка",
				 MessageBoxButtons::OK,
				 MessageBoxIcon::Error);
				 return;
			 }
			if (textBox1->Text=="0")
			 {
				 MessageBox::Show("Количество элементов массива не может быть равно нулю", "Ошибка",
				 MessageBoxButtons::OK,
				 MessageBoxIcon::Error);
				 textBox1->Text="";
				 return;
			}

			  textBox5->Text="";
			  f_gen = true;
			 int A, B; 
			 String^str;
			 A=Convert::ToInt16(textBox2->Text);
			 B=Convert::ToInt16(textBox3->Text);
			 kolvo=Convert::ToInt16(textBox1->Text);
			 if (A>B){
				 MessageBox::Show("Минимальное значение не может быть больше максимального", "Ошибка",
				 MessageBoxButtons::OK,
				 MessageBoxIcon::Error);				
			 }		
			 srand(time(NULL));
			 for(int i = 0; i < kolvo; i++){
				Mass[i]= A + rand() % ((B + 1) - A);
			 }

			 str="";

             for(int i = 0; i < kolvo; i++)
			 {
			  str=str+Convert::ToString(Mass[i])+" ";
			 }
			 textBox4->Text=str;
			 return;
		 }
		   
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 textBox5->Text="";
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 { 
			 textBox5->Text="";
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 textBox5->Text="";
		 }
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 textBox5->Text="";
		 }
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 { 
			 textBox5->Text="";
		 }
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 textBox5->Text="";
		 }
private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 { 
			 textBox5->Text="";
		 }
private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 { 
			 textBox5->Text="";
		 }

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_KeyPress(Object^ sender, KeyPressEventArgs^ e) {
			  // Если нажатая клавиша не цифровая.
					  if (!Char::IsDigit(e->KeyChar))
                 // Если нажатая клавиша не является клавишей BackSpace.
								  if (e->KeyChar != (char)Keys::Back)
									  e->Handled = true; // Запрет ввода
					  
						// Запрет ввода повторных нулей в начале числа.
					  if (e->KeyChar == (char)Keys::D0 ||
						  e->KeyChar == (char)Keys::NumPad0) // Если нажата клавиша 0
						  if (textBox1->Text->Length >= 1) // Если строка не пустая
							  if (textBox1->Text[0] == '0' && textBox1->SelectionStart < 2)
								  e->Handled = true; // Запрет ввода
				  }
 private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		  {
		  }
private: System::Void textBox2_KeyPress(Object^ sender, KeyPressEventArgs^ e) {
			   // Если нажатая клавиша не цифровая.
					  if (!Char::IsDigit(e->KeyChar))
						  // Запрет на ввод более одного знака минуса.
						  if (e->KeyChar != '-' || textBox2->Text->IndexOf('-') != -1)//
							  // Запрет на ввод более одного десятичного разделителя.
							  if (e->KeyChar != ds || textBox2->Text->IndexOf(ds) != -1)
								  // Если нажатая клавиша не является клавишей BackSpace.
								  if (e->KeyChar != (char)Keys::Back)
									  e->Handled = true; // Запрет ввода

					  // Запрет ввода повторных нулей в начале числа.
					  if (e->KeyChar == (char)Keys::D0 ||
						  e->KeyChar == (char)Keys::NumPad0) // Если нажата клавиша 0
						  if (textBox2->Text->Length >= 1) // Если строка не пустая
							  if (textBox2->Text[0] == '0' && textBox2->SelectionStart < 2)
								  e->Handled = true; // Запрет ввода

					  // Перенос точки ввода минуса в начало (ввод минуса только спереди)
					    if (e->KeyChar == '-' && textBox2->Text->IndexOf('-') == -1)
						textBox2->SelectionStart = 0; // Текстовый курсор в начало
				  }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
private: System::Void textBox3_KeyPress(Object^ sender, KeyPressEventArgs^ e) {
			  // Если нажатая клавиша не цифровая.
					  if (!Char::IsDigit(e->KeyChar))
						  // Запрет на ввод более одного знака минуса.
						  if (e->KeyChar != '-' || textBox3->Text->IndexOf('-') != -1)//
							  // Запрет на ввод более одного десятичного разделителя.
							  if (e->KeyChar != ds || textBox3->Text->IndexOf(ds) != -1)
								  // Если нажатая клавиша не является клавишей BackSpace.
								  if (e->KeyChar != (char)Keys::Back)
									  e->Handled = true; // Запрет ввода

					  // Запрет ввода повторных нулей в начале числа.
					  if (e->KeyChar == (char)Keys::D0 ||
						  e->KeyChar == (char)Keys::NumPad0) // Если нажата клавиша 0
						  if (textBox3->Text->Length >= 1) // Если строка не пустая
							  if (textBox3->Text[0] == '0' && textBox3->SelectionStart < 2)
								  e->Handled = true; // Запрет ввода

					  // Перенос точки ввода минуса в начало (ввод минуса только спереди)
					    if (e->KeyChar == '-' && textBox3->Text->IndexOf('-') == -1)
						textBox3->SelectionStart = 0; // Текстовый курсор в начало
				  }
		
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: int Summa(array<System::String^>^arr)
		 {
			 int summa=0;
			 for (int i=0; i<kolvo; i++)
			 {
				 summa=summa+Convert::ToInt32(arr[i]);	
			 }
		     return summa;
		 }
private: double Srednee(array<System::String^>^arr)
		 {
			 double summa=0;
			 double srednee;
			 for (int i=0; i<kolvo; i++)
			 {
				 summa=summa+Convert::ToInt32(arr[i]);
			 }
			 srednee=summa/kolvo;
			 return srednee;
		 }
private: int Min (array<System::String^>^arr)
		 {
			 int min=Convert::ToInt32(arr[0]);
			 for (int i=1; i<kolvo; i++)
			 {
				 if(min>Convert::ToInt32(arr[i]))
				 {
					 min=Convert::ToInt32(arr[i]);
				 }
			 } 
			 return min;
		 }
 private: int Max (array<System::String^>^arr)
		  {
			  int max=Convert::ToInt32(arr[0]);
			  for (int i=1; i<kolvo; i++)
			  {
				  if(max<Convert::ToInt32(arr[i]))
				  {
					  max=Convert::ToInt32(arr[i]);
				  }
			  }
			  return max;
		  }
private: String^ Chetn (array<System::String^>^arr)
		 {
			 String^str="";

			 for (int i=0; i<kolvo; i++)
			 {
				 if(Convert::ToInt32(arr[i])%2==0)
				 {
					 str=str+Convert::ToString(Convert::ToInt32(arr[i])+" ");
				 }
			 }
			 if (str == ""){
				str = L"нет четных элементов массива";
			 }
			 return str;
		 }
private: String^ Nechetn (array<System::String^>^arr)
		 {
			 String^str="";

			 for (int i=0; i<kolvo; i++)
				{
					if(Convert::ToInt32(arr[i])%2!=0)
					{
						str=str+Convert::ToString(Convert::ToInt32(arr[i])+" ");
					}
				}
			 if (str == ""){
				str = L"нет нечетных элементов массива";
			 }
			 return str;
		 }
 private: String^ Vozrast (array<System::String^>^arr)
		  {
			  String^str="";
			  for (int i=0; i< kolvo-1; i++)
			  {
				  int minIndex=i;
				  for (int j=i+1; j<kolvo; j++)
				  {
					  if (Convert::ToInt32(arr[j])<Convert::ToInt32(arr[minIndex]))
						  minIndex=j;
				  }
				  String^tmpValue=arr[i];
				  arr[i]=arr[minIndex];
				  arr[minIndex]=tmpValue;
			  }  
			  for(int i=0; i<kolvo; i++)
			  {
				  str=str+arr[i]+" ";
			  }
			  return str;
		  }
private: String^ Ubiv (array<System::String^>^arr)
		 {
			 String^str="";
			 for (int i=0; i< kolvo-1; i++)
				{
					int minIndex=i;
					for (int j=i+1; j<kolvo; j++)
					{
						if (Convert::ToInt32(arr[j])>Convert::ToInt32(arr[minIndex]))
							minIndex=j;
					}
					String^tmpValue=arr[i];
					arr[i]=arr[minIndex];
					arr[minIndex]=tmpValue;
			 }  
			 for(int i=0; i<kolvo; i++)
				{
					str=str+arr[i]+" ";
				}
			 return str;
		 }
private: String^  formirStr(String ^str)
		 {
			 int posMinus=-2;
			 String^strn="";
			 for (int i = 0; i < str->Length; i++)
			 {
				 if(Char::IsDigit(str[i]))
				 {
					 if(posMinus==(i-1))
						 strn=strn+"-"+str[i];
					 else
						 strn=strn+str[i];
				 } 
				 else if(str[i]=='-')
				 {
					 posMinus=i;
				 }
				 else
					 strn=strn+" ";
			 }

			 String^strnew="";
			 int prob=0;
			 for (int i = 0; i < strn->Length;++i)
			 {
				 if((Char::IsDigit(strn[i]))||(strn[i]=='-'))
				 {
					 strnew=strnew+strn[i]; //формируем новую строку из цифр и одного пробела между ними
					 prob=0; //после прибавления цифры обнуляем счетчик пробелов
				 }
				 else if(Char::IsWhiteSpace(strn[i]))
				 {
					 if(prob==0)//если первый пробел, прибавляем его к новой строке
					 {
						 strnew=strnew+strn[i];
						 prob=1;
					 }
				 } 
			 }
			 strnew=strnew->Trim();
			 return strnew;
		 }
private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {

		 }


private: System::Void btnVvod_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (f_gen == false)
			 {
				 textBox1 -> Text = "";
				 textBox2 -> Text = "";
				 textBox3 -> Text = "";
				 textBox5 -> Text = "";
			 }
			 
		 }
private: System::Void textBox4_KeyPress(Object^ sender, KeyPressEventArgs^ e) {
			 

			 if (!Char::IsDigit(e->KeyChar))
				 if(!Char::IsWhiteSpace(e->KeyChar))
					 if (e->KeyChar != '-' )                           
						 // Если нажатая клавиша не является клавишей BackSpace.
						 if (e->KeyChar != (char)Keys::Back)
							 e->Handled = true; // Запрет ввода
			  // Если нажатая клавиша не цифровая.
			 if (!Char::IsWhiteSpace(e->KeyChar) && e->Handled == false)
				 f_gen = false;

			 if(textBox4->Text->Length>0)
			 {
				 //int pos=textBox4->Text->Length-1;
				 int pos=textBox4->SelectionStart-1;
				 if (e->KeyChar == '-' && textBox4->Text[pos]=='-')
					 e->Handled = true; // Запрет ввода
				 if (e->KeyChar == ' ' && textBox4->Text[pos]=='-') 
					 e->Handled = true; // Запрет ввода
				 if (e->KeyChar == '-' && textBox4->Text[pos]!=' ') 
					 e->Handled = true; // Запрет ввода
			 }                             					
		 }

private:String^ alignMatris(String^ strIn)
{
   return "";
}
		 
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 f_gen = false;
		 }
};
}



