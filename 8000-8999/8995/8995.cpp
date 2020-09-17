//https://www.e-olymp.com/ru/problems/8995
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;

    vector<pair<int, char>> ans;
    map<char, int> minimum, count;

    for (int i = 0; i < s.length(); i++)
    {
        auto ch = s[i];
        if (minimum.count(ch) == 0)
            minimum[ch] = i;

        count[ch]++;
        if (count[ch] == 2)
            ans.push_back({ minimum[ch], ch });
    }

    if (!ans.size())
    {
        cout << "NO" << endl;
        return;
    }
    sort(ans.begin(), ans.end());
    for (auto c : ans)
        cout << c.second;
    cout << endl;
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
