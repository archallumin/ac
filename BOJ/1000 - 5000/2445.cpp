#include <iostream>
using namespace std;

int main(void) {
    int a;
    cin >> a;
    for (int i=1; i<=a; i++) {
        for (int j=0; j<i; j++) {
            cout << "*";
        }
        for (int j=0; j<a-i; j++) {
            cout << " ";
        }
        for (int j=0; j<a-i; j++) {
            cout << " ";
        }
        for (int j=0; j<i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i=a-1; i>=1; i--) {
        for (int j=0; j<i; j++) {
            cout << "*";
        }
        for (int j=0; j<a-i; j++) {
            cout << " ";
        }
        for (int j=0; j<a-i; j++) {
            cout << " ";
        }
        for (int j=0; j<i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}