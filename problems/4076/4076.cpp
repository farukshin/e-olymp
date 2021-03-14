//https://www.e-olymp.com/ru/problems/4076
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int trivial_limit = 50;
int p[1000];

ll gcd (ll a, ll b)
{
    return a ? gcd (b % a, a) : b;
}

ll powmod (ll a, ll b, ll m)
{
    ll res = 1;
    while (b)
        if (b & 1)
            res = (res * 1ll * a) % m,  --b;
        else
            a = (a * 1ll * a) % m,  b >>= 1;
    return res;
}

bool miller_rabin (ll n)
{
    ll b = 2;
    for (ll g; (g = gcd (n, b)) != 1; ++b)
        if (n > g)
            return false;
    ll p = 0, q = n - 1;
    while ((q & 1) == 0)
        ++p,  q >>= 1;
    ll rem = powmod (b, q, n);
    if (rem == 1 || rem == n - 1)
        return true;
    for (ll i = 1; i < p; ++i)
    {
        rem = (rem * 1ll * rem) % n;
        if (rem == n - 1)  return true;
    }
    return false;
}

ll jacobi (ll a, ll b)
{
    if (a == 0)  return 0;
    if (a == 1)  return 1;
    if (a < 0)
        if ((b & 2) == 0)
            return jacobi (-a, b);
        else
            return - jacobi (-a, b);
    ll a1 = a,  e = 0;
    while ((a1 & 1) == 0)
        a1 >>= 1,  ++e;
    ll s;
    if ((e & 1) == 0 || (b & 7) == 1 || (b & 7) == 7)
        s = 1;
    else
        s = -1;
    if ((b & 3) == 3 && (a1 & 3) == 3)
        s = -s;
    if (a1 == 1)
        return s;
    return s * jacobi (b % a1, a1);
}

bool bpsw (ll n)
{
    if ((ll)sqrt(n) * (ll)sqrt(n) == n)  return false; //777 +0.0
    ll dd = 5;
    for (;;)
    {
        ll g = gcd (n, abs(dd));
        if (1 < g && g < n)  return false;
        if (jacobi (dd, n) == -1)  break;
        dd = dd < 0 ? -dd + 2 : -dd - 2;
    }
    ll p = 1,  q = (p * p - dd) / 4;
    ll d = n + 1,  s = 0;
    while ((d & 1) == 0)
        ++s,  d >>= 1;
    long long u = 1, v = p, u2m = 1, v2m = p, qm = q, qm2 = q * 2, qkd = q;
    for (ll mask = 2; mask <= d; mask <<= 1)
    {
        u2m = (u2m * v2m) % n;
        v2m = (v2m * v2m) % n;
        while (v2m < qm2)   v2m += n;
        v2m -= qm2;
        qm = (qm * qm) % n;
        qm2 = qm * 2;
        if (d & mask)
        {
            long long t1 = (u2m * v) % n,  t2 = (v2m * u) % n,
                      t3 = (v2m * v) % n,  t4 = (((u2m * u) % n) * dd) % n;
            u = t1 + t2;
            if (u & 1)  u += n;
            u = (u >> 1) % n;
            v = t3 + t4;
            if (v & 1)  v += n;
            v = (v >> 1) % n;
            qkd = (qkd * qm) % n;
        }
    }
    if (u == 0 || v == 0)  return true;
    long long qkd2 = qkd * 2;
    for (ll r = 1; r < s; ++r)
    {
        v = (v * v) % n - qkd2;
        if (v < 0)  v += n;
        if (v < 0)  v += n;
        if (v >= n)  v -= n;
        if (v >= n)  v -= n;
        if (v == 0)  return true;
        if (r < s - 1)
        {
            qkd = (qkd * 1ll * qkd) % n;
            qkd2 = qkd * 2;
        }
    }
    return false;
}

bool prime (ll n)
{
    for (ll i = 0; i < trivial_limit && p[i] < n; ++i)
        if (n % p[i] == 0)
            return false;
    if (p[trivial_limit - 1]*p[trivial_limit - 1] >= n)
        return true;
    if (!miller_rabin (n))
        return false;
    return bpsw (n);
}

void prime_init()
{
    for (ll i = 2, j = 0; j < trivial_limit; ++i)
    {
        bool pr = true;
        for (ll k = 2; k * k <= i; ++k)
            if (i % k == 0)
                pr = false;
        if (pr)
            p[j++] = i;
    }
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, m;
    cin >> n >> m;

    for(int i = n; i <= m; i++)
        if(prime(i) && i != 1)
            cout << i << endl;

    cout << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    prime_init();
    //solve();
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}