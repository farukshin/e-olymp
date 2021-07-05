// https://www.e-olymp.com/ru/problems/4055
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n + 5, INT_MAX);
    vector<int> par(n + 5);

    dp[1] = 0;
    if(n >= 2)
        dp[2] = 1, par[2] = 1;
    if(n >= 2)
        dp[3] = 1, par[3] = 1;
    for(int i = 4; i <= n; i++)
    {
        int d1 = (i % 2 == 0 ? dp[i / 2] + 1 : INT_MAX);
        int d2 = (i % 3 == 0 ? dp[i / 3] + 1 : INT_MAX);
        int d3 = dp[i - 1] + 1;
        int mn = min(d1, min(d2, d3));

        if(mn == d1)
            par[i] = i / 2;
        else if(mn == d2)
            par[i] = i / 3;
        else if(mn == d3)
            par[i] = i - 1;
        dp[i] = mn;
    }
    cout << dp[n] << "\n";
    stack<int> st;
    st.push(n);
    while(n != 1)
    {
        n = par[n];
        st.push(n);
    }

    while(!st.empty())
        cout << st.top() << " ", st.pop();
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