//https://www.e-olymp.com/ru/problems/926
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    cout.setf(std::ios::fixed);
    cout.precision(4);

    ld a, b, c, d, f;
    cin >> a >> b >> c >> d >> f;
    ld p1 = (a + b + f) / 2, p2 = (c + d + f) / 2;

    ld ans = sqrt(p1 * (p1 - a) * (p1 - b) * (p1 - f)) + sqrt(p2 * (p2 - c) * (p2 - d) * (p2 - f));
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
