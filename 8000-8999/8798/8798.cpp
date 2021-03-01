//https://www.e-olymp.com/ru/problems/8798
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

    int n, q;
    cin >> n >> q;

    parent.resize(n);
    rang.resize(n);
    for(int i = 0; i < n; i++)
        make_set(i);

    for(int i = 0; i < q; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 1)
            union_sets(b - 1, c - 1);
        else if(a == 2)
            cout << (find_set(b - 1) == find_set(c - 1) ? "YES" : "NO") << endl;;
    }

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