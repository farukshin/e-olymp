//https://www.e-olymp.com/ru/problems/10076
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
    if(mp.size() == 2 && (mp[v[0]] == 1 || mp[v[1]] == 1))
        cout << (mp[v[0]] == 1 ? v[0] : v[1]) << endl;
    else
        cout << "NO" << endl;

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