#include "LB5.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Lab05DavidRodríguez1164619::LB5 mainForm;
	Application::Run(% mainForm);
	return 0;

}