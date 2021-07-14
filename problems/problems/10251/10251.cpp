// https://www.e-olymp.com/ru/problems/10251
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll pak = n / (k + 1);
    ll ost = n - pak * (k + 1);
    //cout<<pak<<" "<<ost<<"\n";
    ll ans = pak * k + ost;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}