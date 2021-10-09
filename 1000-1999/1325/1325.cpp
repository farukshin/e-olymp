// https://www.e-olymp.com/ru/problems/1325
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

void solve()
{
    int n, s, f;
    scanf("%d %d %d", &n, &s, &f);
    if(s > n || f > n)
    {
        printf("0");
        return;
    }

    long long ans = 1;
    if(f < s)
    {
        int t = s;
        s = f, f = t;
    }

    for(int i = 1; i <= n; i++)
    {
        int cur;
        scanf("%d", &cur);
        if(s <= i && f >= i) ans *= cur;
    }
    printf("%lld", ans);
}

int main()
{
    solve();
    return 0;
}
