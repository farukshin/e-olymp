// https://www.e-olymp.com/ru/problems/6274
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll m, n;
    cin >> m >> n;
    m -= n;

    ll l = 0, r = 1e6 + 5;
    while(r - l > 1)
    {
        ll mid = (r + l) / 2;
        if((mid + 1)*mid / 2 <= m)
            l = mid;
        else
            r = mid;
    }
    cout << l;

}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}