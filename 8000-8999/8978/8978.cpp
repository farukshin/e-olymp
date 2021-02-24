//https://www.e-olymp.com/ru/problems/8978
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    string s2, sRev;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
            s2 += s[i];
        if (s.length() % 2 == 1 && i % 2 == 0 || s.length() % 2 == 0 && i % 2 == 1)
            sRev = s[i] + sRev;
    }

    cout << s[1] << s[3] << s[9] << endl
         << s[0] << s[1] << s[s.length() - 1] << endl
         << s.substr(s.length() - 5) << endl
         << s.substr(0, s.length() - 4) << endl
         << s2 << endl
         << s2.length() << endl
         << sRev << endl;
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
