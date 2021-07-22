//https://www.e-olymp.com/ru/problems/1685
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n;
ld maxLen = 2.0;
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

ld dist(pair<int, int>p1, pair<int, int>p2)
{
    ld res = sqrt((p2.first - p1.first) * (p2.first - p1.first) + (p2.second - p1.second) * (p2.second - p1.second));
    return res;
}

void solve()
{
    cin >> n;
    if(n == 0 || n == 1)
    {
        cout << n;
        return;
    }

    init(n);
    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    priority_queue<pair<ld, pair<int, int>>> q;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            q.push({-1 * dist(v[i], v[j]), {i, j}});

    while(!q.empty())
    {
        auto cur = q.top();
        q.pop();

        auto d = -1 * cur.first;
        auto a = cur.second.first;
        auto b = cur.second.second;

        if(d < 2.0 && find_set(a) != find_set(b))
            union_sets(a, b);
    }

    set<int> st;
    for(int i = 0; i < n; i++)
    {
        st.insert(find_set(i));
        //cout<<find_set(i)<<" ";
    }
    //cout<<"\n";
    cout << st.size();
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    return 0;
}