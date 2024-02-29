
#include "StartForm.h"
#include "ChatForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ChatBot::StartForm start;
	//ChatBot::ChatForm chat;
	Application::Run(% start);
	//start.ShowDialog();
	
}