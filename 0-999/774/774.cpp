//https://www.e-olymp.com/ru/problems/774
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(3);

    ll a, b, r;
    cin >> r >> a >> b;

    cout << ((2 * r) >= (sqrt(pow(a, 2) + pow(b, 2))) ? "YES" : "NO") << endl;

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