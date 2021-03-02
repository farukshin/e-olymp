//https://www.e-olymp.com/ru/problems/1315
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll check(string s)
{
    string cur = "";
    for(auto ch : s)
        if(ch >= '0' && ch <= '9' || ch == '-')
            cur += ch;
    ll ans = stoi(cur);
    return ans;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s1, s2;
    while(cin >> s1 >> s2)
    {
        ll a = check(s1), b = check(s2);
        ll ans = a + b;
        cout << ans << endl;
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
    //int t; cin >> t; while (t--) solve();

    return 0;
}