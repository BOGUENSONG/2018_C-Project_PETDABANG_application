#pragma once

#include "Find.h"
#include "server.h"
#include "Login.h"
#include <fstream>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace OOP {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Register�� ���� ����Դϴ�.
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
		
	public:
		
		Register(void)
		{
			
			InitializeComponent();
			comboBox1->Items->Add("��");
			comboBox1->Items->Add("�䳢");
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;


	protected:

	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::White;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��", L"�����" });
			this->comboBox1->Location = System::Drawing::Point(180, 250);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 20);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &Register::comboBox1_TextChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::White;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Enabled = false;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(180, 300);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(200, 20);
			this->comboBox2->TabIndex = 3;
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::White;
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15�̻�"
			});
			this->comboBox3->Location = System::Drawing::Point(180, 350);
			this->comboBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(200, 20);
			this->comboBox3->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(180, 400);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 21);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(100, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(100, 300);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"ǰ��";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(100, 350);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"����";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label5->Location = System::Drawing::Point(100, 400);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"�̸�";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(168, 450);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(226, 50);
			this->button1->TabIndex = 10;
			this->button1->Text = L"���";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label6->Location = System::Drawing::Point(100, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"���̵�";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label7->Location = System::Drawing::Point(100, 200);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"��й�ȣ";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(180, 150);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 21);
			this->textBox2->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(180, 200);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(200, 21);
			this->textBox3->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(490, 100);
			this->label1->TabIndex = 17;
			// 
			// Register
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->ClientSize = System::Drawing::Size(482, 553);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"��ٹ�";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		comboBox2->Enabled = true;
		if (comboBox1->Text == "��") {
			comboBox2->Items->Clear();
			comboBox2->Text = "";
			comboBox2->Items->Add("���");
			comboBox2->Items->Add("Ǫ��");
			comboBox2->Items->Add("ġ�Ϳ�");
			comboBox2->Items->Add("��Ʈ���Ϸ�");
			comboBox2->Items->Add("����");
		}
		else if(comboBox1->Text == "�����") {
			comboBox2->Items->Clear();
			comboBox2->Text = "";
			comboBox2->Items->Add("���þ� ���");
			comboBox2->Items->Add("�丣�þ�");
			comboBox2->Items->Add("����");
			comboBox2->Items->Add("�þ�");
			comboBox2->Items->Add("���׵�");
		}
		else if (comboBox1->Text == "��") {
			comboBox2->Items->Clear();
			comboBox2->Text = "";
			comboBox2->Items->Add("�Ƴ��ܴ�");
			comboBox2->Items->Add("����");
			comboBox2->Items->Add("�칫��");
			comboBox2->Items->Add("��ܹ�");
			comboBox2->Items->Add("�ں��");
		}
		else if (comboBox1->Text == "�䳢") {
			comboBox2->Items->Clear();
			comboBox2->Text = "";
			comboBox2->Items->Add("���䳢");
			comboBox2->Items->Add("���̾�");
			comboBox2->Items->Add("�ز����䳢");
			comboBox2->Items->Add("���䳢");
		}
	}

	void MarshalString(String ^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
	    (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //ȸ������ ��ư Ŭ��
		OOP::server Server; //������ü�� ������ ��� �ؽ�Ʈ�ڽ��� ��������ʰ� �ߺ�üũ
		if (comboBox1->Text != "" && comboBox2->Text != "" && comboBox3->Text != "" && textBox1->Text != ""&& textBox2->Text != ""&& textBox3->Text != "") {
			if ((Server.join(msclr::interop::marshal_as<std::string>(textBox2->Text), msclr::interop::marshal_as<std::string>(textBox3->Text), msclr::interop::marshal_as<std::string>(comboBox1->Text), msclr::interop::marshal_as<std::string>(comboBox2->Text), msclr::interop::marshal_as<std::string>(comboBox3->Text), msclr::interop::marshal_as<std::string>(textBox1->Text))) == -1) {
				MessageBox::Show("���̵� �ߺ��˴ϴ�!");
			}
			else {
				this->Hide(); //�ߺ�üũ���� �Ϸ��ϸ� Find �� ����, ���ڴ� �����ͺ��̽�, ����, �����ID
				OOP::Find find(Server.getInfo(), Server, msclr::interop::marshal_as<std::string>(textBox2->Text));
				find.ShowDialog();
				this->Close();
			}
		}
		else {
			MessageBox::Show("��� �׸��� �ۼ��ؾ� �մϴ�.");
		}
	}
};
}
