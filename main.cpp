// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

#include "Dll1.h"

int main()
{
	cout << "DLLSample1 のテスト" << endl;

	int cx = GetFrameBorderWidth();
	cout << "BorderWidth = " << cx << endl;

	int cy = GetFrameBorderHeight();
	cout << "BorderHeight = " << cy << endl;

	int tb = GetTitleBarHeight();
	cout << "TitleBarHeight = " << tb << endl;

	getchar();
}