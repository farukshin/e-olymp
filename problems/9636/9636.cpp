// https://www.e-olymp.com/ru/problems/9636
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll ans = a - 2 * b;

    cout << (ans <= 0 ? 0 : ans);
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