#pragma once

#include "Matching.h"
#include "server.h"
#include "infor.h"
#include <msclr\marshal_cppstd.h>

namespace OOP {
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Find에 대한 요약입니다.
	/// </summary>
	public ref class Find : public System::Windows::Forms::Form
	{
	public:
		vector<class infor*>* Infor;
	private: System::Windows::Forms::Label^  label1;
	public:

	public:
		int myindex;
		Find() {  }

		Find(vector<class infor*> info, server Server, string id)
		{
			myindex = Server.findIndex(id);
			Infor = &info;
			InitializeComponent();
			for (int i = 0; i < info.size(); i++) { //데이터 불러들이기
				if (Server.findbreed(id) == info[i]->getBreed()) {
					if (id != info[i]->getName()) { //만약 데이터가 자신이면 제외
						dataGridView1->Rows->Add(marshal_as<String^>(info[i]->getBreed()), marshal_as<String^>(info[i]->getType()), marshal_as<String^>(info[i]->getAge()), marshal_as<String^>(info[i]->getPetname()));
					}
				}
			}
			
			
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Find()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  breed;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  petname;




	private:
		System::Windows::Forms::DataGridViewCellEventArgs^  current;
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Find::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->breed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->petname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
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
			this->button1->Location = System::Drawing::Point(100, 450);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(300, 50);
			this->button1->TabIndex = 2;
			this->button1->Text = L"매칭하기";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Find::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->breed,
					this->type, this->age, this->petname
			});
			this->dataGridView1->Location = System::Drawing::Point(-7, 113);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->Size = System::Drawing::Size(497, 258);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Find::dataGridView1_CellClick);
			// 
			// breed
			// 
			this->breed->HeaderText = L"종류";
			this->breed->Name = L"breed";
			this->breed->ReadOnly = true;
			// 
			// type
			// 
			this->type->HeaderText = L"품종";
			this->type->Name = L"type";
			this->type->ReadOnly = true;
			// 
			// age
			// 
			this->age->HeaderText = L"나이";
			this->age->Name = L"age";
			this->age->ReadOnly = true;
			// 
			// petname
			// 
			this->petname->HeaderText = L"이름";
			this->petname->Name = L"petname";
			this->petname->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(-10, -3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(500, 100);
			this->label1->TabIndex = 4;
			// 
			// Find
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->ClientSize = System::Drawing::Size(482, 553);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Find";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"펫다방";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		

	void MarshalString(String ^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //매칭버튼 클릭
		if (!(current)) { //상대를 클릭하지 않았으면
			MessageBox::Show("원하는 상대를 설정해야합니다.");
		}
		else { 
			this->Hide();
			server Server; //서버객체 생성
			Server.matching(); //Matching 폼창 생성후 서버, 상대인덱스, 사용자인덱스를 인자로 보내 띄우기
			OOP::Matching Matching(Server, current->RowIndex, myindex);
			Matching.ShowDialog();
			this->Close();
		}


	}
	private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		current = e;
	}
};
}
