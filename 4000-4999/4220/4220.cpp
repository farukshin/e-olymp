// https://www.e-olymp.com/ru/problems/4220
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    while(scanf("%d\n", &n))
    {
        if(n == 0) break;
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++)
        {
            int a, b, c, d;
            scanf("%d:%d-%d:%d", &a, &b, &c, &d);
            v.push_back({a * 60 + b, c * 60 + d});
        }
        sort(begin(v), end(v));
        bool success = true;
        for(int i = 1; i < n; i++)
            if(v[i].first < v[i - 1].second)
                success = false;

        if(success) printf("no conflict\n");
        else printf("conflict\n");
    }
}

int main()
{
    solve();
    return 0;
}
