//https://www.e-olymp.com/ru/problems/8621
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    string s = to_string(n);
    sort(s.begin(), s.end());

    cout << (s[0] == s[1] && s[2] == s[3] && s[1] != s[2] ? "YES" : "NO") << endl;

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