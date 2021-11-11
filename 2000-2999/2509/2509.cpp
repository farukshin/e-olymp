// https://www.e-olymp.com/ru/problems/2509
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

void solve()
{
    int n, p;
    int dp[1 << 14];
    scanf("%d %d", &n, &p);

    {
        int m[15];
        for (int i = 0; i < n; i++)
            scanf("%d", &m[i]);

        for (int mask = 0; mask < (1 << n); mask++)
        {
            int curSum = 0;
            for (int i = 0; i < n; i++)
                if (mask & (1 << i))
                    curSum += m[i];
            dp[mask] = (curSum == 1000 ? p : curSum);
        }
    }

    for (int mask = 0; mask < (1 << n); mask++)
        //for(int x = 0; x < mask; x++)
        for (int x = mask; x > 0; x = (x - 1) & mask)
            if ((mask & x) == x)
            {
                int cur = dp[mask ^ x] + dp[x];
                if (cur < dp[mask])
                    dp[mask] = cur;
            }

    printf("%d", dp[(1 << n) - 1]);
}

int main()
{
    solve();
    return 0;
}
