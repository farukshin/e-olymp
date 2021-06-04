// https://www.e-olymp.com/ru/problems/9426
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

void obshSlog(pair<ll, ll> &p1, pair<ll, ll> &p2)
{
    ll llcm = lcm(p1.second, p2.second);
    p1.first *= llcm / p1.second;
    p2.first *= llcm / p2.second;
    p1.second = p2.second = llcm;
}

void sokr(pair<ll, ll> &res)
{
    ll ggcd = gcd(abs(res.first), res.second);
    res.first /= ggcd;
    res.second /= ggcd;
}

pair<ll, ll> summ(pair<ll, ll> &p1, pair<ll, ll> &p2)
{
    pair<ll, ll> res;
    obshSlog(p1, p2);
    res.first = p1.first + p2.first;
    res.second = p1.second;

    sokr(res);
    return res;
}

pair<ll, ll> mminus(pair<ll, ll> &p1, pair<ll, ll> &p2)
{
    pair<ll, ll> res;
    obshSlog(p1, p2);
    res.first = p1.first - p2.first;
    res.second = p1.second;

    sokr(res);
    return res;
}

pair<ll, ll> uumn(pair<ll, ll> &p1, pair<ll, ll> &p2)
{
    pair<ll, ll> res;

    res.first = p1.first * p2.first;
    res.second = p1.second * p2.second;

    sokr(res);
    return res;
}

void solve()
{
    pair<ll, ll> p1, p2, res;
    char ch;
    while(scanf("%lld/%lld %c %lld/%lld", &p1.first, &p1.second, &ch, &p2.first, &p2.second) != EOF)
    {
        if(ch == '/')
            swap(p2.first, p2.second);
        res = uumn(p1, p2);

        //printf("%d/%d %d/%d\n", curP1.first, curP1.second, curP2.first, curP2.second);
        printf("%lld/%lld\n", res.first, res.second);
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}