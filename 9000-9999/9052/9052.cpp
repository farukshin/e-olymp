// https://www.eolymp.com/ru/problems/9052
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, m, a, b;
    scanf("%lld %lld %lld %lld", &n, &m, &a, &b);
    a = (a < m * b ? a : m * b);
    ll ans = (n / m) * a + (a < (n % m) * b ? a : (n % m) * b) + n;
    printf("%lld", ans);
}

int main()
{
    solve();
    return 0;
}
