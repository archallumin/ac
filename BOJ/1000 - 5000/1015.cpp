#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    pair<int, int> arr[50];
    int size;
    int sort_arr[50];
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        sort_arr[arr[i].second] = i;
    }
    for (int i = 0; i < size; i++)
    {
        cout << sort_arr[i] << " ";
    }
    cout << "\n";
    return 0;
}