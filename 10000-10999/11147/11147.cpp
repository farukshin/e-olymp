// https://www.eolymp.com/ru/problems/11147
#include <cstdio>
#include <map>
using namespace std;

void solve()
{
    int n, k, cur;
    scanf("%d %d\n", &n, &k);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cur);
        mp[cur]++;
    }
    int ans = 0;
    for (auto d : mp)
    {
        int da = k - d.first;
        if (d.first > k || da < d.first)
            break;
        else if (da == d.first)
            ans += d.second - 1;
        else if (mp[da] > 0)
            ans += min(mp[da], mp[d.first]);
    }
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
