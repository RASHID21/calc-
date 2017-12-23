#pragma once
#include "math.h"

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(69, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(181, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(69, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(13, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(43, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(62, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(43, 28);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(111, 88);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(43, 28);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(160, 88);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(43, 28);
			this->button4->TabIndex = 5;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(207, 88);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(43, 28);
			this->button5->TabIndex = 6;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 122);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(51, 27);
			this->button6->TabIndex = 7;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(74, 122);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(51, 27);
			this->button7->TabIndex = 8;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(135, 122);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(51, 27);
			this->button8->TabIndex = 9;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(199, 122);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(51, 27);
			this->button9->TabIndex = 10;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(2, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(61, 63);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 179);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"label1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(74, 176);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(176, 20);
			this->textBox3->TabIndex = 13;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(258, 211);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ TorZ;
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Single a, b, c = 0;
			 Single A = Single::TryParse(textBox1->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, a);
			 Single B = Single::TryParse(textBox2->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, b);
			 c = a - b;
			 textBox3->Text = String::Format("{0:F4}", c);
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->Text = "Калькулятор";
			 pictureBox1->Image=Image::FromFile("d:\\12.0.jpeg");
			 this->pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
			 label1->Text = "Равно:";
			 button1->Text = "+";
			 button2->Text = "-";
			 button3->Text = "*";
			 button4->Text = "/";
             button5->Text = "pow";
			 button6->Text = "sin";
			 button7->Text = "cos";
			 button8->Text = "tan";
			 button9->Text = "ctan";
			 TorZ = Globalization::NumberFormatInfo::CurrentInfo->NumberDecimalSeparator;
		 }
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 if (textBox1->Text->IndexOf(TorZ) != -1)
					 TZFound = true;
				 if (TZFound == true) { e->Handled = true; return; }
				 if (e->KeyChar.ToString() == TorZ) return;
				 e->Handled = true;
		 }
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 if (textBox2->Text->IndexOf(TorZ) != -1)
					 TZFound = true;
				 if (TZFound == true) { e->Handled = true; return; }
				 if (e->KeyChar.ToString() == TorZ) return;
				 e->Handled = true;
		 }
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 bool TZFound = false;
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back) return;
				 if (textBox3->Text->IndexOf(TorZ) != -1)
					 TZFound = true;
				 if (TZFound == true) { e->Handled = true; return; }
				 if (e->KeyChar.ToString() == TorZ) return;
				 e->Handled = true;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			  Single a, b, c = 0;
			 Single A = Single::TryParse(textBox1->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, a);
			 Single B = Single::TryParse(textBox2->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, b);
			 c = a + b;
			 textBox3->Text = String::Format("{0:F4}", c);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  Single a, b, c = 0;
			 Single A = Single::TryParse(textBox1->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, a);
			 Single B = Single::TryParse(textBox2->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, b);
			 c = a * b;
			 textBox3->Text = String::Format("{0:F4}", c);
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			  Single a, b, c = 0;
			 Single A = Single::TryParse(textBox1->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, a);
			 Single B = Single::TryParse(textBox2->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, b);
			 c = a / b;
			 textBox3->Text = String::Format("{0:F4}", c);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			  Single a, b, c = 0;
			 Single A = Single::TryParse(textBox1->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, a);
			 Single B = Single::TryParse(textBox2->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, b);
			 c = pow(a,b); // возвести a в степень b
			 textBox3->Text = String::Format("{0:F4}", c);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 Single a, b, c = 0, d = 0;
			 Single A = Single::TryParse(textBox1->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, a);
			 Single B = Single::TryParse(textBox2->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, b);
			 c = cos(a*3.14/180); 
			 d = cos(b*3.14/180);
			 // Если поле textBox пусто, то результатом будет 1
			 textBox3->Text = String::Format("{0:F2}  |  {1:F2}", c, d);
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 Single a, b, c = 0, d = 0;
			 Single A = Single::TryParse(textBox1->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, a);
			 Single B = Single::TryParse(textBox2->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, b);
			 c = tan(a*3.14/180); 
			 d = tan(b*3.14/180);  
			 // Если поле textBox пусто, то результатом будет 1
			 textBox3->Text = String::Format("{0:F2} | {1:F2}", c, d);
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 Single a, b, c = 0, d = 0;
			 Single A = Single::TryParse(textBox1->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, a);
			 Single B = Single::TryParse(textBox2->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, b);
			 c = sin(a*3.14/180); 
			 d = sin(b*3.14/180);
			 // Если поле textBox пусто, то результатом будет 1
			 textBox3->Text = String::Format("{0:F2} | {1:F2}", c, d);
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 Single a, b, c = 0, d = 0;
			 Single A = Single::TryParse(textBox1->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, a);
			 Single B = Single::TryParse(textBox2->Text,
				 System::Globalization::NumberStyles::Number,
				 System::Globalization::NumberFormatInfo::CurrentInfo, b);
			 c = 1/tan(a*3.14/180);   
			 d = 1/tan(b*3.14/180);  
			 // Если поле textBox пусто, то результатом будет 1
			 textBox3->Text = String::Format("{0:F2} | {1:F2}", c, d);
		 }
};
}

