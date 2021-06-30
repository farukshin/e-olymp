// https://www.e-olymp.com/ru/problems/1143
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);
    ll a, b;
    cin >> a >> b;
    ll ans = a / b;
    cout << (b == 0 || abs(a) % abs(b) != 0 || ans < -2147483648 || ans > 2147483647 ? "ERROR" : to_string(ans)) << endl;

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