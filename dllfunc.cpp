#include <iostream>
using namespace std;

extern "C" __declspec(dllexport) void __stdcall func()
{
	cout << " dll called " << endl;
}
