//https://www.e-olymp.com/ru/problems/6277
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ld n;
    cin >> n;
    ll ans = 0;
    while (n >= 1.2)
    {
        int cur;
        cur = floor(n / 1.2);
        ans += cur;
        n += cur * 0.2 - cur * 1.2;
    }
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
    //int t; cin >> t; while (t--) solve();

    return 0;
}
