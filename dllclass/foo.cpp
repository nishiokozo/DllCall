#include <windows.h>
#include <iostream>
#include <string>
#include <map>
#include <iostream>
using namespace std;


#include "foo.h"

Foo::Foo()
{
	cout << "Foo()" << endl;
}
void Foo::a()
{
	cout << "Foo::a()" << endl;
}


//----------------------------------------------------------------------
extern "C" __declspec(dllexport)  Foo* GetInstance()
//----------------------------------------------------------------------
{
	cout << "create instance Foo" << endl;

	return new Foo();
}
