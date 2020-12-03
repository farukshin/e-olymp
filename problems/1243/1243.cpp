//https://www.e-olymp.com/ru/problems/1243
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);
    int m;
    cin >> m;

    ll arr[m] = {0};
    for (int i = 0; i < m; i++)
        cin >> arr[i];

    ll ans = arr[0];
    for (int i = 1; i < m; i++)
        ans = lcm(arr[i], ans);

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}