// https://www.e-olymp.com/ru/problems/3967
//#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;
vector<int> v;

bool success(int dist)
{
    int ans = 0;
    for(int i = 0; i < n; i++)
        if(v[i] < dist) break;
        else ans += v[i] / dist;
    return ans >= k;
}

void solve()
{
    scanf("%d %d\n", &n, &k);
    v.resize(n);
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    sort(begin(v), end(v), greater<int>());

    int l = 0, r = 10000000;
    while(r - l > 1)
    {
        int mid = (r + l) / 2;
        if(success(mid))
            l = mid;
        else
            r = mid;
    }
    l = (success(l + 1) ? l + 1 : l);
    printf("%d", l);
}

int main()
{
    solve();
    return 0;
}
