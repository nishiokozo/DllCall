//2019/04/07
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