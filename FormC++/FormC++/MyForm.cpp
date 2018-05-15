#include "MyForm.h" //the header name for your form

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Form_CPlusPlus::MyForm form;
	Application::Run(%form);
}