#include "MyForm.h"
#include <Windows.h>
#include <iostream>
using namespace calculator;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	setlocale(LC_ALL, "Russian");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}