//https://www.e-olymp.com/ru/problems/4855
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

vector<vector<int>> ss;
vector<bool> used;
bool ans = true;
int k = 0;

void dfs(int node, int parrent)
{
    used[node] = true;
    k++;

    for (auto chield : ss[node])
        if (chield != parrent)
            if (used[chield] || !ans)
            {
                ans = false;
                break;
            }
            else
                dfs(chield, node);
}

void solve()
{
    int n, cur;
    cin >> n;
    used.resize(n + 1);
    ss.resize(n + 1);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> cur;
            if (cur == 1 && j > i)
            {
                ss[j].push_back(i);
                ss[i].push_back(j);
            }
        }

    dfs(1, -1);
    cout << (ans && k == n ? "YES" : "NO") << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}