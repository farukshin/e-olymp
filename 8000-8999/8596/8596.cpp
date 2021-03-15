//https://www.e-olymp.com/ru/problems/8596
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(9);

    ll n, a, b;
    cin >> n >> a >> b;

    ll ans = 0;
    int cur, pre;
    cin >> pre;
    for(int i = 1; i < n; i++)
    {
        cin >> cur;
        ll k = a * (cur - pre);
        ans += min(b, k);
        pre = cur;
    }


    cout << ans;

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}