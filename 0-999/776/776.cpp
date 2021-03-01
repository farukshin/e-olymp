//https://www.e-olymp.com/ru/problems/776
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void bfs_compSv(vector<vector<int>>& ss, const int countNode, vector<int>& compSv, int& countCompSv)
{
    vector<bool> used(countNode, false);
    compSv.resize(countNode);
    fill(compSv.begin(), compSv.end(), 0);
    countCompSv = 0;

    for (int i = 0; i < countNode; i++)
        if (!used[i])
        {
            countCompSv++;
            queue<int> q;
            q.push(i);
            used[i] = true;

            while (!q.empty())
            {
                auto cur = q.front();
                q.pop();
                compSv[cur] = countCompSv;

                for (auto chield : ss[cur])
                    if (!used[chield])
                    {
                        used[chield] = true;
                        q.push(chield);
                    }
            }
        }
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> ss(n);
    vector<int> compSv;
    int ans = 0;
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }


    bfs_compSv(ss, n, compSv, ans);

    cout << ans - 1 << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}