//https://www.e-olymp.com/ru/problems/8984
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    string s;
    getline(cin, s);
    ll ans = 0;

    for (ll i = 0; i < s.size() - 1;i++)
    {
        char ch = s[i];
        char ch2 = s[i + 1];
        if (ch == '/' && ch2 == '/')
            ans++, i++;
        else if (ch == '*' && ch2 == '*')
            ans++, i++;
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%')
            ans++;
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
    //int t; cin >> t; while (t--) solve();

    return 0;
}
