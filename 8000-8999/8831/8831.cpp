//https://www.e-olymp.com/ru/problems/8831
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
    ld ans = 2 * x * x - 4 * x * y + 3 * y * y + (x + y) / 7;

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