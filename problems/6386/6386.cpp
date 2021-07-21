// https://www.e-olymp.com/ru/problems/6386
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;

    int y = 0;

    while(cin >> n)
    {
        if(n == 0) break;
        string alf;
        cin >> alf;
        multiset<pair<string, string>> ans;
        map<char, char> mp;
        for(int i = 0; i < alf.length(); i++)
            mp[alf[i]] = char('A' + i);

        for(int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            string curS = s;
            for(int j = 0; j < curS.length(); j++)
                curS[j] = mp[curS[j]];
            ans.insert({curS, s});
        }
        cout << "year " << ++y << "\n";
        for(auto d : ans)
            cout << d.second << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL), cout.tie(NULL); cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}