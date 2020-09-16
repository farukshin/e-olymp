//https://www.e-olymp.com/ru/problems/8987
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
            cout << 'b';
        else if (s[i] == 'b')
            cout << 'a';
        else
            cout << s[i];
    }

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
