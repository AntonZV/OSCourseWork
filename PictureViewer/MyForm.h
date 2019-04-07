#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
namespace PictureViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	ref class MyForm;
	ref class MyForm1;
	ref class MyForm2;
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
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;


	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::ImageList^  imageList2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem8;


	private: String^ folderName;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem9;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem10;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem11;

	private: System::Windows::Forms::ListViewItem^ listViewitem1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton7;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem12;
	private: MyForm1^  childForm;
	private: System::Windows::Forms::Timer^  timer1;

	private: MyForm2^  childForm2;
	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->LargeImageList = this->imageList2;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(496, 316);
			this->listView1->SmallImageList = this->imageList1;
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->Click += gcnew System::EventHandler(this, &MyForm::listView1_Click);
			this->imageList2->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList2->ImageSize = System::Drawing::Size(256, 256);
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(80, 80);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1, this->toolStripMenuItem2,
					this->toolStripMenuItem3
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(496, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem6 });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(48, 20);
			this->toolStripMenuItem1->Text = L"Файл";
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->toolStripMenuItem6->Size = System::Drawing::Size(162, 22);
			this->toolStripMenuItem6->Text = L"Відкрити";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem6_Click);
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem9,
					this->toolStripMenuItem10, this->toolStripMenuItem11, this->toolStripMenuItem12
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(61, 20);
			this->toolStripMenuItem2->Text = L"Процес";
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D1));
			this->toolStripMenuItem9->Size = System::Drawing::Size(205, 22);
			this->toolStripMenuItem9->Text = L"Великі іконки";
			this->toolStripMenuItem9->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem9_Click);
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D2));
			this->toolStripMenuItem10->Size = System::Drawing::Size(205, 22);
			this->toolStripMenuItem10->Text = L"Маленькі іконки";
			this->toolStripMenuItem10->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem10_Click);
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D3));
			this->toolStripMenuItem11->Size = System::Drawing::Size(205, 22);
			this->toolStripMenuItem11->Text = L"Список";
			this->toolStripMenuItem11->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem11_Click);
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D4));
			this->toolStripMenuItem12->Size = System::Drawing::Size(205, 22);
			this->toolStripMenuItem12->Text = L"Вихід";
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem12_Click);
			this->toolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem7,
					this->toolStripMenuItem8
			});
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(99, 20);
			this->toolStripMenuItem3->Text = L"Про програму";
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->toolStripMenuItem7->Size = System::Drawing::Size(208, 22);
			this->toolStripMenuItem7->Text = L"Про розробника";
			this->toolStripMenuItem7->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem7_Click);
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::I));
			this->toolStripMenuItem8->Size = System::Drawing::Size(208, 22);
			this->toolStripMenuItem8->Text = L"Довідка";
			this->toolStripMenuItem8->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem8_Click);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripProgressBar1
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 318);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(496, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"Рядок стану";
			this->toolStripStatusLabel1->AutoSize = false;
			this->toolStripStatusLabel1->AutoToolTip = true;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(240, 17);
			this->toolStripStatusLabel1->ToolTipText = L"Рядок стану\r\n";
			this->toolStripProgressBar1->AutoToolTip = true;
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(240, 16);
			this->toolStripProgressBar1->ToolTipText = L"Індикатор прогресу";
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripButton1, this->toolStripButton2,
					this->toolStripButton3, this->toolStripButton4, this->toolStripButton5, this->toolStripButton7
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(496, 35);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStripButton1->AutoSize = false;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(32, 32);
			this->toolStripButton1->Text = L"Відкрити";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem6_Click);
			this->toolStripButton2->AutoSize = false;
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(32, 32);
			this->toolStripButton2->Text = L"Великі іконки";
			this->toolStripButton2->ToolTipText = L"Великі іконки";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem9_Click);
			this->toolStripButton3->AutoSize = false;
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(32, 32);
			this->toolStripButton3->Text = L"Маленкі іконки";
			this->toolStripButton3->ToolTipText = L"Маленькі іконки";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem10_Click);
			this->toolStripButton4->AutoSize = false;
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(32, 32);
			this->toolStripButton4->Text = L"Список";
			this->toolStripButton4->ToolTipText = L"Список";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem11_Click);
			this->toolStripButton5->AutoSize = false;
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(32, 32);
			this->toolStripButton5->Text = L"Довідка";
			this->toolStripButton5->ToolTipText = L"Довідка";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem8_Click);
			this->toolStripButton7->AutoSize = false;
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(32, 32);
			this->toolStripButton7->Text = L"Вихід";
			this->toolStripButton7->ToolTipText = L"Вихід";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem12_Click);
			this->folderBrowserDialog1->ShowNewFolderButton = false;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 340);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(512, 378);
			this->Name = L"MyForm";
			this->Text = L"Picture Viewer";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripMenuItem6_Click(System::Object^  sender, System::EventArgs^  e)
	{
		toolStripProgressBar1->Value = 0;
		toolStripStatusLabel1->Text = "Вибір каталогу";
		listView1->Items->Clear();
		imageList1->Images->Clear();
		imageList2->Images->Clear();
		if (folderBrowserDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
		{
			toolStripStatusLabel1->Text = "Відкриття графічних файлів";
			String^ folder = folderBrowserDialog1->SelectedPath;
			array<String^>^ extentions = { "*.BMP", "*.JPG", "*.GIF", "*.TIF", "*.PNG" };
			timer1->Start();
			int i = 0;
			for each (String^ ext in extentions)
			{
				array<String^>^ dirs = Directory::GetFiles(folder, ext, SearchOption::AllDirectories);
				for each (String^ dir in dirs)
				{
					listView1->BeginUpdate();
					imageList1->Images->Add(Image::FromFile(dir, i));
					imageList2->Images->Add(Image::FromFile(dir, i));
					listView1->Items->Add(dir, i);
					++i;
					listView1->EndUpdate();
				}
			}
			timer1->Stop();
			toolStripProgressBar1->Value = 100;
		}
	}
	private: System::Void toolStripMenuItem9_Click(System::Object^  sender, System::EventArgs^  e) {
		toolStripStatusLabel1->Text = "Великі іконки";
		listView1->View = View::LargeIcon;
	}
	private: System::Void toolStripMenuItem10_Click(System::Object^  sender, System::EventArgs^  e) {
		toolStripStatusLabel1->Text = "Маленькі іконки";
		listView1->View = View::SmallIcon;
	}
	private: System::Void toolStripMenuItem11_Click(System::Object^  sender, System::EventArgs^  e) {
		toolStripStatusLabel1->Text = "Список";
		listView1->View = View::List;
	}
	private: System::Void listView1_Click(System::Object^  sender, System::EventArgs^  e) {
		toolStripStatusLabel1->Text = "Перегляд зображення";
		childForm = gcnew MyForm1();
		childForm->pictureBox1->Image = Image::FromFile(listView1->SelectedItems[0]->Text);
		childForm->Show();
	}
	private: System::Void toolStripMenuItem12_Click(System::Object^  sender, System::EventArgs^  e) {
		toolStripStatusLabel1->Text = "Вихід";
		this->Close();
	}
	private: System::Void toolStripMenuItem7_Click(System::Object^  sender, System::EventArgs^  e) {
		toolStripStatusLabel1->Text = "Про розробника";
		childForm2 = gcnew MyForm2();
		childForm2->Show();
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		toolStripProgressBar1->Increment(10);
	}
private: System::Void toolStripMenuItem8_Click(System::Object^  sender, System::EventArgs^  e) {
	toolStripStatusLabel1->Text = "Довідка";
	Help::ShowHelp(this, "Help.chm");
}
};
}
