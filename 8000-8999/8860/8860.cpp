//https://www.e-olymp.com/ru/problems/8860
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
    int a = n / 100, b = (n / 10) % 10, c = n % 10;

    ll ans = a * 100 + b * 10 + c
             + a * 100 + c * 10 + b
             + b * 100 + c * 10 + a
             + b * 100 + a * 10 + c
             + c * 100 + a * 10 + b
             + c * 100 + b * 10 + a;

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