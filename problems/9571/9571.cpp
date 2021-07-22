// https://www.e-olymp.com/ru/problems/9571
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    ll ans = 0;
    int n, m, cur;

    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            cin >> cur;
            ans += cur;
        }
    cout << ans;
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}