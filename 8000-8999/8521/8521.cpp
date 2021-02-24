//https://www.e-olymp.com/ru/problems/8521
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);
    ll x;
    cin >> x;

    ll ans = 0;
    if (x >= 10)
        ans = x * x * x + 5 * x;
    else
        ans = x * x - 2 * x + 4;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}