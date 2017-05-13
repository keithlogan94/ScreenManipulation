#include "Func.h"

void screenFall(int startingX) {
	int width = GetSystemMetrics(SM_CXSCREEN);
	int height = GetSystemMetrics(SM_CYSCREEN);

	int x = 0;
	while (true) {
		if (BitBlt(GetDC(GetDesktopWindow()), startingX, x, 100, height, GetDC(GetDesktopWindow()), startingX, 0, SRCCOPY) == NULL) {
			MessageBox(GetDesktopWindow(), "BitBlt Failed.", "Fail", MB_OK);
		}
		if (GetKeyState(VK_ESCAPE) & 0x8000) {
			break;
		}
		if (x < 40)
			x++;
		else break;
	}
}