#pragma once
#include "myform1.h"
namespace notepaddotnet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^  filepath;
	private: bool redacted;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîçäàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;



	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñåğâèñToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòğîéêèToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ContextMenuStrip^ lol;

	private: System::Windows::Forms::ToolStripMenuItem^ òóòÍè÷åãîÍåòToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ øğèôòToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîïèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûğåçàòütoolStripMenuItem1;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèìâîëîâToolStripMenuItem2;

	private: System::Windows::Forms::ToolStripMenuItem^ count2;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèìâîëîâtoolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ count;




	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñåğâèñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòğîéêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øğèôòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîïèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûğåçàòütoolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lol = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->òóòÍè÷åãîÍåòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->ñèìâîëîâtoolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->count = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèìâîëîâToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->count2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->lol->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ôàéëToolStripMenuItem,
					this->ñåğâèñToolStripMenuItem, this->ïğàâêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(632, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"Ïğàâêè";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->ñîçäàòüToolStripMenuItem,
					this->îòêğûòüToolStripMenuItem, this->toolStripSeparator, this->ñîõğàíèòüToolStripMenuItem, this->toolStripSeparator1, this->âûõîäToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"&Ôàéë";
			// 
			// ñîçäàòüToolStripMenuItem
			// 
			this->ñîçäàòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîçäàòüToolStripMenuItem.Image")));
			this->ñîçäàòüToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîçäàòüToolStripMenuItem->Name = L"ñîçäàòüToolStripMenuItem";
			this->ñîçäàòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->ñîçäàòüToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->ñîçäàòüToolStripMenuItem->Text = L"&Ñîçäàòü";
			this->ñîçäàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñîçäàòüToolStripMenuItem_Click);
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"îòêğûòüToolStripMenuItem.Image")));
			this->îòêğûòüToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->îòêğûòüToolStripMenuItem->Text = L"&Îòêğûòü";
			this->îòêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îòêğûòüToolStripMenuItem_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(223, 6);
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Checked = true;
			this->ñîõğàíèòüToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Indeterminate;
			this->ñîõğàíèòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîõğàíèòüToolStripMenuItem.Image")));
			this->ñîõğàíèòüToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"&Ñîõğàíèòü êàê";
			this->ñîõğàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñîõğàíèòüToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(223, 6);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Alt)
				| System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::D));
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âû&õîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// ñåğâèñToolStripMenuItem
			// 
			this->ñåğâèñToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ñåğâèñToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->íàñòğîéêèToolStripMenuItem,
					this->øğèôòToolStripMenuItem
			});
			this->ñåğâèñToolStripMenuItem->Name = L"ñåğâèñToolStripMenuItem";
			this->ñåğâèñToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ñåğâèñToolStripMenuItem->Text = L"&Ñåğâèñ";
			// 
			// íàñòğîéêèToolStripMenuItem
			// 
			this->íàñòğîéêèToolStripMenuItem->Name = L"íàñòğîéêèToolStripMenuItem";
			this->íàñòğîéêèToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::Y));
			this->íàñòğîéêèToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->íàñòğîéêèToolStripMenuItem->Text = L"&Íàñòğîéêè";
			this->íàñòğîéêèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íàñòğîéêèToolStripMenuItem_Click);
			// 
			// øğèôòToolStripMenuItem
			// 
			this->øğèôòToolStripMenuItem->Name = L"øğèôòToolStripMenuItem";
			this->øğèôòToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::I));
			this->øğèôòToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->øğèôòToolStripMenuItem->Text = L"Øğèôò";
			this->øğèôòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::øğèôòToolStripMenuItem_Click);
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->êîïèğîâàòüToolStripMenuItem,
					this->âñòàâèòüToolStripMenuItem, this->toolStripSeparator2, this->âûğåçàòütoolStripMenuItem1
			});
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ïğàâêàToolStripMenuItem->Text = L"&Ïğàâêà";
			// 
			// êîïèğîâàòüToolStripMenuItem
			// 
			this->êîïèğîâàòüToolStripMenuItem->Name = L"êîïèğîâàòüToolStripMenuItem";
			this->êîïèğîâàòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->êîïèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->êîïèğîâàòüToolStripMenuItem->Text = L"&Êîïèğîâàòü";
			this->êîïèğîâàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::êîïèğîâàòüToolStripMenuItem_Click);
			// 
			// âñòàâèòüToolStripMenuItem
			// 
			this->âñòàâèòüToolStripMenuItem->Name = L"âñòàâèòüToolStripMenuItem";
			this->âñòàâèòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->âñòàâèòüToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->âñòàâèòüToolStripMenuItem->Text = L"&Âñòàâèòü";
			this->âñòàâèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âñòàâèòüToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(187, 6);
			// 
			// âûğåçàòütoolStripMenuItem1
			// 
			this->âûğåçàòütoolStripMenuItem1->Name = L"âûğåçàòütoolStripMenuItem1";
			this->âûğåçàòütoolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->âûğåçàòütoolStripMenuItem1->Size = System::Drawing::Size(190, 22);
			this->âûğåçàòütoolStripMenuItem1->Text = L"&Âûğåçàòü";
			this->âûğåçàòütoolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::âûğåçàòütoolStripMenuItem1_Click);
			// 
			// textBox1
			// 
			this->textBox1->AcceptsTab = true;
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->ContextMenuStrip = this->lol;
			this->textBox1->Location = System::Drawing::Point(-1, 27);
			this->textBox1->MaxLength = 2147483640;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(632, 294);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// lol
			// 
			this->lol->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->òóòÍè÷åãîÍåòToolStripMenuItem });
			this->lol->Name = L"lol";
			this->lol->Size = System::Drawing::Size(152, 26);
			// 
			// òóòÍè÷åãîÍåòToolStripMenuItem
			// 
			this->òóòÍè÷åãîÍåòToolStripMenuItem->Enabled = false;
			this->òóòÍè÷åãîÍåòToolStripMenuItem->Name = L"òóòÍè÷åãîÍåòToolStripMenuItem";
			this->òóòÍè÷åãîÍåòToolStripMenuItem->ShowShortcutKeys = false;
			this->òóòÍè÷åãîÍåòToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->òóòÍè÷åãîÍåòToolStripMenuItem->Text = L"Òóò íè÷åãî íåò!";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = resources->GetString(L"openFileDialog1.Filter");
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = resources->GetString(L"saveFileDialog1.Filter");
			// 
			// menuStrip2
			// 
			this->menuStrip2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->menuStrip2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ñèìâîëîâtoolStripMenuItem,
					this->count, this->ñèìâîëîâToolStripMenuItem2, this->count2
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 324);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(632, 24);
			this->menuStrip2->TabIndex = 2;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// ñèìâîëîâtoolStripMenuItem
			// 
			this->ñèìâîëîâtoolStripMenuItem->Name = L"ñèìâîëîâtoolStripMenuItem";
			this->ñèìâîëîâtoolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->ñèìâîëîâtoolStripMenuItem->Text = L"Ñèìâîëîâ:";
			// 
			// count
			// 
			this->count->Name = L"count";
			this->count->Size = System::Drawing::Size(25, 20);
			this->count->Text = L"0";
			// 
			// ñèìâîëîâToolStripMenuItem2
			// 
			this->ñèìâîëîâToolStripMenuItem2->Name = L"ñèìâîëîâToolStripMenuItem2";
			this->ñèìâîëîâToolStripMenuItem2->Size = System::Drawing::Size(67, 20);
			this->ñèìâîëîâToolStripMenuItem2->Text = L"Àáçàöåâ:";
			// 
			// count2
			// 
			this->count2->Name = L"count2";
			this->count2->Size = System::Drawing::Size(25, 20);
			this->count2->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(632, 348);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(648, 387);
			this->Name = L"MyForm";
			this->Text = L"NOTEPAD.NET";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->lol->ResumeLayout(false);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

private: System::Void ñîçäàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (redacted == true)
	{
		System::Windows::Forms::DialogResult result;
		result = MessageBox::Show("Óäàëèòü èçìåíåíèÿ?", "Îêíî çàùèòû îò íåïğîäóìàííûõ äåéñòâèé!",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			textBox1->Clear();
			filepath = String::Empty;
		}
		else if (result == System::Windows::Forms::DialogResult::No) {return;}
	}
	else {
		textBox1->Clear();
		filepath = String::Empty;
	}
	redacted = false;
}
private: System::Void îòêğûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (redacted == true)
	{
		System::Windows::Forms::DialogResult result;
		result = MessageBox::Show("Óäàëèòü èçìåíåíèÿ?", "Îêíî çàùèòû îò íåïğîäóìàííûõ äåéñòâèé!",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			textBox1->Clear();
			filepath = String::Empty;
		}
		else if (result == System::Windows::Forms::DialogResult::No) { return; }
	}
	else
	{
		textBox1->Clear();
		filepath = String::Empty;
	}
	System::Windows::Forms::DialogResult result = this->openFileDialog1->ShowDialog();
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			filepath = openFileDialog1->FileName;
			array<String^>^ lines = System::IO::File::ReadAllLines(filepath);
			textBox1->Lines = lines;
		}
		catch (const System::Exception^ ex)
		{
			MessageBox::Show("êàêèì îáğàçîì?");
		}
	}
	redacted = false;
}
private: System::Void ñîõğàíèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		System::Windows::Forms::DialogResult result = saveFileDialog1->ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK)
		{
			array<String^>^ lines = this->textBox1->Lines;
			System::IO::File::WriteAllLines(saveFileDialog1->FileName, lines);
		}
		redacted = false;
	}
	catch (const System::Exception^ ex)
	{
		MessageBox::Show("îøèáêà ñîõğàíåíèÿ!");
	}

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	redacted = true;
	count->Text = System::Convert::ToString(textBox1->TextLength);
	count2->Text = System::Convert::ToString(textBox1->Lines->Length);
}
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Application::Exit();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		array<String^>^ lines = System::IO::File::ReadAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"));
		if (lines[35] == "black")
		{
			this->BackColor = System::Drawing::Color::Black;
			this->ForeColor = System::Drawing::Color::White;
			textBox1->BackColor = System::Drawing::Color::Black;
			textBox1->ForeColor = System::Drawing::Color::White;
		}
		if (lines[34] == "en")
		{
			ôàéëToolStripMenuItem->Text = lines[0];
			ñåğâèñToolStripMenuItem->Text = lines[1];
			ïğàâêàToolStripMenuItem->Text = lines[2];
			ñîçäàòüToolStripMenuItem->Text = lines[3];
			îòêğûòüToolStripMenuItem->Text = lines[4];
			ñîõğàíèòüToolStripMenuItem->Text = lines[5];
			âûõîäToolStripMenuItem->Text = lines[6];
			íàñòğîéêèToolStripMenuItem->Text = lines[7];
			øğèôòToolStripMenuItem->Text = lines[8];
			êîïèğîâàòüToolStripMenuItem->Text = lines[9];
			âñòàâèòüToolStripMenuItem->Text = lines[10];
			âûğåçàòütoolStripMenuItem1->Text = lines[11];
			ñèìâîëîâtoolStripMenuItem->Text = lines[12];
			ñèìâîëîâToolStripMenuItem2->Text = lines[13];
		}
		else if (lines[34] == "ru")
		{
			ôàéëToolStripMenuItem->Text = lines[17];
			ñåğâèñToolStripMenuItem->Text = lines[18];
			ïğàâêàToolStripMenuItem->Text = lines[19];
			ñîçäàòüToolStripMenuItem->Text = lines[20];
			îòêğûòüToolStripMenuItem->Text = lines[21];
			ñîõğàíèòüToolStripMenuItem->Text = lines[22];
			âûõîäToolStripMenuItem->Text = lines[23];
			íàñòğîéêèToolStripMenuItem->Text = lines[24];
			øğèôòToolStripMenuItem->Text = lines[25];
			êîïèğîâàòüToolStripMenuItem->Text = lines[26];
			âñòàâèòüToolStripMenuItem->Text = lines[27];
			âûğåçàòütoolStripMenuItem1->Text = lines[28];
			ñèìâîëîâtoolStripMenuItem->Text = lines[29];
			ñèìâîëîâToolStripMenuItem2->Text = lines[30];
		}
	}
	catch (System::Exception^ ex)
	{
		System::Windows::Forms::Application::Exit();
	}
}
private: System::Void íàñòğîéêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	notepaddotnet::MyForm1^ myform1 = gcnew notepaddotnet::MyForm1();
	myform1->Show();

}
private: System::Void øğèôòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = fontDialog1->ShowDialog();
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		textBox1->Font = fontDialog1->Font;
	}
}
private: System::Void êîïèğîâàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Copy();
}
private: System::Void âñòàâèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Paste();
}
private: System::Void âûğåçàòütoolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Cut();
}
};
}
