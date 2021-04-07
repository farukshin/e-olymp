// https://www.e-olymp.com/ru/problems/2535
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{

    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = (a + b) * (b - a + 1) / 2;
        cout << "Scenario #" << i + 1 << ":\n" << ans << "\n\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}