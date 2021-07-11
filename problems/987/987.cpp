// https://www.e-olymp.com/ru/problems/987
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    ll dp[n];
    vector<ll> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    dp[1] = v[1] - v[0], dp[2] = v[2] - v[0];

    for(int i = 3; i < n; i++)
        dp[i] = min(dp[i - 2], dp[i - 1]) + v[i] - v[i - 1];

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