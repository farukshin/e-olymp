//https://www.e-olymp.com/ru/problems/6777
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, n, b;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        b = 1;
        for(int j = 0; j < a; j++)
        {
            b *= 2;
        }
        cout << b - 1 << endl;
    }
    return 0;
}