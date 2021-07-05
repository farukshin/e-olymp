// https://www.e-olymp.com/ru/problems/4051
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> dp(n, 0);
    dp[0] = 1;
    for(int i = 1; i < n; i++)
        for(int j = 1; j <= k; j++)
            if(i - j >= 0)
                dp[i] += dp[i - j];
    cout << dp[n - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}