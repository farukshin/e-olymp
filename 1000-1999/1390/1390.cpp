//https://www.e-olymp.com/ru/problems/1390
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
vector<int> color;
vector<vector<int>> ss;

bool dfs(int node, int parrent)
{
    color[node] = 1;
    for(auto chield : ss[node])
        if(chield == parrent)
            continue;
        else if(color[chield] == 0)
        {
            if(dfs(chield, node)) return true;
        }
        else if(color[chield] == 1)
            return true;

    color[node] = 2;
    return false;
}

void solve()
{

    cin >> n >> m;

    color.resize(n, 0);
    ss.resize(n);
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }

    for(int i = 0; i < n; i++)
        if(dfs(i, -1))
        {
            cout << "YES";
            return;
        }

    cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    return 0;
}