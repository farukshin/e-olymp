//https://www.e-olymp.com/ru/problems/5728
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    int mn, mx = 0, sum = 0;
    map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        mp[cur]++;
        if(mx < mp[cur]) mx = mp[cur];
    }

    vector<pair<ld, int>> v;

    int k = 0;
    for(auto m : mp)
        if(m.second == 1)
            sum += m.first, k++;

    for(auto m : mp)
        if(m.second == mx)
        {
            ld r = abs(1.0 * sum / k - m.first);
            v.push_back({r, m.first});
        }
    sort(v.begin(), v.end());

    cout << v[0].second << endl;
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