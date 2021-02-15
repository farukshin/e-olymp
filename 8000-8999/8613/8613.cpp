//https://www.e-olymp.com/ru/problems/8613
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);
    ll n;
    cin >> n;
    ll ans = 0;
    if (n >= 13)
        ans = 3 * n * n * n + 4 * n * n + 5 * n + 6;
    else
        ans = 3 * n * n * n - 2 * n * n - 3 * n - 4;
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