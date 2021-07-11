// https://www.e-olymp.com/ru/problems/6302
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

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    ll ans = v[0];
    for(int i = 1; i < n; i++)
        ans = lcm(ans, v[i]);

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}