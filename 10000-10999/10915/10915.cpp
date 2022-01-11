// https://www.eolymp.com/ru/problems/10915
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    ll ans = 1;
    while (cin >> s)
        for (auto ch : s)
            if (ch == 'X')
                ans *= 10;
            else if (ch == 'Y')
                ans *= 6;
            else if (ch == 'Z')
                ans *= 4;

    cout << ans;
}

int main()
{
    solve();
    return 0;
}
