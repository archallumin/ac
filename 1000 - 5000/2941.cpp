#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    string a;
    vector<string> b = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int cro;
    cin >> a;
    for (int i = 0; i < b.size(); i++)
    {
        while (1)
        {
            cro = a.find(b[i]);
            if (cro == string::npos)
                break;
            a.replace(cro, b[i].length(), "0");
        }
    }
    cout << a.length() << "\n";
    return 0;
}