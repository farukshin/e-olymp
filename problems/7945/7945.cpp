// https://www.e-olymp.com/ru/problems/7945
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAXARR = 1e4 + 5;
vector<int> color(MAXARR, 0);
vector<vector<int>> ss(MAXARR);
bool isCycle;

void dfs(int node)
{
    if(isCycle)
        return;
    color[node] = 1;
    for(auto d : ss[node])
        if(color[d] == 1)
        {
            isCycle = true;
            return;
        }
        else if(color[d] == 0)
            dfs(d);
    color[node] = 2;
}

void solve()
{
    int n;
    cin >> n;

    int k = 0;
    map<string, int> mp;
    for(int i = 0; i < n; i++)
    {
        string s1, s2;
        char ch;
        cin >> s1 >> ch >> s2;

        if (!mp.count(s1)) mp[s1] = ++k;
        if (!mp.count(s2)) mp[s2] = ++k;

        int a = mp[s1], b = mp[s2];
        if(ch == '<')
            ss[a].push_back(b);
        else if(ch == '>')
            ss[b].push_back(a);
    }

    isCycle = false;
    for(int i = 1; i <= k && !isCycle; i++)
        if(color[i] == 0)
            dfs(i);

    cout << (isCycle ? "impossible" : "possible");
}

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL), cout.tie(NULL); cout.setf(std::ios::fixed); cout.precision(3);
    solve();
    return 0;
}