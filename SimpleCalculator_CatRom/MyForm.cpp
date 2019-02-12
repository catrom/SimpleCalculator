#include "MyForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SimpleCalculator_CatRom::MyForm form;
	Application::Run(%form);



	return 0;
}