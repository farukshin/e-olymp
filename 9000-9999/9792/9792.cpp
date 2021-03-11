//https://www.e-olymp.com/ru/problems/9792
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);


    string s, t;
    cin >> s >> t;

    if(s.length() != t.length())
    {
        cout << "No" << endl;
        return;
    }

    map<int, vector<int>> ss1, ss2;

    map<char, int> mp;
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if(mp.count(ch) == 0)
            mp[ch] = i;
        ss1[mp[ch]].push_back(i);
    }

    mp.clear();
    for(int i = 0; i < t.length(); i++)
    {
        char ch = t[i];
        if(mp.count(ch) == 0)
            mp[ch] = i;
        ss2[mp[ch]].push_back(i);
    }

    if(ss2.size() != ss2.size())
    {
        cout << "No" << endl;
        return;
    }

    bool success = true;
    for(auto d : ss1)
    {
        if(!success)
            break;

        if(ss1[d.first].size() != ss2[d.first].size())
        {
            success = false;
            break;
        }

        for(int i = 0; i < ss1[d.first].size(); i++)
            if(ss1[d.first][i] != ss2[d.first][i])
            {
                success = false;
                break;
            }
    }

    cout << (success ? "Yes" : "No") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //string cur; int t; cin >> t; getline(cin,cur); while (t--) solve();

    return 0;
}