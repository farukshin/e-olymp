// https://www.e-olymp.com/ru/problems/6020
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n;
vector<string> v;
ll MOD = pow(2, 31) - 1;

int runx[4] = {0, 1, 0, -1};
int runy[4] = {1, 0, -1, 0};

ll dpRun()
{
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, LLONG_MAX));
    dp[1][0] = 1;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(v[i - 1][j - 1] == '.')
            {
                ll d1 = (dp[i][j - 1] == LLONG_MAX ? 0 : dp[i][j - 1]);
                ll d2 = (dp[i - 1][j] == LLONG_MAX ? 0 : dp[i - 1][j]);
                dp[i][j] = (!d1 && !d2 ? LLONG_MAX : (d1 + d2) % MOD);
            }

    return dp[n][n];
}

bool bfs()
{
    queue<pair<int, int>> q;
    q.push({0, 0});
    vector<vector<bool>> used(n, vector<bool>(n, false));

    while(!q.empty())
    {
        auto cur = q.front();
        int a = cur.first;
        int b = cur.second;

        if(a == n - 1 && b == n - 1)
            return true;

        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int aa = a + runx[i];
            int bb = b + runy[i];
            if(aa >= 0 && aa < n && bb >= 0 && bb < n && v[aa][bb] == '.' && !used[aa][bb])
                used[aa][bb] = true, q.push({aa, bb});
        }
    }

    return false;
}

void solve()
{
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    ll ans = dpRun();
    if(ans != LLONG_MAX)
        cout << ans;
    else
        cout << (bfs() ? "THE GAME IS A LIE" : "INCONCEIVABLE");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}