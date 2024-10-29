#include <iostream>
using namespace std;

int main(void) {
    int a;
    cin >> a;
    for (int i=0; i<a; i++) {
        for (int q=1; q<a-i; q++) {
            cout << " ";
        }
        for (int j=0; j<=i; j++) {
            if (i == a - 1) {
                if (j == i)
                    cout << "*";
                else
                    cout << "**";
            }
            else {
                if (j == 0) cout << "* ";
                else if (j == i) cout << "*";
                else cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}