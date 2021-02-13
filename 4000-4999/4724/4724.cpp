//https://www.e-olymp.com/ru/problems/4724
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    cin >> s;

    cout << s[2] << endl
         << s[s.length() - 2] << endl
         << s.substr(0, 5) << endl
         << s.substr(0, s.length() - 2) << endl;

    for (int i = 0; i < s.size(); i++)
        if (i % 2 == 0)
            cout << s[i];
    cout << endl;

    for (int i = 0; i < s.size(); i++)
        if (i % 2 == 1)
            cout << s[i];
    cout << endl;

    for (int i = s.size() - 1; i >= 0; i--)
        cout << s[i];
    cout << endl;

    for (int i = s.size() - 1; i >= 0; i--)
        if (i % 2 == (s.size() % 2 ? 0 : 1))
            cout << s[i];
    cout << endl
         << s.size() << endl;
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