// https://www.e-olymp.com/ru/problems/9428
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

void solve()
{
    pair<ll, ll> p1, p2;
    scanf("%d/%d %d/%d", &p1.first, &p1.second, &p2.first, &p2.second);
    pair<ll, ll> curP1 = p1, curP2 = p2;
    obshSlog(curP1, curP2);
    //printf("%d/%d %d/%d\n", curP1.first, curP1.second, curP2.first, curP2.second);
    if(curP1.first <= curP2.first)
        printf("%d/%d %d/%d", p1.first, p1.second, p2.first, p2.second);
    else
        printf("%d/%d %d/%d", p2.first, p2.second, p1.first, p1.second);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}