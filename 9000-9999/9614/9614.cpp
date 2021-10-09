// https://www.e-olymp.com/ru/problems/9614
//#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;
typedef long long int ll;

int n, m;
ll dp[251][51];
int v[51];

ll f(int n, int k)
{
    if(k == 0 && n == 0) return 1;
    else if(k == 0 || n < 0) return 0;
    else if(dp[n][k] != -1) return dp[n][k];
    return dp[n][k] = f(n - v[k], k) + f(n, k - 1);
}

void solve()
{
    scanf("%d %d\n", &n, &m);
    for(int i = 1; i <= m; i++)
        scanf("%d", &v[i]);
    // for(int i=0;i<251;i++)
    // 	for(int j=0;j<51;j++)
    // 		dp[i][j] = -1;
    memset(dp, -1, sizeof(dp));
    printf("%lld", f(n, m));
}

int main()
{
    solve();
    return 0;
}
