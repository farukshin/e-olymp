//https://www.e-olymp.com/ru/problems/8532
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);

    ll a, b;
    cin >> a >> b;
    for (ll i = a; i <= b; i++)
    {
        ll ans = i * i;
        cout << ans << " ";
    }
    cout << endl;
    for (ll i = b; i >= a; i--)
    {
        ll ans = i * i * i;
        cout << ans << " ";
    }
    cout << endl;

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
