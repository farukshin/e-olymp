// https://www.e-olymp.com/ru/problems/4820
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m, ans = 0;
pair<int, int> start, finish;

int bfs(pair<int, int> start, vector<vector<bool>> &v)
{
    vector<vector<bool>> used(n, vector<bool>(m, false));
    used[start.first][start.second] = true;

    queue<pair<pair<int, int>, int>> q;
    q.push({{start.first, start.second}, 0});

    vector<int> rx = {0, 1, 0, -1};
    vector<int> ry = {-1, 0, 1, 0};

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();

        int a = cur.first.first;
        int b = cur.first.second;
        int len = cur.second;

        if(a == finish.first && b == finish.second)
            return len;

        for(int i = 0; i < 4; i++)
        {
            int aa = a + rx[i];
            int bb = b + ry[i];
            if(aa >= 0 && aa < n && bb >= 0 && bb < m && !v[aa][bb] && !used[aa][bb])
                used[aa][bb] = true, q.push({{aa, bb}, len + 1});
        }
    }
    return -1;

}

void solve()
{

    cin >> n >> m;
    vector<vector<bool>> v(n, vector<bool>(m, true));


    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            int cur;
            cin >> cur;
            if(!cur)
                v[i][j] = false;
        }

    cin >> start.second >> start.first >> finish.second >> finish.first;
    --start.second, --start.first, --finish.second, --finish.first;
    cout << bfs(start, v);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}