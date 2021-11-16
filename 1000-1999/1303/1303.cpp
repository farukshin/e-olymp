// https://www.e-olymp.com/ru/problems/1303
//#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;

int v[500005];
ll ans;

void merge(int l, int mid, int r)
{
    int i = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (v[i] <= v[j])
        {
            i++;
        }
        else
        {
            j++;
            ans += mid - i + 1;
        }
    }
    sort(v + l, v + r + 1);
}

void mergesort(int l, int r)
{
    if (l < r)
    {
        int mid = (r + l) / 2;
        mergesort(l, mid);
        mergesort(mid + 1, r);
        merge(l, mid, r);
    }
}

void solve()
{
    int n;
    while (scanf("%d", &n), n != 0)
    {
        ans = 0;
        for (int i = 0; i < n; i++)
            scanf("%d", &v[i]);
        mergesort(0, n - 1);
        printf("%lld\n", ans);
    }
}

int main()
{
    solve();
    return 0;
}
