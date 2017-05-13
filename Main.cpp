#include <Windows.h>
#include "Func.h"

int main(int argc, char **argv)
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	int screenWidth = GetSystemMetrics(SM_CXSCREEN);
	int fallWidth = screenWidth / 10;
	short times = screenWidth / 100;
	for (short int i = 0; 100 * i < screenWidth; i++) {
		screenFall(100 * i);
	}
	UpdateWindow(GetDesktopWindow());
	return 0;
}