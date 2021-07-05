// https://www.e-olymp.com/ru/problems/4829
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    map<char, int> mp;

    for(auto ch : s)
        mp[ch]++;
    string ans = "";
    char ch = '#';
    for(auto d : mp)
    {
        if(d.second != 1)
            ans += string(d.second / 2, d.first);
        if(d.second % 2 != 0 && ch == '#')
            ch = d.first;
    }
    string ans2 = ans;
    reverse(ans2.begin(), ans2.end());
    ans += (ch == '#' ? "" : string(1, ch)) + ans2;
    cout << ans;
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