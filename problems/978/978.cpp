//https://www.e-olymp.com/ru/problems/978
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void Kruskal(vector<pair<int, pair<int, int>>>& sr, const int& n, const int& m, vector<pair<int, int>>& res, vector<int>& tree_id)
{

    int cost = 0;
    tree_id.resize(n);

    sort(sr.begin(), sr.end());
    for (int i = 0; i < n; i++)
        tree_id[i] = i;

    for (int i = 0; i < m; i++)
    {
        int len = sr[i].first, a = sr[i].second.first, b = sr[i].second.second;
        if (tree_id[a] != tree_id[b])
        {
            cost++;
            res.push_back({ a, b });
            int old_id = tree_id[b], new_id = tree_id[a];
            for (int j = 0; j < n; ++j)
                if (tree_id[j] == old_id)
                    tree_id[j] = new_id;
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, pair<int, int>>> sr(m);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        sr[i] = { 1, {a, b} };
    }

    vector<pair<int, int>> res;
    vector<int> tree_id(n);

    Kruskal(sr, n, m, res, tree_id);
    for (auto k : res)
        printf("%d %d\n", k.first + 1, k.second + 1);

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
