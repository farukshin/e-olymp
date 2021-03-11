//https://www.e-olymp.com/ru/problems/8224
#include <bits/stdc++.h>
using namespace std;
string s, ss;
int a, b;
int main()
{
    getline(cin, s);
    cin >> a >> b;
    cout << b - a + 2 << endl;
    int c = a;
    for (int i = a - 1; i < b - 1; i++)
    {
        for (int j = c; j < b; j++)
        {
            cout << s[j];
        }
        cout << endl;
        c++;
    }

}