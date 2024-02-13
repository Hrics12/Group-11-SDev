#include "FinalProject.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	COSC3011FinalProject::FinalProject form;
	Application::Run(% form);
}
