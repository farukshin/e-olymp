//https://www.e-olymp.com/ru/problems/982
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
int k = 0;

void dfs(int node)
{
    k++;
    used[node] = true;
    for (auto chield : ss[node])
        if (!used[chield])
            dfs(chield);
}

void solve()
{
    int n, m;
    cin >> n >> m;

    ss.resize(n + 1);
    used.resize(n + 1);

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }

    dfs(1);
    cout << (k == n ? "YES" : "NO") << endl;
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
