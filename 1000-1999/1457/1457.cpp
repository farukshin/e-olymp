// https://www.e-olymp.com/ru/problems/1457
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int max, cur;
    scanf("%d", &max);
    bool ans = true;
    for (int i = 1; i < n && ans; i++)
    {
        scanf("%d", &cur);
        if (cur < max && max + cur > m)
            ans = false;
        if (cur > max)
            max = cur;
    }
    if (ans)
        printf("Yes");
    else
        printf("No");
}

int main()
{
    solve();
    return 0;
}
