#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int arr[10001];
    int t;
    long long int c = 0;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<t; i++) {
        for (int j=0; j<t; j++) {
            c += abs(arr[i] - arr[j]);
        }
    }
    cout << c << "\n";
    return 0;
}