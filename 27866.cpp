#include <iostream>
using namespace std;

int main(void) {
	string a;
	int b;
	cin >> a;
	cin >> b;
	cout << a[static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(b) - 1] << "\n";
	return 0;
}