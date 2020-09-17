//https://www.e-olymp.com/ru/problems/19
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;

    int ans = 0;
    if (s.length() == 1 || s.length() % 2 == 1)
        ans++;

    for (int i = s.length() / 2 - 1; i >= 0; i--)
        if (s[i] == s[s.length() - i - 1])
            ans++;
        else
            break;

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
