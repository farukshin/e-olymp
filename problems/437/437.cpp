//https://www.e-olymp.com/ru/problems/437
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<int> parent;
vector<int> rang;

void make_set (int v, int num)
{
    parent[v] = num;
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
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n;
    cin >> n;

    parent.resize(n + 1);
    rang.resize(n + 1);
    //for(int i=0;i<n+1;i++)
    //	make_set(i);

    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if(v[i] == 0)
            v[i] = i;
        make_set(i, v[i]);
    }
    for(int i = 1; i <= n; i++)
        if(v[i] == i)
            cout << 0 << endl;
        else
            cout << find_set(i) << endl;
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