#include <iostream>
using namespace std;

int main(void)
{
    string a, b, c;
    long long int count = 0;
    // 무식하겠지만...
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == "black")
        count += 0;
    else if (a == "brown")
        count += 10;
    else if (a == "red")
        count += 20;
    else if (a == "orange")
        count += 30;
    else if (a == "yellow")
        count += 40;
    else if (a == "green")
        count += 50;
    else if (a == "blue")
        count += 60;
    else if (a == "violet")
        count += 70;
    else if (a == "grey")
        count += 80;
    else if (a == "white")
        count += 90;
    // 이제 b도 노가다...
    if (b == "black")
        count += 0;
    else if (b == "brown")
        count += 1;
    else if (b == "red")
        count += 2;
    else if (b == "orange")
        count += 3;
    else if (b == "yellow")
        count += 4;
    else if (b == "green")
        count += 5;
    else if (b == "blue")
        count += 6;
    else if (b == "violet")
        count += 7;
    else if (b == "grey")
        count += 8;
    else if (b == "white")
        count += 9;
    // c까지...
    if (c == "black")
        count *= 1;
    else if (c == "brown")
        count *= 10;
    else if (c == "red")
        count *= 100;
    else if (c == "orange")
        count *= 1000;
    else if (c == "yellow")
        count *= 10000;
    else if (c == "green")
        count *= 100000;
    else if (c == "blue")
        count *= 1000000;
    else if (c == "violet")
        count *= 10000000;
    else if (c == "grey")
        count *= 100000000;
    else if (c == "white")
        count *= 1000000000;
    cout << count << "\n";
    return 0;
}