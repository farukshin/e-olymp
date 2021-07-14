// https://www.e-olymp.com/ru/problems/2317
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define MAXARR 500010
#define LOGMAX 18

int mas[2 * MAXARR][LOGMAX + 1];
int tik;

vector<vector<int>> ss(MAXARR);
int Order[2 * MAXARR], Height[2 * MAXARR], First[MAXARR];

void BuildRMQ(int *a, int size)
{
    int i, j;
    for (i = 0; i <= size; i++)
        mas[i][0] = i;
    for (j = 1; 1 << j < size; j++)
        for (i = 1; i + (1 << j) - 1 < size; i++)
            if (a[mas[i][j - 1]] < a[mas[i + (1 << (j - 1))][j - 1]])
                mas[i][j] = mas[i][j - 1];
            else
                mas[i][j] = mas[i + (1 << (j - 1))][j - 1];
}

int RMQ(int i, int j)
{
    if (i > j) swap(i, j);
    int k = 0;
    while ((1 << (k + 1)) <= j - i + 1) k++;
    int res = mas[i][k];
    if (Height[mas[j - (1 << k) + 1][k]] < Height[res])
        res = mas[j - (1 << k) + 1][k];
    return res;
}

void dfs(int v, int p = 0, int h = 0)
{
    Height[tik] = h;
    Order[tik] = v;
    First[v] = tik++;
    for(int i = 0; i < ss[v].size(); i++)
    {
        int to = ss[v][i];
        if (to != p)
        {
            dfs(to, v, h + 1);
            Order[tik] = v;
            Height[tik++] = h;
        }
    }
}

void Init_LCA(void)
{
    memset(First, 0, sizeof(First));
    tik = 1;
    dfs(1);
    BuildRMQ(Height, tik);
}

int LCA(int i, int j)
{
    int index = RMQ(First[i], First[j]);
    return Order[index];
}

void solve()
{
    int k;
    cin >> k;

    vector<pair<int, int>> Query;
    for(int i = 0; i < k; i++)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;
        if (s == "ADD")
            ss[a].push_back(b);
        else
            Query.push_back(make_pair(a, b));
    }

    Init_LCA();

    for(int i = 0; i < Query.size(); i++)
        cout << LCA(Query[i].first, Query[i].second) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}