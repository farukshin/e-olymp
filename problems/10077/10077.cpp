//https://www.e-olymp.com/ru/problems/10077
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    map<ll, ll> mp;
    vector<ll> v;
    ll cur;
    while(cin >> cur)
    {
        mp[cur]++;
        if(mp[cur] == 1)
            v.push_back(cur);

    }
    if(mp.size() != 2)
    {
        cout << "NO" << endl;
        return;
    }

    ll ans;
    if(mp[v[0]] == mp[v[1]])
        ans = min(v[0], v[1]);
    else if(mp[v[0]] > mp[v[1]])
        ans = v[0];
    else if(mp[v[0]] < mp[v[1]])
        ans = v[1];

    cout << ans << endl;

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