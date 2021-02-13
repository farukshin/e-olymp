//https://www.e-olymp.com/ru/problems/8632
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll a;
    cin >> a;
    string s = to_string(a);
    ll ans = 0;
    for (auto ch : s)
        if (ch >= '0' && ch <= '9' && (ch - '0') % 2 == 1)
            ans++;
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