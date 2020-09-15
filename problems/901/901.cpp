//https://www.e-olymp.com/ru/problems/901
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool operand(string& s, int i)
{
    if (s[i] == '-' || s[i] == '+' || s[i] == '*')
        return true;
    else
        return false;
}

void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 1; i < s.length() - 1; i++)
        if (operand(s, i) && !operand(s, i - 1) && !operand(s, i + 1))
            ans++;
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
