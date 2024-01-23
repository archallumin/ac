#define _HAS_STD_BYTE 0
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main(void) {
	SYSTEMTIME time;
	GetSystemTime(&time);
	string Y = to_string(time.wYear);
	string M = to_string(time.wMonth);
	string D = to_string(time.wDay);
	cout << Y << "-" << M << "-" << D << "\n";
	return 0;
}

//질문 예정인 문제....