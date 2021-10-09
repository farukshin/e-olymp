// https://www.e-olymp.com/ru/problems/10801
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    for(auto ch : s)
        ans += int(ch - '0');
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
