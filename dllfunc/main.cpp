#include <windows.h>
#include <iostream>
using namespace std;
typedef void (*FUNC)();

int main(void)
{
	HMODULE hModule = LoadLibrary("foo.dll");
	FUNC func = (FUNC)GetProcAddress(hModule, "func");
	if ( func ) 
	{
		func();
	}
	else
	{
		cout << " no foo.dll " << endl;
	}
	FreeLibrary(hModule);

}

