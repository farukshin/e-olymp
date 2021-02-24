//https://www.e-olymp.com/ru/problems/8523
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    cout.setf(ios::fixed);
    cout.precision(4);

    ld n;
    cin >> n;
    const double PI = acos(-1.0);

    ld l, s;
    l = 2 * PI * n;
    s = PI * n * n;
    cout << l << " " << s << endl;


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