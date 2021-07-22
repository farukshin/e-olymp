// https://www.e-olymp.com/ru/problems/9018
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll n, a, b;


ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

ll f(ll nn)
{
    return nn / a + nn / b - nn / lcm(a, b);
}

void solve()
{
    cin >> a >> b >> n;

    ll l = 1, r = 1000 * 1000 * 1000;
    while(l < r)
    {
        ll mid = (r + l) / 2;
        if(f(mid) >= n)
            r = mid;
        else
            l = mid + 1;
    }
    cout << l;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(4);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}