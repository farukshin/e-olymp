//https://www.e-olymp.com/ru/problems/925
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    cout.setf(std::ios::fixed);
    cout.precision(4);

    ld x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    ld a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)),
       b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1)),
       c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));

    ld p = a + b + c;

    ld s = sqrt(p / 2 * (p / 2 - a) * (p / 2 - b) * (p / 2 - c));
    cout << p << ' ' << s << endl;


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
