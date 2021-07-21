// https://www.e-olymp.com/ru/problems/6085
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
pair<int, int> start;
vector<string> v;
vector<vector<int>> dp;

bool isboard(int a, int b)
{
    return a == 0 || a == (n - 1) || b == 0 || b == (m - 1);
}

void bfs()
{
    queue<pair<int, pair<int, int>>> q;
    dp[start.first][start.second] = 0;
    q.push({0, start});

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        auto curLen = cur.first;
        auto curNode = cur.second;
        int a = curNode.first, b = curNode.second;

        if(isboard(a, b))
        {
            cout << curLen;
            return;
        }

        for(int i = b - 1; i >= 0; i--)
            if(v[a][i] == '1')
                break;
            else if(dp[a][i] > curLen + 1)
                dp[a][i] = curLen + 1, q.push({curLen + 1, {a, i}});

        for(int i = b + 1; i < m; i++)
            if(v[a][i] == '1')
                break;
            else if(dp[a][i] > curLen + 1)
                dp[a][i] = curLen + 1, q.push({curLen + 1, {a, i}});

        for(int i = a - 1; i >= 0; i--)
            if(v[i][b] == '1')
                break;
            else if(dp[i][b] > curLen + 1)
                dp[i][b] = curLen + 1, q.push({curLen + 1, {i, b}});

        for(int i = a + 1; i < n; i++)
            if(v[i][b] == '1')
                break;
            else if(dp[i][b] > curLen + 1)
                dp[i][b] = curLen + 1, q.push({curLen + 1, {i, b}});
    }
    cout << -1;
}


void solve()
{
    cin >> n >> m;
    v.resize(n);
    dp.resize(n, vector<int>(m, INT_MAX));

    for(int i = 0; i < n; i++)
        cin >> v[i];
    cin >> start.first >> start.second;
    --start.first, --start.second;
    bfs();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(5);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}