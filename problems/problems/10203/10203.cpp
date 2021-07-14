// https://www.e-olymp.com/ru/problems/10203
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

ld dist(pair<int, int> p1, pair<int, int> p2)
{
    ld res = sqrt((p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second));
    return res;
}

void solve()
{
    int s, p;
    cin >> s >> p;
    vector<pair<int, int>> v(p);
    for(int i = 0; i < p; i++)
        cin >> v[i].first >> v[i].second;

    priority_queue<pair<ld, pair<int, int>>> q;
    for(int i = 0; i < p; i++)
        for(int j = i + 1; j < p; j++)
            q.push({-1 * dist(v[i], v[j]), {i, j}});


    init(p);
    int need = p - s;
    ld ans = 0;
    while(!q.empty())
    {
        auto cur = q.top();
        q.pop();

        ld len = cur.first;
        int a = cur.second.first;
        int b = cur.second.second;

        if(find_set(a) != find_set(b))
            union_sets(a, b), need--, ans = -1 * len; //, cout<<"union "<<a<<" "<<b<<"\n";

        if(!need)
            break;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}