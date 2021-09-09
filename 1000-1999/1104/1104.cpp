//https://www.e-olymp.com/ru/problems/1104
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template <class E> struct csr
{
    std::vector<int> start;
    std::vector<E> elist;
    explicit csr(int n, const std::vector<std::pair<int, E>>& edges)
        : start(n + 1), elist(edges.size())
    {
        for (auto e : edges)
        {
            start[e.first + 1]++;
        }
        for (int i = 1; i <= n; i++)
        {
            start[i] += start[i - 1];
        }
        auto counter = start;
        for (auto e : edges)
        {
            elist[counter[e.first]++] = e.second;
        }
    }
};

struct scc_graph
{
public:
    explicit scc_graph(int n) : _n(n) {}

    int num_vertices()
    {
        return _n;
    }

    void add_edge(int from, int to)
    {
        edges.push_back({from, {to}});
    }

    std::pair<int, std::vector<int>> scc_ids()
    {
        auto g = csr<edge>(_n, edges);
        int now_ord = 0, group_num = 0;
        std::vector<int> visited, low(_n), ord(_n, -1), ids(_n);
        visited.reserve(_n);
        auto dfs = [&](auto self, int v) -> void
        {
            low[v] = ord[v] = now_ord++;
            visited.push_back(v);
            for (int i = g.start[v]; i < g.start[v + 1]; i++)
            {
                auto to = g.elist[i].to;
                if (ord[to] == -1)
                {
                    self(self, to);
                    low[v] = std::min(low[v], low[to]);
                }
                else
                {
                    low[v] = std::min(low[v], ord[to]);
                }
            }
            if (low[v] == ord[v])
            {
                while (true)
                {
                    int u = visited.back();
                    visited.pop_back();
                    ord[u] = _n;
                    ids[u] = group_num;
                    if (u == v) break;
                }
                group_num++;
            }
        };
        for (int i = 0; i < _n; i++)
        {
            if (ord[i] == -1) dfs(dfs, i);
        }
        for (auto& x : ids)
        {
            x = group_num - 1 - x;
        }
        return {group_num, ids};
    }

    std::vector<std::vector<int>> scc()
    {
        auto ids = scc_ids();
        int group_num = ids.first;
        std::vector<int> counts(group_num);
        for (auto x : ids.second) counts[x]++;
        std::vector<std::vector<int>> groups(ids.first);
        for (int i = 0; i < group_num; i++)
        {
            groups[i].reserve(counts[i]);
        }
        for (int i = 0; i < _n; i++)
        {
            groups[ids.second[i]].push_back(i);
        }
        return groups;
    }

private:
    int _n;
    struct edge
    {
        int to;
    };
    std::vector<std::pair<int, edge>> edges;
};

void solve()
{
    int n, m;
    cin >> n >> m;
    scc_graph g(n);
    vector<pair<int, int>> v(m);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        v[i].first = a, v[i].second = b;
        g.add_edge(a, b);
    }
    //auto &[scc_cnt, comp] = g.scc_ids();
    auto scc = g.scc_ids();
    auto scc_cnt  = scc.first;
    auto comp = scc.second;
    vector<vector<int>> ss(scc_cnt);
    for(auto d : v)
    {
        auto a = comp[d.first], b = comp[d.second];
        if(a != b) ss[a].push_back(b);
    }

    vector<bool> used(scc_cnt, false);
    queue<int> q;
    ll ans = 0;

    for(int i = 0; i < scc_cnt; i++)
        if(!used[i])
        {
            used[i] = true;
            q.push(i);
            ans++;

            while(!q.empty())
            {
                auto node = q.front();
                q.pop();
                for(auto chield : ss[node])
                    if(!used[chield])
                        used[chield] = true, q.push(chield);
            }
        }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}