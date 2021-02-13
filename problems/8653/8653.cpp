//https://www.e-olymp.com/ru/problems/8653
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    ll ans = 0;
    while (cin >> s)
    {
        ll cur;
        cin >> cur;
        if (s == "add")
            ans += cur;
        else if (s == "subtract")
            ans -= cur;
        else if (s == "multiply")
            ans *= cur;
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