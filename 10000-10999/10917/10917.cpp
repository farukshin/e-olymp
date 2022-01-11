// https://www.eolymp.com/ru/problems/10917
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = lcm(lcm(a, b), c);
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
