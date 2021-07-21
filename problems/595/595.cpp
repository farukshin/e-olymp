// https://www.e-olymp.com/ru/problems/595
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n;
vector<int> dp, v;

void solve()
{
    cin >> n;
    v.resize(n);
    dp.resize(n, 0);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    dp[0] = 0;
    dp[1] = v[1];
    for(int i = 2; i < n; i++)
        if(i != 2)
            dp[i] = max(dp[i - 2], dp[i - 3]) + v[i];
        else
            dp[i] = dp[i - 2] + v[i];
    cout << dp[n - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL), cout.tie(NULL); cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}