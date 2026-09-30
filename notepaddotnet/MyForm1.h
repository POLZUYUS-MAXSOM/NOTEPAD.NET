#pragma once

namespace notepaddotnet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripMenuItem^ òåìàToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ ÿçûêtoolStripMenuItem1;


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->òåìàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripComboBox2 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->ÿçûêtoolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripComboBox1,
					this->òåìàToolStripMenuItem
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
			// òåìàToolStripMenuItem
			// 
			this->òåìàToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->òåìàToolStripMenuItem->Enabled = false;
			this->òåìàToolStripMenuItem->Name = L"òåìàToolStripMenuItem";
			this->òåìàToolStripMenuItem->Size = System::Drawing::Size(61, 23);
			this->òåìàToolStripMenuItem->Text = L"<- òåìà";
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripComboBox2,
					this->ÿçûêtoolStripMenuItem1
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 27);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(310, 27);
			this->menuStrip2->TabIndex = 1;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// toolStripComboBox2
			// 
			this->toolStripComboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ru", L"en" });
			this->toolStripComboBox2->Name = L"toolStripComboBox2";
			this->toolStripComboBox2->Size = System::Drawing::Size(121, 23);
			this->toolStripComboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::toolStripComboBox2_SelectedIndexChanged);
			// 
			// ÿçûêtoolStripMenuItem1
			// 
			this->ÿçûêtoolStripMenuItem1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->ÿçûêtoolStripMenuItem1->Enabled = false;
			this->ÿçûêtoolStripMenuItem1->Name = L"ÿçûêtoolStripMenuItem1";
			this->ÿçûêtoolStripMenuItem1->Size = System::Drawing::Size(61, 23);
			this->ÿçûêtoolStripMenuItem1->Text = L"<- ÿçûê";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(310, 52);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->Text = L".setting editor";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (toolStripComboBox1->SelectedIndex == 1)
		{
			array<String^>^ lines = System::IO::File::ReadAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"));
			lines[35] = "black";
			System::IO::File::WriteAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"), lines);
		}
		else
		{
			array<String^>^ lines = System::IO::File::ReadAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"));
			lines[35] = "light";
			System::IO::File::WriteAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"), lines);

		}
	}
private: System::Void toolStripComboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (toolStripComboBox1->SelectedIndex == 1)
	{
		array<String^>^ lines = System::IO::File::ReadAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"));
		lines[34] = "ru";
		System::IO::File::WriteAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"), lines);
	}
	else
	{
		array<String^>^ lines = System::IO::File::ReadAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"));
		lines[34] = "en";
		System::IO::File::WriteAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"), lines);

	}
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	array<String^>^ lines = System::IO::File::ReadAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"));
	if (lines[34] == "en")
	{
		this->Text = lines[14];
		òåìàToolStripMenuItem->Text = lines[15];
		ÿçûêtoolStripMenuItem1->Text = lines[16];
	}
	if (lines[34] == "en")
	{
		this->Text = lines[31];
		òåìàToolStripMenuItem->Text = lines[32];
		ÿçûêtoolStripMenuItem1->Text = lines[33];
	}
}
};
}
