// https://www.e-olymp.com/ru/problems/478
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{

    ll a, b, c;
    cin >> a >> b >> c;

    ll ans1 = a * b * c;
    ll ans2 = ans1 * 6 - (b * c * 2 + a * c * 2 + a * b * 2);

    cout << ans1 << " " << ans2;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(6);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}