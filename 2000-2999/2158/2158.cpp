//https://www.e-olymp.com/ru/problems/2158
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    cin >> s;
    map<char, vector<int>> mp;
    for(int i = 0; i < s.size(); i++)
        mp[s[i]].push_back(i);

    int ans = s.size() + 5;
    bool success = false;
    for(auto m : mp)
        for(int i = 1; i < m.second.size(); i++)
            if(m.second[i] - m.second[i - 1] < ans)
                ans = m.second[i] - m.second[i - 1], success = true;

    ans = (!success ? 0 : ans);
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