// https://www.e-olymp.com/ru/problems/10316
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int runx[4] = {0, 1, 0, -1};
int runy[4] = {1, 0, -1, 0};

void solve()
{
    int n = 10, m = 10;
    vector<string> v(n);
    pair<int, int> start, finish;
    vector<vector<bool>> used(n, vector<bool>(m, false));
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        for(int j = 0; j < v[i].size(); j++)
            if(v[i][j] == 'R') used[i][j] = true;
            else if(v[i][j] == 'L') used[i][j] = true, start = {i, j};
            else if(v[i][j] == 'B') finish = {i, j};
    }

    queue<pair<int, pair<int, int>>> q;
    q.push({0, start});
    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        int a = cur.second.first;
        int b = cur.second.second;
        int len = cur.first;

        if(cur.second == finish)
        {
            cout << cur.first - 1;
            return;
        }

        for(int i = 0; i < 4; i++)
        {
            int aa = a + runx[i];
            int bb = b + runy[i];
            bool isArea = aa >= 0 && aa < n && bb >= 0 && bb < m;
            if(!isArea) continue;
            if(!used[aa][bb])
                used[aa][bb] = true, q.push({len + 1, {aa, bb}});
        }

        if(q.empty())
            cout << -1;
    }
}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
