// https://www.eolymp.com/ru/problems/10997
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

void solve()
{
    int n, t, ans = 0;
    scanf("%d %d\n", &n, &t);
    int v[n];
    for (int i = 0; i < n; i++)
        scanf("%d\n", &v[i]);
    int l = 0, r = 0;
    int cnt = v[l];
    while (true)
    {
        if (l == n)
            break;
        while (r < (n - 1) && (cnt + v[r + 1]) <= t)
            cnt += v[++r];
        if (cnt <= t && cnt > 0 && r - l + 1 > ans)
            ans = r - l + 1;
        cnt -= v[l];
        l++;
    }
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
