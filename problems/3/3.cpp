//https://www.e-olymp.com/ru/problems/3
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

ll mod = 2e9;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    if (n % 2 == 1)
        ans = (n / 2 + 1) * 12 + (n / 2) * 4;
    else
        ans = (n / 2) * 12 + (n / 2 - 1) * 4 + 8;
    cout << ans << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
