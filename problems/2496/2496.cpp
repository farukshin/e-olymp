//https://www.e-olymp.com/ru/problems/2496
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(0);

    string s, ans = "", cur;
    getline(cin, s);
    bool fl = false;
    for (auto ch : s)
        if (!fl && ch == '(')
            fl = true;
        else if (fl && ch == ')')
        {
            fl = false;
            reverse(cur.begin(), cur.end());
            ans += cur;
            cur = "";
        }
        else if (fl)
            cur += ch;
        else
            ans += ch;


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