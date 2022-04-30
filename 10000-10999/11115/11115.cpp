// https://www.eolymp.com/ru/problems/11115
#include <cstdio>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
using namespace std;

int min(int a, int b)
{
    return (a <= b ? a : b);
}

void solve()
{
    int n, m, ans = 100, cur;
    scanf("%d %d\n", &n, &m);
    int ma = 10, mb = 10;
    bool used[9]{false};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cur);
        used[cur - 1] = true;
        ma = min(ma, cur);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &cur);
        if (used[cur - 1])
            ans = min(ans, cur);
        mb = min(mb, cur);
    }
    ans = min(ans, ma * 10 + mb);
    ans = min(ans, mb * 10 + ma);
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
