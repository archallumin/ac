#include <iostream>
using namespace std;

char arr[500][500];
int a, ln;

void daq(int n, int m, int k) {
    if (k == 1) { arr[n][m] = '*'; return; }
    for (int i=0; i<k; i++) {
        arr[n + i][m] = '*';
        arr[n][m + i] = '*';
        arr[n + i][m + (k - 1)] = '*';
        arr[n + (k - 1)][m + i] = '*';
    }
    daq(n + 2, m + 2, k - 4);
}

int main(void) {
    for (int i=0; i<500; i++) {
        for (int j=0; j<500; j++) {
            arr[i][j] = ' ';
        }
    }
    cin >> a;
    ln = (4*a) - 3;
    daq(0, 0, ln);
    for (int i=0;i<ln;i++) {
        for (int j=0;j<ln;j++) {
            cout << arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}