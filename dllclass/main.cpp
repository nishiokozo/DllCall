#include <windows.h>
#include <iostream>
#include <string>
#include <map>
#include <iostream>
using namespace std;

#include "foo.h"

int main()
{
	HMODULE hdl = ::LoadLibrary( "foo.dll" );
	if (hdl == 0 ) 
	{
		cout << "error no dll : " <<  endl;
		exit(1);
	}


	typedef Foo* (*DEF)(void);
	DEF  GetInstance = (DEF)::GetProcAddress(hdl, "GetInstance");
	if ( GetInstance == nullptr) 
	{
		cout << "error no instance : " <<  endl;
		exit(1);
	}
	Foo * foo =  GetInstance();
	
	foo->a();

	foo->Delete();
}