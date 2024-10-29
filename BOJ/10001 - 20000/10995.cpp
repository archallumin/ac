#include <iostream>
using namespace std;

int main(void) {
    int a;
    cin >> a;
    for (int i=0; i<a; i++) {
        if (i % 2) cout << " ";
        for (int j=0; j<a; j++) {
            if (j == a-1) cout << "*";
            else cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}