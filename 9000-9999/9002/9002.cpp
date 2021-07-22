// https://www.e-olymp.com/ru/problems/9002
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;

    ll ans = a * (n / 2) + b * (n / 2) + max(a, b) * (n % 2 == 0 ? 0 : 1);
    cout << ans;
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