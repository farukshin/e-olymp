//https://www.e-olymp.com/ru/problems/957
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    cout.setf(ios::fixed);
    cout.precision(3);
    int n;
    cin >> n;
    ll ans = 0;
    while (n)
    {
        ans += n % 10;
        n /= 10;
    }

    cout << sqrt(ans) << endl;
    //cout << ans << endl;
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
