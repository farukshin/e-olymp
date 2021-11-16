// https://www.e-olymp.com/ru/problems/7504
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

int min(int a, int b)
{
    return a <= b ? a : b;
}

int max(int a, int b)
{
    return a >= b ? a : b;
}

void solve()
{
    int mod = 102;
    bool v[210][210] = {false};

    for (int k = 0; k < 3; k++)
    {
        int a, b, c, d;
        scanf("%d %d %d %d\n", &a, &b, &c, &d);
        a += mod, b += mod, c += mod, d += mod;
        for (int i = min(a, c); i < max(a, c); i++)
            for (int j = min(b, d); j < max(b, d); j++)
                v[i][j] = true;
    }
    int ans = 0;
    for (int i = 0; i < 210; i++)
        for (int j = 0; j < 210; j++)
            ans += (v[i][j] == true ? 1 : 0);
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
