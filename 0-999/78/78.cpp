// https://www.e-olymp.com/ru/problems/78
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAXARR = 500;
bool v[MAXARR][MAXARR] = {false};
int n, m;
int ans = 0;
priority_queue<pair<ll, pair<int, int>>> q;

void load()
{
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++)
            v[i][j] = s[j] - '0';
    }
}

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

void dsu()
{
    int runX[2] = {0, -1};
    int runY[2] = {-1, 0};
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(v[i][j])
                for(int r = 0; r < 2; r++)
                {
                    int ii = i + runX[r];
                    int jj = j + runY[r];
                    if(ii >= 0 && ii < n && jj >= 0 && jj < m && v[ii][jj] && find_set(i * m + j) != find_set(ii * m + jj))
                        union_sets(i * m + j, ii * m + jj);
                }
}

void prt(int l, int a, int b, int c, int d)
{
    //cout<<l<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
}

bool nesk_ostr()
{
    set<int> st;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            if(v[i][j])
                st.insert(find_set(i * m + j));
            if(st.size() > 1)
                return true;
        }
    return false;
}

void solve()
{
    cin >> n >> m;
    load();
    init(n * m);

    dsu();

    for(int i = 0; i < n; i++)
    {
        int l = -1, r = -1;
        bool reka = false;
        for(int j = 0; j < m; j++)
        {
            if(l != -1 && reka && v[i][j] && find_set(i * m + l) != find_set(i * m + j))
                q.push({-1 * (j - l - 1), {i * m + l, i * m + j}}), reka = false, prt((j - l - 1), i, l, i, j), l = j;
            else if(l != -1 && !reka && !v[i][j])
                reka = true;
            else if(l != -1 && v[i][j] || l == -1 && v[i][j])
                l = j;
        }
    }


    for(int j = 0; j < m; j++)
    {
        int l = -1, r = -1;
        bool reka = false;
        for(int i = 0; i < n; i++)
        {
            if(l != -1 && reka && v[i][j] && find_set(l * m + j) != find_set(i * m + j))
                q.push({-1 * (i - l - 1), {l * m + j, i * m + j}}), reka = false, prt(i - l - 1, l, j, i, j), l = i;
            else if(l != -1 && !reka && !v[i][j])
                reka = true;
            else if(l != -1 && v[i][j] || l == -1 && v[i][j])
                l = i;
        }
    }

    while(!q.empty())
    {
        auto cur = q.top();
        q.pop();

        ll len = -1 * cur.first;
        int a = cur.second.first;
        int b = cur.second.second;

        if(find_set(a) != find_set(b))
            union_sets(a, b), ans += len;
    }

    if(ans == 0 && nesk_ostr())
        cout << -1;
    else
        cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}