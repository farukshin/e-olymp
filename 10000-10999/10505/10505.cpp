// https://www.e-olymp.com/ru/problems/9761
#include <cstdio>
using namespace std;
typedef long long ll;

void solve()
{
    int n, cnt, a;
    scanf("%d\n", &n);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &cnt);
        for (int j = 1; j <= cnt; j++)
        {
            scanf("%d", &a);
            if (a == i)
                ans++;
        }
        scanf("\n");
    }
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
