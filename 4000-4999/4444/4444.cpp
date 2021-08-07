// https://www.e-olymp.com/ru/problems/4444
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int v[10][10], dp[10][10];

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            dp[i][j] = INT_MAX;

    for(int i = 8; i >= 1; i--)
        for(int j = 1; j <= 8; j++)
            cin >> v[i][j];

    dp[0][0] = 0;
    for(int i = 1; i <= 8; i++)
        for(int j = 1; j <= 8; j++)
            dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + v[i][j];

    cout << dp[8][8] << "\n";

    stack<string> st;
    int i = 8, j = 8;
    char ch = 'a' + i - 1;
    string s = ch + to_string(j);
    st.push(s);
    while(true)
    {
        if(j == 0 || dp[i - 1][j] <= dp[i][j - 1] && dp[i - 1][j] <= dp[i - 1][j - 1]) --i;
        else if(i == 0 || dp[i][j - 1] <= dp[i - 1][j] && dp[i][j - 1] <= dp[i - 1][j - 1]) --j;
        else --j, --i;

        if(i == 0 && j == 0)
            break;
        ch = 'a' + i - 1;
        s = ch + to_string(j);
        st.push(s);
    }

    while(!st.empty())
    {
        auto cur = st.top();
        st.pop();
        cout << cur << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(10);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}