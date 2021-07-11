// https://www.e-olymp.com/ru/problems/8662
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n - 1);
    ll mn = 1e9 + 5, mx = 0;
    for(int i = 0; i < n - 1; i++)
        cin >> v[i], mn = min(mn, v[i]), mx = max(mx, v[i]);

    ll l = 0, r = mx + 5;
    while(r - l > 1)
    {
        ll mid = (r + l) / 2;
        if(mid * (n - 1) <= mx - mid)
            l = mid;
        else
            r = mid;
    }
    cout << (r > mn ? -1 : r);
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