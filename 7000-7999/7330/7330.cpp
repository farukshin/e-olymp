//https://www.e-olymp.com/ru/problems/7330
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if(n <= 1)
    {
        cout << 0;
    }
    else
    {
        if(n % 3 == 2)
        {
            cout << n / 3 * 2 + 1;
        }
        else cout << n / 3 * 2;
    }
}