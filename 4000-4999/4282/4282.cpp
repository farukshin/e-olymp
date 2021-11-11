// https://www.e-olymp.com/ru/problems/4282
//#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    scanf("%d %d", &n, &k);
    ll v[100005];
    for (int i = 0; i < n; i++)
        scanf("%lld", &v[i]);
    sort(v, v + n);
    ll ans = v[k - 1] - v[0];
    for (int i = k; i < n; i++)
        ans = min(ans, v[i] - v[i - k + 1]);
    printf("%lld", ans);
}

int main()
{
    solve();
    return 0;
}
