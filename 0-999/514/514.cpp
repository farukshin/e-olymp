//https://www.e-olymp.com/ru/problems/514
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

    int h1, m1, s1, h2, m2, s2;
    scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);

    int h = h2 - h1;
    int m = m2 - m1;
    int s = s2 - s1;
    if(s < 0)
        s += 60, m--;
    if(m < 0)
        m += 60, h--;
    if(h < 0)
        h += 24;
    printf("%02d:%02d:%02d", h, m, s);
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