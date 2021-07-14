// https://www.e-olymp.com/ru/problems/4481
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, sqrt_len;
vector<ll> v, f;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

void sqrt_init()
{
    sqrt_len = (int) sqrt (n) + 1;
    f.resize(sqrt_len, 0);
    for (int i = 0; i < n; ++i)
        if(f[i / sqrt_len] == 0)
            f[i / sqrt_len] = v[i];
        else
            f[i / sqrt_len] = gcd(f[i / sqrt_len], v[i]);
}

void sqrt_upd(int ind, ll k)
{
    v[ind] = k;
    int c = ind / sqrt_len;
    int newAns = k;
    for (int i = c * sqrt_len, end = (c + 1) * sqrt_len - 1; i <= end; ++i)
        newAns = gcd(newAns, v[i]);
    f[c] = newAns;
}

void sqrt_get(int l, int r)
{
    ll res = v[l];
    int c_l = l / sqrt_len,   c_r = r / sqrt_len;
    if (c_l == c_r)
        for (int i = l; i <= r; ++i)
            res = gcd(res, v[i]);
    else
    {
        for (int i = l, end = (c_l + 1) * sqrt_len - 1; i <= end; ++i)
            res = gcd(res, v[i]);
        for (int i = c_l + 1; i <= c_r - 1; ++i)
            res = gcd(res, f[i]);
        for (int i = c_r * sqrt_len; i <= r; ++i)
            res = gcd(res, v[i]);
    }
    cout << res << "\n";
}

void solve()
{
    cin >> n;
    v.resize(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];
    sqrt_init();

    int m;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        int q, a, b;
        cin >> q >> a >> b;
        if(q == 1)
            sqrt_get(--a, --b);
        else if(q == 2)
            sqrt_upd(--a, b);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}