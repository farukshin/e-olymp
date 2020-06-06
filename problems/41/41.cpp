//https://www.e-olymp.com/ru/problems/41
//#tech_debt
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
vector<int> ansNode;
int searchNode = 0, ans = 0, curCount = 0;

void dfs(int node, bool print = false)
{
    used[node] = true;
    curCount++;

    if (print)
        ansNode.push_back(node);

    for (auto chield : ss[node])
        if (!used[chield])
            dfs(chield, print);
}

void solve()
{
    int n, k;
    cin >> n >> k;

    used.resize(n + 1);
    ss.resize(k + 1);

    while (k--)
    {
        int a, b;
        cin >> a >> b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
        if (!used[i])
        {
            curCount = 0;
            dfs(i);
            if (curCount > ans)
            {
                ans = curCount;
                searchNode = i;
            }
        }

    fill(used.begin(), used.end(), false);
    bool printNode = true;
    dfs(searchNode, printNode);

    sort(ansNode.begin(), ansNode.end());
    cout << ansNode.size() << endl;
    for (int i = 0; i < ansNode.size(); i++)
        cout << ansNode[i] << (i == ansNode.size() - 1 ? "\n" : " ");
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
