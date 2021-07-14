// https://www.e-olymp.com/ru/problems/7371
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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b < 0) b *= -1, a *= -1;
    if(d < 0) d *= -1, c *= -1;

    ll lcmm = lcm(b, d);
    a *= lcmm / b;
    c *= lcmm / d;
    bool min = a + c < 0;
    ll gcdd = gcd(abs(a + c), lcmm);
    cout << (a + c) / gcdd << " " << lcmm / gcdd;
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