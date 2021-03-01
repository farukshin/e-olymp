//https://www.e-olymp.com/ru/problems/8761
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<set<int>> ss;
vector<bool> used;
vector<int> d, v;
int s4 = 0;
//queue<int> q;

void dfs(int node)
{
    s4++;
    d[node] = s4;
    used[node] = true;
    //q.push(node);

    for(auto chield : ss[node])
        if(!used[chield])
            dfs(chield);
    s4++;
    v[node] = s4;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, m;
    cin >> n >> m;
    ss.resize(n);
    used.resize(n, false);
    fill(used.begin(), used.end(), false);
    d.resize(n);
    v.resize(n);
    fill(d.begin(), d.end(), 0);
    fill(v.begin(), v.end(), 0);

    int a, b;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        --a, --b;
        ss[a].insert(b);
        ss[b].insert(a);
    }

    int start;
    cin >> start;
    --start;

    //for(int i=0;i<n;i++)
    //if(!used[i])
    dfs(start);

    //while(!q.empty())
    //{
    //int i=q.front();
    //q.pop();
    //printf("Vertex: %d, Gray %d, Black %d\n", i+1, d[i], v[i]);
    //}

    for(int i = 0; i < n; i++)
        printf("%d %d\n", d[i], v[i]);
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