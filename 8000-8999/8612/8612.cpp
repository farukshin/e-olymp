//https://www.e-olymp.com/ru/problems/8612
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);
    int n;
    cin >> n;
    ll ans = 0;
    if (n >= 0)
        ans = n * n * n + 2 * n * n + 4 * n - 6;

    else
        ans = n * n * n - 7 * n;
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
