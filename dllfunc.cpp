#include <iostream>
using namespace std;

extern "C" __declspec(dllexport) void  func()
{
	cout << " dll called " << endl;
}

