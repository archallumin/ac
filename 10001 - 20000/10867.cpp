#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int a;
    cin >> a;
    vector<int> arr(a);
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    for (int j = 0; j < arr.size(); j++)
    {
        cout << arr[j] << " ";
    }
}