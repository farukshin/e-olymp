//https://www.e-olymp.com/ru/problems/5222
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, b, f, c = 0, i;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> b;
        switch(b % 5)
        {
        case 0:
        case 1:
            f = 0;
            break;
        case 2:
        case 3:
            f = 1;
            break ;
        case 4:
            f = 2;
            break;
        }
        c = c ^ f;
    }
    if(c == 0)
    {
        cout << "Watson";
    }
    else
    {
        cout << "Rybka";
    }
    return 0;
}