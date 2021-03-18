// https://www.e-olymp.com/ru/problems/4002
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
vector<vector<int>> ss;
vector<int> color;
bool success = true;

void dfs(int node, int clr)
{
    color[node] = clr;
    int rev = (clr == 1 ? 2 : 1);

    for(auto chield : ss[node])
        if(!color[chield])
            dfs(chield, rev);
        else if(color[chield] != rev)
        {
            success = false;
            break;
        }
}

void solve()
{

    cin >> n >> m;

    ss.resize(n);
    color.resize(n, 0);

    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }

    for(int i = 0; i < n && success; i++)
        if(!color[i])
            dfs(i, 1);
    cout << (success ? "YES" : "NO");
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    return 0;
}