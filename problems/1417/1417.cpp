// https://www.e-olymp.com/ru/problems/1417
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    ll ans = n - 1 + m - 1;
    ans += min(a - 1, b - 1) + min(a - 1, m - b) + min(n - a, b - 1) + min(n - a, m - b);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}