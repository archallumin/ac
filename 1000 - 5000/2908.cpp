#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main(void)
{
	string a, b;
	string arr, brr;
	int ar, br;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	stringstream ssInt_1(a);
	ssInt_1 >> ar;
	stringstream ssInt_2(b);
	ssInt_2 >> br;
	if (ar > br)
		cout << ar;
	else if (ar < br)
		cout << br;
	return 0;
}