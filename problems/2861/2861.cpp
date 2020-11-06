//https://www.e-olymp.com/ru/problems/2861
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll a, b, ans;
    cin >> a >> b;
    if (a % 2 == 0)
        a++;
    if (b % 2 == 0)
        b--;
    if (a > b)
        ans = 0;
    else
    {
        ll d = 2, n = (b - a) / 2 + 1;
        ans = (2 * a + d * (n - 1)) * n / 2;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
