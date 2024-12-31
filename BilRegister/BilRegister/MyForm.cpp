
#include "MyForm.h"
#include "string"
#include "vector"
#include "iostream"


using namespace System;
using namespace System::Windows::Forms;
using namespace std;


[STAThreadAttribute]

void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BilRegister::MyForm form;
	Application::Run(% form);
}


private: Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ model = tbModell->Text;
	String^ brand = tbBrand->Text;
	String^ year = tbYear->Text;
	String^ car = tbCar->Text;

	String^ registration = String::Concat(model, ", ", brand, ", ", year, ", ", car);

	lbCarContainer->Text = registration;
}
