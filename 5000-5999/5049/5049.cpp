//https://www.e-olymp.com/ru/problems/5049
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    getline(cin, s);
    if (s.size() == 0)
        return;

    cout << s[0];
    for (int i = 1; i < s.size(); i++)
        if (s[i] == ' ' && s[i - 1] == ' ')
            continue;
        else
            cout << s[i];

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
