// https://www.e-olymp.com/ru/problems/2864
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ld a, b, h;
    cin >> a >> b >> h;

    while(a <= b)
    {
        ld res = 3 * sin(a);
        cout << a << " " << res << "\n";
        a += h;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(3);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}