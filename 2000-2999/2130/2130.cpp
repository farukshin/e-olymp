// https://www.e-olymp.com/ru/problems/2130
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    ld x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    ld sp = x1 * x2 + y1 * y2;
    ld m1 = sqrt(x1 * x1 + y1 * y1);
    ld m2 = sqrt(x2 * x2 + y2 * y2);

    ld ans = sp / (m1 * m2);

    cout << acos(ans);

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(5);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}