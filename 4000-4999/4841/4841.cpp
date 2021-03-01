//https://www.e-olymp.com/ru/problems/4841
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    map<string, ll> mp;
    string s;
    while(cin >> s)
        mp[s]++;

    vector<pair<ll, string>> ans;
    for(auto d : mp)
        ans.push_back({d.second, d.first});
    sort(ans.begin(), ans.end());

    for(auto f : ans)
        cout << f.second << endl;
    //printf("%s\n",f.second);
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