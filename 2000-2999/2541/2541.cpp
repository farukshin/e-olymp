// https://www.e-olymp.com/ru/problems/2541
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    vector<pair<int, string>> v;
    map<string, int> mp;
    while (cin >> s)
    {
        int cnt = s[0] - 'a' + 1;
        set<char> used;
        for (int i = 1; i < int(s.size()); i++)
        {
            cnt += s[i] - 'a' + 1;
            if (s[i] == s[i - 1] && !used.count(s[i]))
                cnt += 2 * (s[i] - 'a' + 1), used.insert(s[i]);
        }
        v.push_back({cnt, s});
    }
    sort(begin(v), end(v),
         [&](auto &p1, auto &p2)
         {
             if (p1.first == p2.first)
                 return p1.second < p2.second;
             else
                 return p1.first > p2.first;
         });
    for (auto d : v)
        cout << d.second << "\n";
}

int main()
{
    solve();
    return 0;
}
