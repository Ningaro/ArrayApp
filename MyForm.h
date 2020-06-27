#pragma once

// Мои библиотеки 
#include <cstdlib>
#include <string>

int lastSymbol;

namespace ArrayApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  MinElem;
	private: System::Windows::Forms::TextBox^  MaxElem;


	private: System::Windows::Forms::TextBox^  ElemCount;

	private: System::Windows::Forms::Button^  RandomArr;
	private: System::Windows::Forms::TextBox^  FileNameRead;


	private: System::Windows::Forms::Button^  ReadFromFile;

	private: System::Windows::Forms::Button^  Go;

	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  SourceArr;
	private: System::Windows::Forms::TextBox^  AnsArr;


	private: System::Windows::Forms::RadioButton^  Fsum;
	private: System::Windows::Forms::RadioButton^  Fmid;
	private: System::Windows::Forms::RadioButton^  Fmin;
	private: System::Windows::Forms::RadioButton^  Fmax;
	private: System::Windows::Forms::RadioButton^  Feven;
	private: System::Windows::Forms::RadioButton^  Fodd;
	private: System::Windows::Forms::RadioButton^  Fasce;
	private: System::Windows::Forms::RadioButton^  Fdesc;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;













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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->MinElem = (gcnew System::Windows::Forms::TextBox());
			this->MaxElem = (gcnew System::Windows::Forms::TextBox());
			this->ElemCount = (gcnew System::Windows::Forms::TextBox());
			this->RandomArr = (gcnew System::Windows::Forms::Button());
			this->FileNameRead = (gcnew System::Windows::Forms::TextBox());
			this->ReadFromFile = (gcnew System::Windows::Forms::Button());
			this->Go = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SourceArr = (gcnew System::Windows::Forms::TextBox());
			this->AnsArr = (gcnew System::Windows::Forms::TextBox());
			this->Fsum = (gcnew System::Windows::Forms::RadioButton());
			this->Fmid = (gcnew System::Windows::Forms::RadioButton());
			this->Fmin = (gcnew System::Windows::Forms::RadioButton());
			this->Fmax = (gcnew System::Windows::Forms::RadioButton());
			this->Feven = (gcnew System::Windows::Forms::RadioButton());
			this->Fodd = (gcnew System::Windows::Forms::RadioButton());
			this->Fasce = (gcnew System::Windows::Forms::RadioButton());
			this->Fdesc = (gcnew System::Windows::Forms::RadioButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(7, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Исходные данные";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(7, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Исходный массив";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(7, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Операции с массивом";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(7, 370);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Результат операции";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(551, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Имя файла ввода";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(543, 235);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 19);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Имя файла вывода";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(217, 19);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Колличество элементов массива:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 63);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(238, 19);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Минимальное значение диапозона:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(242, 19);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Максимальное значение диапозона:";
			// 
			// MinElem
			// 
			this->MinElem->Location = System::Drawing::Point(251, 60);
			this->MinElem->Name = L"MinElem";
			this->MinElem->ReadOnly = true;
			this->MinElem->Size = System::Drawing::Size(200, 25);
			this->MinElem->TabIndex = 9;
			// 
			// MaxElem
			// 
			this->MaxElem->Location = System::Drawing::Point(251, 91);
			this->MaxElem->Name = L"MaxElem";
			this->MaxElem->ReadOnly = true;
			this->MaxElem->Size = System::Drawing::Size(200, 25);
			this->MaxElem->TabIndex = 10;
			// 
			// ElemCount
			// 
			this->ElemCount->Location = System::Drawing::Point(251, 29);
			this->ElemCount->Name = L"ElemCount";
			this->ElemCount->ReadOnly = true;
			this->ElemCount->Size = System::Drawing::Size(200, 25);
			this->ElemCount->TabIndex = 11;
			// 
			// RandomArr
			// 
			this->RandomArr->Location = System::Drawing::Point(526, 29);
			this->RandomArr->Name = L"RandomArr";
			this->RandomArr->Size = System::Drawing::Size(163, 25);
			this->RandomArr->TabIndex = 12;
			this->RandomArr->Text = L"Генерамция массива";
			this->RandomArr->UseVisualStyleBackColor = true;
			this->RandomArr->Click += gcnew System::EventHandler(this, &MyForm::RandomArr_Click);
			// 
			// FileNameRead
			// 
			this->FileNameRead->Location = System::Drawing::Point(526, 79);
			this->FileNameRead->Name = L"FileNameRead";
			this->FileNameRead->Size = System::Drawing::Size(163, 25);
			this->FileNameRead->TabIndex = 13;
			this->FileNameRead->DoubleClick += gcnew System::EventHandler(this, &MyForm::FileNameRead_DoubleClick);
			// 
			// ReadFromFile
			// 
			this->ReadFromFile->Location = System::Drawing::Point(526, 110);
			this->ReadFromFile->Name = L"ReadFromFile";
			this->ReadFromFile->Size = System::Drawing::Size(163, 25);
			this->ReadFromFile->TabIndex = 14;
			this->ReadFromFile->Text = L"Ввод из файла";
			this->ReadFromFile->UseVisualStyleBackColor = true;
			this->ReadFromFile->Click += gcnew System::EventHandler(this, &MyForm::ReadFromFile_Click);
			// 
			// Go
			// 
			this->Go->Enabled = false;
			this->Go->Location = System::Drawing::Point(526, 207);
			this->Go->Name = L"Go";
			this->Go->Size = System::Drawing::Size(163, 25);
			this->Go->TabIndex = 15;
			this->Go->Text = L"Выполнить";
			this->Go->UseVisualStyleBackColor = true;
			this->Go->Click += gcnew System::EventHandler(this, &MyForm::Go_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(526, 257);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(163, 25);
			this->textBox5->TabIndex = 16;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(526, 288);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(163, 25);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Сохранить в файл";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(526, 397);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(163, 25);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Закрыть";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// SourceArr
			// 
			this->SourceArr->Location = System::Drawing::Point(11, 178);
			this->SourceArr->Name = L"SourceArr";
			this->SourceArr->Size = System::Drawing::Size(440, 25);
			this->SourceArr->TabIndex = 19;
			this->SourceArr->TextChanged += gcnew System::EventHandler(this, &MyForm::SourceArr_TextChanged);
			this->SourceArr->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::SourceArr_KeyPress);
			// 
			// AnsArr
			// 
			this->AnsArr->Location = System::Drawing::Point(11, 397);
			this->AnsArr->Name = L"AnsArr";
			this->AnsArr->Size = System::Drawing::Size(440, 25);
			this->AnsArr->TabIndex = 20;
			// 
			// Fsum
			// 
			this->Fsum->AllowDrop = true;
			this->Fsum->AutoSize = true;
			this->Fsum->Checked = true;
			this->Fsum->Location = System::Drawing::Point(11, 234);
			this->Fsum->Name = L"Fsum";
			this->Fsum->Size = System::Drawing::Size(140, 23);
			this->Fsum->TabIndex = 21;
			this->Fsum->TabStop = true;
			this->Fsum->Text = L"Сумма элементов";
			this->Fsum->UseVisualStyleBackColor = true;
			// 
			// Fmid
			// 
			this->Fmid->AutoSize = true;
			this->Fmid->Location = System::Drawing::Point(11, 263);
			this->Fmid->Name = L"Fmid";
			this->Fmid->Size = System::Drawing::Size(144, 23);
			this->Fmid->TabIndex = 22;
			this->Fmid->Text = L"Среднее значение";
			this->Fmid->UseVisualStyleBackColor = true;
			// 
			// Fmin
			// 
			this->Fmin->AutoSize = true;
			this->Fmin->Location = System::Drawing::Point(11, 292);
			this->Fmin->Name = L"Fmin";
			this->Fmin->Size = System::Drawing::Size(181, 23);
			this->Fmin->TabIndex = 23;
			this->Fmin->Text = L"Минимальное значение";
			this->Fmin->UseVisualStyleBackColor = true;
			// 
			// Fmax
			// 
			this->Fmax->AutoSize = true;
			this->Fmax->Location = System::Drawing::Point(11, 321);
			this->Fmax->Name = L"Fmax";
			this->Fmax->Size = System::Drawing::Size(185, 23);
			this->Fmax->TabIndex = 24;
			this->Fmax->Text = L"Максимальное значение";
			this->Fmax->UseVisualStyleBackColor = true;
			// 
			// Feven
			// 
			this->Feven->AutoSize = true;
			this->Feven->Location = System::Drawing::Point(251, 234);
			this->Feven->Name = L"Feven";
			this->Feven->Size = System::Drawing::Size(139, 23);
			this->Feven->TabIndex = 25;
			this->Feven->Text = L"Четные элементы";
			this->Feven->UseVisualStyleBackColor = true;
			// 
			// Fodd
			// 
			this->Fodd->AutoSize = true;
			this->Fodd->Location = System::Drawing::Point(251, 263);
			this->Fodd->Name = L"Fodd";
			this->Fodd->Size = System::Drawing::Size(155, 23);
			this->Fodd->TabIndex = 26;
			this->Fodd->Text = L"Нечетные элементы";
			this->Fodd->UseVisualStyleBackColor = true;
			// 
			// Fasce
			// 
			this->Fasce->AutoSize = true;
			this->Fasce->Location = System::Drawing::Point(251, 292);
			this->Fasce->Name = L"Fasce";
			this->Fasce->Size = System::Drawing::Size(209, 23);
			this->Fasce->TabIndex = 27;
			this->Fasce->Text = L"Сортировка по возрастанию";
			this->Fasce->UseVisualStyleBackColor = true;
			// 
			// Fdesc
			// 
			this->Fdesc->AutoSize = true;
			this->Fdesc->Location = System::Drawing::Point(251, 321);
			this->Fdesc->Name = L"Fdesc";
			this->Fdesc->Size = System::Drawing::Size(193, 23);
			this->Fdesc->TabIndex = 28;
			this->Fdesc->Text = L"Сортировка по убыванию";
			this->Fdesc->UseVisualStyleBackColor = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(701, 435);
			this->Controls->Add(this->Fdesc);
			this->Controls->Add(this->Fasce);
			this->Controls->Add(this->Fodd);
			this->Controls->Add(this->Feven);
			this->Controls->Add(this->Fmax);
			this->Controls->Add(this->Fmin);
			this->Controls->Add(this->Fmid);
			this->Controls->Add(this->Fsum);
			this->Controls->Add(this->AnsArr);
			this->Controls->Add(this->SourceArr);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->Go);
			this->Controls->Add(this->ReadFromFile);
			this->Controls->Add(this->FileNameRead);
			this->Controls->Add(this->RandomArr);
			this->Controls->Add(this->ElemCount);
			this->Controls->Add(this->MaxElem);
			this->Controls->Add(this->MinElem);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void RandomArr_Click(System::Object^  sender, System::EventArgs^  e) {
	SourceArr->Text = "";//Очищяем исходный массив
	int ArrSize = 1 + rand() % 10; // Сначала определяем размер рандомного массива
	int Max = -1; int Min = 101; // Объявляем переменные для поиска max и min элементов
	int *MyArr = new int[ArrSize]; // Объявление массива
	//Заполнение массива приближенно к равномерному рандомными значениями
	for (size_t i = 0; i < ArrSize; i++)
	{
		MyArr[i] = rand() % 101; // Числа от 0 до 100 включительно
		if (MyArr[i] > Max) Max = MyArr[i];
		if (MyArr[i] < Min) Min = MyArr[i];
		SourceArr->Text = SourceArr->Text + Convert::ToString(MyArr[i] + " ");
	}
	SourceArr->Text = SourceArr->Text->Substring(0, SourceArr->Text->Length - 1);
	MaxElem->Text = Convert::ToString(Max); // Выводим max элем. в приложение
	MinElem->Text = Convert::ToString(Min); // Выводим min элем. в приложение
	ElemCount->Text = Convert::ToString(ArrSize); // Выводим кол-во элемментов массива в приложение
}
private: System::Void Go_Click(System::Object^  sender, System::EventArgs^  e) {
	Console::WriteLine("\nКлац!");
	int Leng = SourceArr->Text->Length; int m = 1;
	//Удаляем лишние пробелы в конце строки
	while (SourceArr->Text->Substring(Leng - 1, 1) == " ") { SourceArr->Text = SourceArr->Text->Substring(0, Leng - 1); Leng = SourceArr->Text->Length;
	}
	char *MyArr = new char[Leng];
	int  n = 0; int j = 0; int lastSpace = 0;
	// Считаем кол-во элементов в массиве
	for (size_t i = 0; i < Leng; i++)
	{
		MyArr[i] = Convert::ToChar(SourceArr->Text->Substring(i, 1));
		if (Convert::ToChar(MyArr[i]) == ' ') {
			m++;
		}
	}
	ElemCount->Text = Convert::ToString(m);// Выводим кол-во элемментов массива в приложение
	int *IntArr = new int[m]; // Переменная для цифирок :3
	// Работаем с массивом
	for (size_t i = 0; i < Leng; i++)
	{
		
		//Console::Write(Convert::ToChar(MyArr[i]));
		if (Convert::ToChar(MyArr[i]) == ' ') { 
			IntArr[j] = Convert::ToInt32(SourceArr->Text->Substring(lastSpace, n));
			Console::WriteLine(IntArr[j]);
			j++;
			n = 0;
			lastSpace = i+1;
		} else n++;
		
	}
	IntArr[j] = Convert::ToInt32(SourceArr->Text->Substring(lastSpace, (Leng)-lastSpace)); // Вносим в массив последний эллемент

	int MinInt = IntArr[0]; int MaxInt = 0;
	for (size_t i = 0; i < m; i++)
	{
		if (IntArr[i] < MinInt) MinInt = IntArr[i];
		if (IntArr[i] > MaxInt) MaxInt = IntArr[i];
	}
	MaxElem->Text = Convert::ToString(MaxInt); // Выводим max элем. в приложение
	MinElem->Text = Convert::ToString(MinInt); // Выводим min элем. в приложение

	Console::WriteLine(IntArr[j]);
	Console::WriteLine("Размер массива: " + m);
	if (Fsum->Checked) {
		int AnsInt = 0;
		AnsArr->Text = "Сумма элементов массива: ";
		for (size_t i = 0; i < m; i++)
		{
			AnsInt += IntArr[i];
		}
		AnsArr->Text += Convert::ToString(AnsInt);
	}
	else if (Fmid->Checked) {
		int AnsInt = 0;
		AnsArr->Text = "Среднее значение эллементов массива: ";
		for (size_t i = 0; i < m; i++)
		{
			AnsInt += IntArr[i];
		}
		Console::WriteLine("AnsInt" + AnsInt);
		AnsArr->Text += Convert::ToString(AnsInt/m);
	}
	else if (Fmin->Checked) {
		int AnsInt = IntArr[0];
		AnsArr->Text = "Минимальный эллемент массива: ";
		for (size_t i = 0; i < m; i++)
		{
			if (IntArr[i] < AnsInt) AnsInt = IntArr[i];
		}
		AnsArr->Text += Convert::ToString(AnsInt);
	}
	else if (Fmax->Checked) {
		int AnsInt = 0;
		AnsArr->Text = "Максимальный эллемент массива: ";
		for (size_t i = 0; i < m; i++)
		{
			if (IntArr[i] > AnsInt) AnsInt = IntArr[i];
		}
		AnsArr->Text += Convert::ToString(AnsInt);
	}
	else if (Feven->Checked) {
		AnsArr->Text = "Четнные эллементы массива: ";
		for (size_t i = 0; i < m; i++)
		{
			if (IntArr[i] % 2 == 0) AnsArr->Text += Convert::ToString(IntArr[i] + " ");
		}
	}
	else if (Fodd->Checked) {
		AnsArr->Text = "Нечетнные эллементы массива: ";
		for (size_t i = 0; i < m; i++)
		{
			if (IntArr[i] % 2 != 0) AnsArr->Text += Convert::ToString(IntArr[i] + " ");
		}
	}
	else if (Fasce->Checked) {
		AnsArr->Text = "Сортировка по возрастанию: ";
		for (size_t i = 1; i < m; ++i)
		{
			for (size_t r = 0; r < m - i; r++)
			{
				if (IntArr[r] > IntArr[r + 1])
				{
					// Обмен местами
					int temp = IntArr[r + 1];
					IntArr[r + 1] = IntArr[r];
					IntArr[r] = temp;
				}
			}
		}
		for (size_t i = 0; i < m; i++)
		{
			AnsArr->Text += Convert::ToString(IntArr[i] + " ");

		}
	}
	else if (Fdesc->Checked) {
		AnsArr->Text = "Сортировка по убыванию: ";
		for (size_t i = 1; i < m; ++i)
		{
			for (size_t r = 0; r < m - i; r++)
			{
				if (IntArr[r] < IntArr[r + 1])
				{
					// Обмен местами
					int temp = IntArr[r];
					IntArr[r] = IntArr[r + 1];
					IntArr[r + 1] = temp;
				}
			}
		}
		for (size_t i = 0; i < m; i++)
		{
			AnsArr->Text += Convert::ToString(IntArr[i] + " ");

		}
	}
}
private: System::Void SourceArr_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (SourceArr->Text == "") Go->Enabled = false; else Go->Enabled = true; // Выключаем "Выполнить" если поле пусто
	ElemCount->Text = "";
	MinElem->Text = "";
	MaxElem->Text = "";

}
private: System::Void SourceArr_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// Ввод только чисел и пробело не больше одного подряд.
	Console::WriteLine("Введеный символ: " + Convert::ToInt32(e->KeyChar));
	if (((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b') && (e->KeyChar != 32 || (e->KeyChar == 32 && lastSymbol == 32)))  e->Handled = true;
	lastSymbol = e->KeyChar;
}
private: System::Void ReadFromFile_Click(System::Object^  sender, System::EventArgs^  e) {
	Console::WriteLine("\nНачал работать над файлом...\n");
	Stream^ myStream;
	openFileDialog1->FileName = FileNameRead->Text;
	if ((myStream = openFileDialog1->OpenFile()) != nullptr)
	{
		myStream->Close();
		double number2;
		if (!double::TryParse(System::IO::File::ReadAllText(openFileDialog1->FileName), number2)) {
			MessageBox::Show("В файле обнаружены посторонние символы, ввод не возможен.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else {
			String^ text = System::IO::File::ReadAllText(openFileDialog1->FileName); 
			Console::WriteLine("Входная строка из файла: " + text);
			String^ textReady = "";
			// Удаляем лишние символы в начале строки
			while (text->Substring(0, 1) == " ") text = text->Substring(1, text->Length-1);
			// Удаляем лишние символы в коцне строки
			while (text->Substring(text->Length - 1, 1) == " ") text = text->Substring(0, text->Length - 1);
			//Проверяем каждый символ строки на "лишние пробелы".
			char lastSymbol = Convert::ToChar(text->Substring(0,1));
			for each (Char c in text) {
				if (!((lastSymbol == ' ') && (c == ' ')))
					textReady += c;
				lastSymbol = c;
				
			}
			Console::WriteLine("Измененая строка: " + textReady);
			SourceArr->Text = textReady;

		}
	}
}
private: System::Void FileNameRead_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt";
	openFileDialog1->FileName = "";
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FileNameRead->Text = openFileDialog1->FileName;

	}
}
};
}
