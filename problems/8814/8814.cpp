//https://www.e-olymp.com/ru/problems/8814
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll a, ans1, ans2;
    //cin >> a >> b >> c;
    cin >> a ;
    ans1 = 4 * a;
    ans2 = a * a;

    cout << ans1 << " " << ans2 << endl;
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
