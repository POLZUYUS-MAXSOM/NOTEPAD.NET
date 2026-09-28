#pragma once

namespace notepaddotnet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ темаToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->темаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripComboBox1,
					this->темаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(310, 27);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"light", L"black" });
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 23);
			this->toolStripComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::toolStripComboBox1_SelectedIndexChanged);
			// 
			// темаToolStripMenuItem
			// 
			this->темаToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->темаToolStripMenuItem->Enabled = false;
			this->темаToolStripMenuItem->Name = L"темаToolStripMenuItem";
			this->темаToolStripMenuItem->Size = System::Drawing::Size(61, 23);
			this->темаToolStripMenuItem->Text = L"<- тема";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(310, 25);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->Text = L".setting editor";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (toolStripComboBox1->SelectedIndex == 1)
		{
			array<String^>^ lines = System::IO::File::ReadAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"));
			lines[0] = "black";
			System::IO::File::WriteAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"), lines);
		}
		else
		{
			array<String^>^ lines = System::IO::File::ReadAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"));
			lines[0] = "light";
			System::IO::File::WriteAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"), lines);

		}
	}
	};
}
