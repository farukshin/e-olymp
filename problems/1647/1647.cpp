// https://www.e-olymp.com/ru/problems/1647
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    ll n, k;
    cin >> n >> k;
    n = n >> k;
    n = n << k;
    cout << n;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    return 0;
}