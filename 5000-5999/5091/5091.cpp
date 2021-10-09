// https://www.e-olymp.com/ru/problems/5091
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    scanf("%d", &n);
    ll dp[46][2];
    dp[0][0] = dp[0][1] = 0;
    dp[1][0] = dp[1][1] = 1;
    for(int i = 2; i <= n; i++)
    {
        dp[i][0] = dp[i - 1][1] + dp[i - 1][0];
        dp[i][1] = dp[i - 1][0];
    }
    printf("%lld", dp[n][0] + dp[n][1]);
}

int main()
{
    solve();
    return 0;
}
