#pragma once
#if 1
extern	int GetFrameBorderWidth();
extern	int GetFrameBorderHeight();
extern	int GetTitleBarHeight();
#else
extern "C" int GetFrameBorderWidth();
extern "C" int GetFrameBorderHeight();
extern "C" int GetTitleBarHeight();
#endif
