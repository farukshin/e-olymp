// https://www.e-olymp.com/ru/problems/1974
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll sum(ll n)
{
    ll ans = (2 + (n - 1)) * n / 2;
    return ans;
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans = sum(r) - sum(l - 1);
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