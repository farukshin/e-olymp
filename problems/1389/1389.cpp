// https://www.e-olymp.com/ru/problems/1389
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int ans = -1;
int n, start, finish, k;
vector<vector<pair<int, pair<int, int>>>> ss;
vector<int> color;

void dfs(int node, int tik)
{
    color[node] = 1;
    if(node == finish)
        ans = (ans == -1 ? tik : min(ans, tik));

    for(auto d : ss[node])
    {
        int chield = d.first;
        int curStart = d.second.first;
        int curFinish = d.second.second;

        if(color[chield] == 1 || tik > curStart)
            continue;
        if(ans != -1 && curFinish > ans)
            continue;
        dfs(chield, curFinish);
    }
    color[node] = 2;
}

void solve()
{
    scanf("%d %d %d %d", &n, &start, &finish, &k);
    //cin>>n>>start>>finish>>k;
    --start, --finish;
    ss.resize(n);
    color.resize(n, 0);

    for(int i = 0; i < k; i++)
    {
        int a, t1, b, t2;
        //cin>>a>>t1>>b>>t2;
        scanf("%d %d %d %d", &a, &t1, &b, &t2);
        --a, --b;
        ss[a].push_back({b, {t1, t2}});
    }
    dfs(start, 0);
    //cout << ans;
    printf("%d", ans);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(5);

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}