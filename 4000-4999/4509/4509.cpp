// https://www.e-olymp.com/ru/problems/4509
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

void solve()
{
    int v[1000000] = {0};
    char s[20];

    int n, cur;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        for (int j = 0; j < t; j++)
        {
            scanf("%d", &cur);
            v[cur] |= (1 << i);
        }
    }

    int q;
    scanf("%d\n", &q);
    while (q--)
    {
        int x, y;
        scanf("%s %d %d\n", s, &x, &y);
        x--;
        y--;
        int ans = 0;
        if (s[0] == 'U')
            for (int j = 1; j < 1000000; j++)
                ans += ((v[j] & (1 << x)) || (v[j] & (1 << y)));
        else
            for (int j = 1; j < 1000000; j++)
                ans += ((v[j] & (1 << x)) && (v[j] & (1 << y)));
        printf("%d\n", ans);
    }
}

int main()
{
    solve();
    return 0;
}
