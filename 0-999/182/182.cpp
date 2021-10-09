// https://www.e-olymp.com/ru/problems/182
//#pragma GCC target("avx2")
//#pragma GCC optimize("O3")
//#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef unsigned int ui;

void solve()
{
    ui n, g, h;
    scanf("%u %u %u\n", &n, &g, &h);
    if(g + h > n)
    {
        printf("-1");
        return;
    }

    ui cntFree = n - (g + h);
    pair<ui, ui> v[n];
    for(int i = 0; i < n; i++)
    {
        ui a, b;
        scanf("%u %u\n", &a, &b);
        v[i] = {(a <= b ? b - a : a - b), (a << 16) + b};
    }
    sort(v, v + n);
    ui ans = 0, cntg = 0, cnth = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        ui a = v[i].second >> 16;
        ui b = v[i].second & 0xFFFF;

        if(a >= b && cntg < g)
            cntg++, ans += a;
        else if(a >= b && cntg >= g && cntFree > 0)
            cntg++, ans += a, cntFree--;
        else if(a < b && cnth < h)
            cnth++, ans += b;
        else if(a < b && cnth >= h && cntFree > 0)
            cnth++, ans += b, cntFree--;
        else if(a >= b)
            cnth++, ans += b;
        else
            cntg++, ans += a;
    }
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
