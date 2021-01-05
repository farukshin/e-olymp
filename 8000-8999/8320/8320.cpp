//https://www.e-olymp.com/ru/problems/8320
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
        if ((s[i - 1] == ' ' || i == 0) && s[i] >= 'a' && s[i] <= 'z')
            cout << (char)toupper(s[i]);
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
    //int t; cin >> t; while(t--) solve();

    return 0;
}
