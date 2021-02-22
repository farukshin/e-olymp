//https://www.e-olymp.com/ru/problems/10078
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
    map<char, int> mp;
    int mx = -1, mn = -1;

    for(auto ch : s)
        if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            char cur = (ch >= 'a' && ch <= 'z' ? 'A' + (ch - 'a') : ch);
            mp[cur]++;
        }

    int i = 0;
    for(auto s : mp)
    {
        i++;
        if(i == 1)
            mn = s.second, mx = s.second;
        else
            mn = (s.second < mn ? s.second : mn),
            mx = (s.second > mx ? s.second : mx);
    }

    vector<char> v;
    for(auto s : mp)
        if(s.second == mn)
            v.push_back(s.first);
    sort(v.begin(), v.end());

    cout << v[v.size() - 1] << endl;


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