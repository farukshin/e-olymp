// https://www.e-olymp.com/ru/problems/9722
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    int a, b;
    while(cin >> a >> b)
    {
        int ans;
        try
        {
            if(b == 0)
                throw - 1;
            ans = a / b;
            cout << ans << "\n";
        }
        catch (int a)
        {
            cout << "Division by zero\n";
        }
    }
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}