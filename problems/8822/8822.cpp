//https://www.e-olymp.com/ru/problems/8822
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;

    ll ans = 1;
    for (int i = 1; i <= n; i++)
    {
        int k = 0;
        if (i == n && i != 1)
            k = 9;
        else if (i == n && i == 1)
            k = 8;
        else if (i == 1)
            k = 8;
        else
            k = 9;
        ans *= k;
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
    //int t; cin >> t; while (t--) solve();

    return 0;
}