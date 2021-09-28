// https://www.e-olymp.com/ru/problems/265
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXARR = 100005;
vector<int> ss[MAXARR];
bool used[100000];
int dp1[MAXARR], dp2[MAXARR];
int n;

void dfs(int node, int par = -1)
{
    dp1[node] = 1;
    dp2[node] = 0;
    int cur1 = 0, cur2 = 0;
    for(auto chield : ss[node])
        if(chield != par)
        {
            dfs(chield, node);
            dp1[node] += min(dp1[chield], dp2[chield]);
            dp2[node] += dp1[chield];
        }
}

void solve()
{
    cin >> n;
    for(int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }
    dfs(0);
    cout << min(dp1[0], dp2[0]);
}

int main()
{
    solve();
    return 0;
}
