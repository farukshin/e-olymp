//https://www.e-olymp.com/ru/problems/2165
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(0);

    string s;
    getline(cin, s);
    int i;
    for (i = 0;i < s.size();i++)
        if (s[i] != ' ')
            break;
    if (i)
        s = s.substr(i);

    for (i = s.size() - 1;i >= 0;i--)
        if (s[i] != ' ')
            break;
    if (i != s.size() - 1)
        s = s.substr(0, s.size() - (s.size() - i) + 1);


    if (s.size() > 0)
        cout << s[0];

    for (i = 1;i < s.size();i++)
        if (s[i - 1] == ' ' && s[i] == ' ')
            continue;
        else
            cout << s[i];

    cout << endl;
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