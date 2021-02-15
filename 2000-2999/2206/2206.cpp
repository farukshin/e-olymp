//https://www.e-olymp.com/ru/problems/2206
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);
    ll a, b, c;
    cin >> a >> b >> c;
    ll sum = a + b + c;

    if (sum % 3 != 0)
        cout << "IMPOSSIBLE" << endl;
    else
        cout << (a - sum / 3 > 0 ? a - sum / 3 : 0) + (b - sum / 3 > 0 ? b - sum / 3 : 0) + (c - sum / 3 > 0 ? c - sum / 3 : 0) << endl;


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