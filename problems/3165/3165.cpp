// https://www.e-olymp.com/ru/problems/3165
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAXARR = 1005;
int n, m;
int colors[MAXARR];
bool success = true;

void dfs(int node, int color, vector<vector<int>> & ss)
{
    colors[node] = color;

    for(auto chield : ss[node])
        if (!success)
            return;
        else if(colors[chield] == -1)
            dfs(chield, (color + 1) % 2, ss);
        else if (colors[chield] == color)
            success = false;
}

void solve()
{

    while(cin >> n, n != 0)
    {
        cin >> m;
        memset(colors, -1, sizeof colors);

        vector<vector<int>> ss(n);
        for(int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            --a, --b;
            ss[a].push_back(b);
            ss[b].push_back(a);
        }
        success = true;
        dfs(0, 1, ss);
        cout << (success ? "BICOLOURABLE.\n" : "NOT BICOLOURABLE.\n");
    }
}

int main()
{
    cout.setf(std::ios::fixed);
    cout.precision(6);

    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}