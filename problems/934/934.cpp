//https://www.e-olymp.com/ru/problems/934
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    cout.setf(std::ios::fixed);
    cout.precision(2);

    ld a, b, c;
    cin >> a >> b >> c;

    ld p = (a + b + c) / 2;
    ld ans = 2 * sqrt(p * (p - a) * (p - b) * (p - c));
    cout << ans / a << " " << ans / b << " " << ans / c << endl;
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
