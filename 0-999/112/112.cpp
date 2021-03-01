//https://www.e-olymp.com/ru/problems/112
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    cout.setf(std::ios::fixed);
    cout.precision(2);

    ld t1, t2, t3;
    cin >> t1 >> t2 >> t3;
    ld ans = 1 / (1 / t1 + 1 / t2 + 1 / t3);
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