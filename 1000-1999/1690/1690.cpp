// https://www.e-olymp.com/ru/problems/1690
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll k = gcd(gcd(a, b), gcd(c, d));
    cout << a / k + b / k + c / k + d / k;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}