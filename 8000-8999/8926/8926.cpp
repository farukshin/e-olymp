//https://www.e-olymp.com/ru/problems/8926
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    ll ans = 0;
    for (auto ch : s)
        if (ch >= '0' && ch <= '9')
            if ((ch - '0') % 2 == 0)
                ans = ans * 10 + (ch - '0') + 1;
            else
                ans = ans * 10 + (ch - '0') - 1;

    cout << ans << endl;
    // int n;
    // cin >> n;
    // ld res = log2(n);
    // res = (res - trunc(res) == 0.0 ? res - 1 : floor(res));
    // cout << pow(2, res) << endl;
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
