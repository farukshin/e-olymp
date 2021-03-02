//https://www.e-olymp.com/ru/problems/1033
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
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n, m;
    cin >> n >> m;

    cout << n + m - gcd(n, m) << endl;

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