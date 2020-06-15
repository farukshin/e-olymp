//https://www.e-olymp.com/ru/problems/5107
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

set<int> used;
set<int>::iterator iter;
map<int, vector<int>> ss;

void dfs(int node)
{
    used.insert(node);
    for (int chield : ss[node])
        if (used.find(chield) == used.end())
            dfs(chield);
}

void solve()
{
    int n, m, l, r;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d", &l, &r);
        ss[l].push_back(r);
    }

    dfs(1);

    printf("%d\n", used.size());
    for (iter = used.begin(); iter != used.end(); ++iter)
        printf("%d\n", *iter);
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
