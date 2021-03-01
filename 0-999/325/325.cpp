//https://www.e-olymp.com/ru/problems/325
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<int> parent;
vector<int> rang;

void make_set (int v)
{
    parent[v] = v;
    rang[v] = 0;
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

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, m;
    cin >> n >> m;

    parent.resize(n);
    rang.resize(n);

    for(int i = 0; i < n; i++)
        make_set(i);

    priority_queue< pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> > q;

    for(int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        --a, --b;
        q.push({c, {a, b}});
    }

    int ans = 0;
    while(find_set(0) != find_set (n - 1) && !q.empty())
    {
        auto cur = q.top();
        q.pop();
        int a = cur.second.first, b = cur.second.second, c = cur.first;
        ans = cur.first;
        //printf("a=%d b=%d c=%d\n", a,b,c);
        union_sets(cur.second.first, cur.second.second);
    }

    cout << ans << endl;
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