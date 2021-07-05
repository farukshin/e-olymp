//https://www.e-olymp.com/ru/problems/4019
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n + 1][m + 1], dp[n + 2][m + 2];

    memset(arr, 1e6, sizeof(arr));
    memset(dp, 1e6, sizeof(dp));

    dp[0][1] = 0, dp[1][0] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            dp[i][j] = arr[i][j] + min(dp[i][j - 1], dp[i - 1][j]);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            dp[i][j] = arr[i][j] + min(dp[i][j - 1], dp[i - 1][j]);

    cout << dp[n][m] << endl;

    stack<pair<int, int>> st;
    int i = n, j = m;
    st.push({i, j});

    if (i == 1 && j == 1)
        return;

    while (true)
    {
        if (dp[i - 1][j] <= dp[i][j - 1])
            i--;
        else
            j--;
        st.push({i, j});
        if (i == 1 && j == 1)
            break;
    }

    while(!st.empty())
        cout << st.top().first << " " << st.top().second << "\n", st.pop();
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