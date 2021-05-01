// https://www.e-olymp.com/ru/problems/4847
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    priority_queue<pair<int, string>> q;
    map<string, int> mp;
    set<pair<int, string>> old;

    while(cin >> s)
    {
        string id;
        int cur;
        if(s == "ADD")
        {
            cin >> id >> cur;
            q.push({cur, id});
            mp[id] = cur;
        }
        else if(s == "CHANGE")
        {
            cin >> id >> cur;
            old.insert({mp[id], id});
            mp[id] = cur;
            q.push({cur, id});
        }
        else if(s == "POP")
            while(true)
            {
                if(q.empty())
                    break;
                auto curr = q.top();
                q.pop();

                if(old.count({curr.first, curr.second}))
                    old.erase({curr.first, curr.second});
                else
                {
                    cout << curr.second << " " << curr.first << "\n";
                    break;
                }
            }

    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}