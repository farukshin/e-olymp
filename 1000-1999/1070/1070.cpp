// https://www.e-olymp.com/ru/problems/1070
//#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    scanf("%d\n", &n);
    pair<int, bool> p1, p2;
    p1.second = true;
    p2.second = false;
    vector<pair<int, bool>> v;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d\n", &a, &b);
        p1.first = a, p2.first = b;
        v.push_back(p1);
        v.push_back(p2);
    }
    sort(begin(v), end(v));
    int cnt = 0, ans = 0, pre = 0;
    for(auto d : v)
        if(d.second && cnt == 0)
            pre = d.first, cnt++;
        else if(d.second && cnt != 0)
            cnt++;
        else if(!d.second)
            if(--cnt == 0)
                ans += d.first - pre, pre = 0;
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
