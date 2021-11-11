// https://www.e-olymp.com/ru/problems/872
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

int n, k, v[10005];
int cnt(int len)
{
    int res = 0;
    for (int i = 0; i < n; i++)
        res += v[i] / len;
    return res;
}

void solve()
{
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    int l = 0, r = 1e7 + 5;
    while (r - l > 1)
    {

        int mid = (r + l) / 2;
        if (cnt(mid) >= k)
            l = mid;
        else
            r = mid;
    }
    printf("%lld", l);
}

int main()
{
    solve();
    return 0;
}
