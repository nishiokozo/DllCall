// Dll1.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"




int GetFrameBorderWidth()
{
	return GetSystemMetrics(SM_CXBORDER);
}

int GetFrameBorderHeight()
{
	return GetSystemMetrics(SM_CYBORDER);
}


int GetTitleBarHeight()
{
	return GetSystemMetrics(SM_CYCAPTION);
}

