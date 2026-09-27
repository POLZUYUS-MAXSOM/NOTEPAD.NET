#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) { // Должно быть написано int main, а не void Main!
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    notepaddotnet::MyForm form;
    Application::Run(% form);
    return 0;
}
