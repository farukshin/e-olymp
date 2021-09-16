// https://www.e-olymp.com/ru/problems/1113
#include <cstdio>
//#include <iostream>

using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    scanf("%d %d", &n, &k);
    ll ans = 1ll * (2 * n + 1ll * n * (k - 1)) * k / 2 - 1ll * (2 * 3 + 2 * (k - 2)) * (k - 1) / 2;
    printf("%lld", ans);
}

int main()
{
    solve();
    return 0;
}
