// https://www.e-olymp.com/ru/problems/1405
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    ll sum[1 << 16];
    for (int mask = 0; mask < (1 << n); mask++)
        for (int i = 0; i < n; i++)
            if (mask & (1 << i))
            {
                sum[mask] = sum[mask ^ (1 << i)] + v[i];
                break;
            }

    bool can[1 << 16];
    for (int mask = 1; mask < (1 << n); mask++)
    {
        ll cursum = sum[mask];
        for (int i = mask; i > 0; i = (i - 1) & mask)
            if (sum[i] * 2 == cursum)
            {
                can[mask] = true;
                break;
            }
    }

    ll res = 0;
    for (int i = 1; i < (1 << n); i++)
        for (int j = i; j > 0; j = (j - 1) & i)
            if (can[j] && can[i ^ j])
            {
                ll curans = (sum[j] / 2) * (sum[i ^ j] / 2);
                if (curans > res)
                    res = curans;
            }

    printf("%lld", res);
}

int main()
{
    solve();
    return 0;
}
