#include <iostream>
#include <algorithm>
using namespace std;

long long int arr[5000000] = { 0, };

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b;
    cin>>a>>b;
    for(int i=0;i<a;i++) {
        cin>>arr[i];
    }
    sort(arr,arr+a);
    cout<<arr[b-1]<<"\n";
    return 0;
}