//https://www.e-olymp.com/ru/problems/137
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);
    int n;
    cin >> n;
    ll cur, preCur;
    cin >> cur;
    ll ans = cur;
    if (n == 1)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        preCur = cur;
        cin >> cur;
        ans = gcd(ans, cur);
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