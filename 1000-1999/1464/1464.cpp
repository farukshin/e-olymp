//https://www.e-olymp.com/ru/problems/1464
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(2);

    ll n;
    while(cin >> n)
    {
        if(n == 0) break;
        bool otr = n < 0;
        ll ans;
        if(!otr)
            ans = (n + 1) * n / 2;
        else
        {
            n *= -1;
            ans = -1 * (n + 1) * n / 2 + 1;
        }
        cout << ans << endl;
    }

}

#include <iostream>

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t;cin >> t;while (t--)solve();

    return 0;
}