//https://www.e-olymp.com/ru/problems/9422
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll a, ans;
    //cin >> a >> b >> c;
    cin >> a;
    ans += 1000 * (a % 10) + a / 1000 + 10 * ((a / 10) % 10) + 100 * ((a / 100) % 10);

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