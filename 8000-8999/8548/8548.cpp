// https://www.eolymp.com/ru/problems/8548
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k, cur;
    scanf("%d %d\n", &n, &k);
    int v[105] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cur);
        v[cur % k]++;
    }

    int ans = 0;
    for (int i = 0; i <= 100; i++)
    {
        if (v[i] == 0)
            continue;
        if (v[i] && (2 * i) % k == 0)
            ans += (v[i] * (v[i] - 1) / 2);

        for (int j = i + 1; j <= 100; j++)
        {
            if (v[j] == 0)
                continue;
            if ((i + j) % k == 0)
                ans += v[i] * v[j];
        }
    }
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
