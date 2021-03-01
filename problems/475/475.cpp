//https://www.e-olymp.com/ru/problems/475
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll factmod (ll n, ll p)
{
    ll res = 1;
    while (n > 1)
    {
        res = (res * ((n / p) % 2 ? p - 1 : 1)) % p;
        for (ll i = 2; i <= n % p; ++i)
            res = (res * i) % p;
        n /= p;
    }
    return res % p;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    cin >> s;
    int k = ceil(sqrt(s.size()));
    s += string(k * k - s.size(), s[s.size() - 1]);
    string ans = "";
    for(int i = 0; i < k; i++)
        for(int j = 0; j < k; j++)
            ans += s[i + k * j];
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
    //int t;cin >> t;while (t--)solve();

    return 0;
}