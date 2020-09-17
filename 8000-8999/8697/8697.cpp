//https://www.e-olymp.com/ru/problems/8697
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string str;
    cin >> str;
    bool success = str.length() % 2 == 0;
    if (success)
        if (str.substr(0, str.length() / 2) != str.substr(str.length() / 2, str.length() / 2))
            success = false;

    cout << (success ? "yes" : "no") << endl;
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
