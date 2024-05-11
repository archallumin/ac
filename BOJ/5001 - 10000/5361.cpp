#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    double blast = 350.34;
    double see = 230.9;
    double listen = 190.55;
    double arm = 125.3;
    double leg = 180.9;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        cout.precision(2);
        cout << fixed << "$" << (a * blast) + (b * see) + (c * listen) + (d * arm) + (e * leg) << "\n";
    }
    return 0;
}