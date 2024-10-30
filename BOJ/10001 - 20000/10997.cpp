#include <iostream>
#include <cstdio>
using namespace std;

char arr[500][500];
int a, ln;

void daq(int n, int m, int k, int cnt) {
    if (k == 1) {
        arr[n][m] = '*';
        arr[n + 1][m] = '*';
        arr[n + 2][m] = '*';
        arr[n][m + 1] = '*';
        return;
    }
    for (int i=0; i<k; i++) {
        arr[n][m + i] = '*';
        arr[n + (k + 1)][m + i] = '*';
    }
    for (int i=0; i<k + 1; i++) {
        arr[n + i][m] = '*';
    }
    for (int i=0; i<k; i++) {
        arr[n + i][m] = '*';
        arr[n + i + 2][m + (k-1)] = '*';
    }
    arr[n][m + 1 + (cnt * 4)] = '*';
    daq(n + 2, m + 2, k - 4, cnt - 1);
}

int main(void) {
    int ct = 0;
    for (int i=0; i<500; i++) {
        for (int j=0; j<500; j++) {
            arr[i][j] = ' ';
        }
    }
    cin >> a;
    if (a == 1) {cout << "*"; return 0;}
    ln = (4*a) - 3;
    daq(0, 0, ln, a - 1);
    for (int i=0; i<ln + 2; i++) {
        if (ct == 1) cout << "*";
        else {
            for (int j=0; j<ln; j++) {
                cout << arr[i][j];
            }
        }
        ct++;
        cout<<"\n";
    }
    return 0;
}