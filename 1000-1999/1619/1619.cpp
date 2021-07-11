// https://www.e-olymp.com/ru/problems/1619
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    ll dp[n];
    ll v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];

    if(n == 1)
    {
        cout << v[0];
        return;
    }
    else if(n == 2)
    {
        cout << max(v[0], v[1]);
        return;
    }

    dp[0] = v[0], dp[1] = max(v[0], v[1]);


    for(int i = 2; i < n; i++)
        dp[i] = max(dp[i - 2] + v[i], dp[i - 1]);

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