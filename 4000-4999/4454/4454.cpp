// https://www.e-olymp.com/ru/problems/4454
//#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;

int n, m;
vector<vector<int>> ss(20 * 20 * 4 + 100);
int start[4], finish[4];

void add_edge(int a, int b)
{
    ss[a].push_back(b);
    ss[b].push_back(a);
}

void intiss()
{
    cin >> n >> m;
    string s;
    getline(cin, s);
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        v[i] = s;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 'X')
                continue;

            int a = i * m + j;
            if (j > 0 && v[i][j - 1] != 'X')
            {
                int aa = i * m + j - 1;
                ss[a * 4].push_back(aa * 4);
                ss[a * 4].push_back(aa * 4 + 1);
                ss[aa * 4 + 2].push_back(a * 4 + 2);
                ss[aa * 4 + 2].push_back(a * 4 + 3);
            }

            if (i > 0 && v[i - 1][j] != 'X')
            {
                int aa = (i - 1) * m + j;
                ss[a * 4 + 1].push_back(aa * 4 + 1);
                ss[a * 4 + 1].push_back(aa * 4 + 2);

                ss[aa * 4 + 3].push_back(a * 4 + 3);
                ss[aa * 4 + 3].push_back(a * 4);
            }

            if (v[i][j] == 'S')
                start[0] = a * 4, start[1] = a * 4 + 1, start[2] = a * 4 + 2, start[3] = a * 4 + 3;
            if (v[i][j] == 'F')
                finish[0] = a * 4, finish[1] = a * 4 + 1, finish[2] = a * 4 + 2, finish[3] = a * 4 + 3;
        }
}

int bfs()
{
    bool used[n * m * 4 + 100] = {false};
    //memset(used, false, sizeof(used));
    queue<pair<int, int>> q;
    q.push({start[0], 0});
    q.push({start[1], 0});
    q.push({start[2], 0});
    q.push({start[3], 0});
    used[start[0]] = used[start[1]] = used[start[2]] = used[start[3]] = true;

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        int node = cur.first;
        int len = cur.second;

        if (node == finish[0] || node == finish[1] || node == finish[2] || node == finish[3])
            return len;

        for (auto chield : ss[node])
            if (!used[chield])
            {
                used[chield] = true;
                q.push({chield, len + 1});
            }
    }
    return -1;
}

void solve()
{
    intiss();
    cout << bfs();
}

int main()
{
    solve();
    return 0;
}
