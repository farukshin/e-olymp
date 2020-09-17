//https://www.e-olymp.com/ru/problems/4
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ld x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    ld d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    // if (x1 == x2 && y1 == y2 && r1 == r2 && r1 == 0)
    //     cout << 1 << endl;
    // else
    if (x1 == x2 && y1 == y2 && r1 == r2)
        cout << -1 << endl;
    else if (d == r1 + r2 || d + r1 == r2 || d + r2 == r1)
        cout << 1 << endl;
    else if (d > r1 + r2 || d + r1 < r2 || d + r2 < r1)
        cout << 0 << endl;
    else
        cout << 2 << endl;
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
