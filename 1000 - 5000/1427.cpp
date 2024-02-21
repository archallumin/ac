#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compareNumber(int a, int b) {
	return a > b; //내림차순 정렬
}

int main(void) {
	string str;
	int n;
	cin >> n;
	str = to_string(n);
	sort(str.begin(), str.end(), compareNumber);
	cout << str << "\n";
}