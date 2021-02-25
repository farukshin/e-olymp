//https://www.e-olymp.com/ru/problems/5255
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    cin >> s;

    map<int, int> mp;
    int mx = 0, ans = 10;

    for(auto ch : s)
        if(ch >= '0' && ch <= '9')
        {
            int n = (ch - '0');
            mp[n]++;
            if(mx < mp[n])
                mx = mp[n];
        };

    for(auto d : mp)
        if(d.second == mx && d.first < ans)
            ans = d.first;
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
    //int t; cin >> t; while (t--) solve();

    return 0;
}