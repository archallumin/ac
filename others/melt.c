#include <windows.h>

int main()
{ // 상황에 따라 DWORD를 써도 됨.
    HDC hdc;

    int w = GetSystemMetrics(0), h = GetSystemMetrics(1), x;
    while (1)
    {
        hdc = GetDC(0);
        x = rand() % w;
        BitBlt(hdc, x, 10, 16, h, hdc, x, 0, SRCCOPY);
        Sleep(2);
        ReleaseDC(0, hdc);
        BitBlt(hdc, x, 1, 10, h, hdc, x, 0, SRCCOPY);
    }
}