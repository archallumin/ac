#include <iostream>
#include <array>
using namespace std;

int main(void)
{
    array<int, 8> arr;
    array<int, 8> asc = {1, 2, 3, 4, 5, 6, 7, 8};
    array<int, 8> desc = {8, 7, 6, 5, 4, 3, 2, 1};
    for (int &a : arr)
    {
        cin >> a;
    }
    if (arr == asc)
    {
        cout << "ascending\n";
    }
    else if (arr == desc)
    {
        cout << "descending\n";
    }
    else
    {
        cout << "mixed\n";
    }
    return 0;
}