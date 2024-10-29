#include <iostream>
using namespace std;

void daq(int a, int b, int c) {
    if ((a / c) % 3 == 1 && (b / c) % 3 == 1) cout << " ";
    else {
        if (c / 3 == 0) cout << "*";
        else daq(a, b, c / 3);
        // 이런 생각 하는 걸 더 길러 보자.
        // https://cryptosalamander.tistory.com/38 참고
    }
}

int main(void) {
    int a;
    cin >> a;
    for (int i=0; i<a; i++) {
        for (int j=0; j<a; j++) {
            daq(i, j, a);
        }
        cout << "\n";
    }
}