// https://www.e-olymp.com/ru/problems/3142
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    map<int, set<int>> dp;
    set<int> cur;
    cur.insert(1);
    dp[0] = cur;

    for(int i = 1; i <= c; i++)
        for(auto d : dp[i - 1])
            dp[i].insert(d + a), dp[i].insert(d + b);
    cout << dp[c].size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}