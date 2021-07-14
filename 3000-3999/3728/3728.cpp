// https://www.e-olymp.com/ru/problems/3728
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

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n, m, k;
    cin >> n >> m >> k;
    init(n);


    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
    }

    vector<pair<char, pair<int, int>>> v;
    for(int i = 0; i < k; i++)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;
        --a, --b;
        v.push_back({s[0], {a, b}});
    }

    stack<bool> st;
    for(int i = k - 1; i >= 0; i--)
        if(v[i].first == 'c')
            union_sets(v[i].second.first, v[i].second.second);
        else if(v[i].first == 'a')
            st.push( (find_set(v[i].second.first) == find_set(v[i].second.second) ? true :  false));

    while(!st.empty())
    {
        cout << (st.top() ? "YES" : "NO") << "\n";
        st.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}