// https://www.e-olymp.com/ru/problems/3171
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, r, x, y;
    cin >> a >> b >> r >> x >> y;
    ld rr = sqrt((x - a) * (x - a) + (y - b) * (y - b));
    cout << (1.0 * rr > ld(r) ? "NO" : "YES");

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}