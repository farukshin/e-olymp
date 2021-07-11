//https://www.e-olymp.com/ru/problems/6940
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
    map<string, int> mp;
    string ans;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        string cur;
        cin >> cur;
        mp[cur]++;
        if (mp[cur] > mx)
            mx = mp[cur], ans = cur;
    }
    for (auto s : mp)
        if (s.second == mx && s.first > ans)
            ans = s.first;

    cout << ans << " " << mp[ans] << endl;
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