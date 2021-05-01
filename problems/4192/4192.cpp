// https://www.e-olymp.com/ru/problems/4192
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m, a, b, k = 0, l = 0;
    cin >> n >> m;
    while (n--)
    {
        cin >> a >> b;
        k += a;
        l += b;
    }
    cout << (k + m - 1) / m + (l + m - 1) / m ;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}