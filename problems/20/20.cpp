//https://www.e-olymp.com/ru/problems/20
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(4);

    ll n;
    cin >> n;

    ll ans = 0;
    while (n > 0)
    {
        ll s = n;
        int sum = 0;
        while (s) {
            sum += s % 10;
            s /= 10;
        }
        n -= sum;
        ans++;
    }
    cout << ans << endl;
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