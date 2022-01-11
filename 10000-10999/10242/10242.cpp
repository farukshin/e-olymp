// https://www.eolymp.com/ru/problems/10242
//#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;

int cnt = 0, n;
bool success = false;
int runx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int runy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
pair<int, int> par[8][8];
int color[8][8];
int v[8][8];
pair<int, int> p;
int n2;

void printAns(int a, int b)
{
    v[a][b] = cnt;
    --cnt;
    while (!(a == 0 && b == 0))
    {
        auto d = par[a][b];
        a = d.first;
        b = d.second;
        v[a][b] = cnt;
        --cnt;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << v[i][j] << " ";
        cout << "\n";
    }
    success = true;
}

void dfs(int &a, int &b, int &pa, int &pb)
{
    if (success)
        return;

    cnt++;
    color[a][b] = 1;
    p.first = pa, p.second = pb;
    par[a][b] = p;
    if (cnt == n2)
    {
        printAns(a, b);
        return;
    }

    for (int i = 0; i < 8 && !success; i++)
    {
        int aa = a + runx[i];
        int bb = b + runy[i];
        if (aa >= 0 && aa < n && bb >= 0 && bb < n && color[aa][bb] != 1)
            dfs(aa, bb, a, b);
    }
    cnt--;
    color[a][b] = 2;
}

void solve()
{
    cin >> n;
    n2 = n * n;
    memset(color, 0, sizeof(color));
    int a = 0, b = 0, c = -1, d = -1;
    dfs(a, b, c, d);
    if (!success)
        cout << "Solution does not exist";
}

int main()
{
    solve();
    return 0;
}
