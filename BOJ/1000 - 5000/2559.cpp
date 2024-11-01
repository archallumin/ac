#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int a, b, max = -2147483640;
    cin >> a >> b;
    vector<int> arr(a + 1);
    vector<int> sum(a + 1);
    for (int i=1; i<=a; i++) {
        cin >> arr[i];
        sum[i] = sum[i-1] + arr[i];
    }
    for (int i=1; i+b-1<=a; i++) {
        if (max < sum[i + b - 1] - sum[i - 1])
            max = sum[i + b - 1] - sum[i - 1];
    }
    cout << max << "\n";
    return 0;
}