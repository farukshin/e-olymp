// https://www.e-olymp.com/ru/problems/10507
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    ll ans = 0;
    while(getline(cin, s))
    {
        for(auto ch : s)
            if(ch >= '0' && ch <= '9')
                ans += int(ch - '0');
    }
    cout << ans;
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}