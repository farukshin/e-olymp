// https://www.e-olymp.com/ru/problems/9628
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<ll> dp(n, 0);
    vector<ll> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    dp[0] = 0;
    dp[1] = abs(v[1] - v[0]);
    for(int i = 2; i < n; i++)
        dp[i] = min(dp[i - 1] + abs(v[i - 1] - v[i]), dp[i - 2] + abs(v[i - 2] - v[i]));
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