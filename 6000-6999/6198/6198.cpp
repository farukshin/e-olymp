// https://www.e-olymp.com/ru/problems/6198
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    scanf("%d\n", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    sort(a, a + n);
    sort(b, b + n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += 1ll * a[i] * b[n - i - 1];
    printf("%lld", ans);
}

int main()
{
    solve();
    return 0;
}
