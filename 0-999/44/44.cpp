// https://www.e-olymp.com/ru/problems/44
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i <= n; i++)
    {
        int curAns = INT_MAX;
        for(int j = 1; j <= (i / 2 + 1); j++)
            curAns = min(curAns, dp[j] + dp[i - j]);
        for(int j = 2; j <= sqrt(i) + 1; j++)
            if(i % j == 0 )
                curAns = min(curAns, dp[j] + dp[i / j]);
        dp[i] = curAns;
    }
    cout << dp[n];
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