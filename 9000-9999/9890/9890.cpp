// https://www.e-olymp.com/ru/problems/9890
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll ans = pow(k, n);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(5);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}