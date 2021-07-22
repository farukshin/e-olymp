//https://www.e-olymp.com/ru/problems/4757
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll getsum4(string s)
{
    if(s.length() % 4)
        s = string(4 - s.length() % 4, '0') + s;
    ll ans = 0, cur = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1')
            cur += pow(2, (4 - i % 4) - 1);

        if(i % 4 == 3)
            ans += cur, cur = 0;
    }
    return ans;
}

void solve()
{
    string s;
    cin >> s;

    ll k = getsum4(s);
    cout << (k % 15 == 0 ? "YES" : "NO");
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}