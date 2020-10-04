//https://www.e-olymp.com/ru/problems/951
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(ios::fixed);
    // cout.precision(0);
    int n;
    cin >> n;

    cout << (n / 1000) * 1000 + (n / 100 % 10) * 10 + (n % 100 / 10) * 100 + n % 10 << endl;
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
