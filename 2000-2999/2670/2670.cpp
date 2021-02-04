//https://www.e-olymp.com/ru/problems/2670
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n, m, x, y;
    cin >> n >> m >> x >> y;

    if (x - 1 > 0)
        cout << x - 1 << " " << y << endl;
    if (x + 1 <= m)
        cout << x + 1 << " " << y << endl;

    if (y - 1 > 0)
        cout << x << " " << y - 1 << endl;
    if (y + 1 <= m)
        cout << x << " " << y + 1 << endl;



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
