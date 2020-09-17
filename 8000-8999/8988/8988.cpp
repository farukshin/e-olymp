//https://www.e-olymp.com/ru/problems/8988
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    getline(cin, s);

    if (s.length() == 0)
        return;
    else if (s.length() == 1)
    {
        cout << s;
        return;
    }

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            cout << "ups";
            i += 1;
        }
        else
            cout << s[i];
    }
    //cout << endl;
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
