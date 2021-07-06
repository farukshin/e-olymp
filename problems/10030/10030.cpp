//https://www.e-olymp.com/ru/problems/10030
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n, k;
    cin >> n >> k;

    map<int, int> mp;
    //int maximum = 0, maxNum = 0;
    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        mp[cur]++;
        // if (mp[cur] > maximum)
        //     maximum = mp[cur], maxNum = cur;
    }

    if (mp.size() < k)
    {
        cout << k - mp.size() << endl;
        return;
    }

    vector<pair<int, int>> v;
    for (auto s : mp)
        v.push_back({s.second, s.first});

    sort(v.begin(), v.end());
    ll ans = 0;
    int ind = 0;

    while (mp.size() != k)
    {
        ans += mp[v[ind].second];
        mp.erase(v[ind].second);
        ind++;
    }
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
    //int t; cin >> t; while(t--) solve();

    return 0;
}