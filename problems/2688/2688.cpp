// https://www.e-olymp.com/ru/problems/2688
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    vector<ll> dp(n, 0);
    vector<ll> dp2(n, 0);

    for(int i = 1; i < n; i++)
    {
        ll cur1 = dp[i - 1] + (v[i] - v[i - 1]) * (v[i] - v[i - 1]);
        ll cur2 = (i == 1 ? LLONG_MAX : dp[i - 2] + 3 * (v[i] - v[i - 2]) * (v[i] - v[i - 2]));
        ll cur3 = (i == (n - 1) ? LLONG_MAX : dp[i - 1] + 3 * (v[i + 1] - v[i - 1]) * (v[i + 1] - v[i - 1]) + (v[i + 1] - v[i]) * (v[i + 1] - v[i]));

        dp[i] = min( cur1, min(cur2, cur3));


        ll cur4 = dp2[i - 1] + abs(v[i] - v[i - 1]);
        ll cur5 = (i == 1 ? LLONG_MAX : dp2[i - 2] + 3 * abs(v[i] - v[i - 2]));
        //ll cur6 = (i == (n-1) ? LLONG_MAX : dp2[i-1] + 3*abs(v[i]-v[i-2]) + abs(v[i+1]-v[i]));

        //dp2[i]=min(cur4, min(cur5,cur6));
        dp2[i] = min(cur4, cur5);
    }
    cout << dp2[n - 1] << " " << dp[n - 1];
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