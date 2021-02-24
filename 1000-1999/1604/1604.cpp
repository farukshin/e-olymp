//https://www.e-olymp.com/ru/problems/1604
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n;

    cin >> n;
    if (n < 0)
        n *= -1;
    string s = to_string(n);

    bool succes = false;
    ll ans = 1;
    for (int i = 0; i < s.size(); i++)
    {
        auto ch = s[i];
        if (ch >= '0' && ch <= '9' && (ch - '0') % 2 == 0)
            ans *= (ch - '0'), succes = true;
    }

    cout << (succes ? ans : -1) << endl;

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