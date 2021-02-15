//https://www.e-olymp.com/ru/problems/936
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    cout.setf(std::ios::fixed);
    cout.precision(3);

    ld a1, b1, y1, a2, b2, y2;
    cin >> a1 >> b1 >> y1 >> a2 >> b2 >> y2;

    ld c = a1 * b2 - a2 * b1;
    ld c1 = y1 * b2 - y2 * b1;
    ld c2 = a1 * y2 - a2 * y1;

    cout << c1 / c << endl
         << c2 / c << endl;
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