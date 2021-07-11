// https://www.e-olymp.com/ru/problems/7378
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool used[1005] = {false};
vector<set<int>> groups;
vector<vector<int>> ss(1005);
vector<int> cost(1005, 0);

vector<int> parent;
vector<int> rang;

void make_set (int v)
{
    parent[v] = v;
    rang[v] = 0;
}

void init (int n)
{
    parent.resize(n);
    rang.resize(n);
    for(int i = 0; i < n; i++)
        make_set(i);
}

int find_set (int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set (parent[v]);
}

void union_sets (int a, int b)
{
    a = find_set (a);
    b = find_set (b);
    if (a != b)
    {
        if (rang[a] < rang[b])
            swap (a, b);
        parent[b] = a;
        if (rang[a] == rang[b])
            ++rang[a];
    }
}

void dfs(int node, int par, int ind)
{
    used[node] = true;
    groups[ind].insert(node);

    for(auto chield : ss[node])
        if(chield != par && !used[chield])
            dfs(chield, node, ind);
}

void solve()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        cin >> cost[i];

    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }

    int ind = 0;
    for(int i = 0; i < n; i++)
        if(!used[i])
        {
            set<int> st0;
            groups.push_back(st0);
            dfs(i, -1, ind), ind++;
        }

    int groupCount = groups.size();
    priority_queue<pair<int, pair<int, int>>> q;
    for(int i = 0; i < groupCount - 1; i++)
        for(int j = i + 1; j < groupCount; j++)
        {
            int minCost = INT_MAX;
            for(int n1 : groups[i])
                for(int n2 : groups[j])
                    minCost = min(minCost, cost[n1] + cost[n2]);
            q.push({-1 * minCost, {i, j}});
        }

    int ans = 0;
    init(groupCount);
    while(!q.empty())
    {
        auto cur = q.top();
        q.pop();

        int curCost = -1 * cur.first;
        int group1 = cur.second.first;
        int group2 = cur.second.second;

        if(find_set(group1) != find_set(group2))
            union_sets(group1, group2), ans += curCost;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}