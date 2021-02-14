//https://www.e-olymp.com/ru/problems/8833
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    cout.setf(std::ios::fixed);
    cout.precision(3);

    ld x, y;
    cin >> x >> y;
    ld ans = (2 * x + y) / (x * x - x * y + 4 * y * y) + (2 * x * x - x * y + y * y) / (x + 4 * y);

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