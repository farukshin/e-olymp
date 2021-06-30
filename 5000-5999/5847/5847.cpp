// https://www.e-olymp.com/ru/problems/5847
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int ans = n - 1;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    vector<ll> dp(n);
    vector<int> parr(n);
    dp[0] = 0;
    for(int i = 1; i < n; i++)
    {
        ll curAns;
        ll curAns1 = dp[i - 1] + abs(v[i] - v[i - 1]);
        ll curAns2 = (i == 1 ? LLONG_MAX : dp[i - 2] + 3 * abs(v[i] - v[i - 2]));
        if(curAns1 >= curAns2)
            parr[i] = i - 2, curAns = curAns2;
        else
            parr[i] = i - 1, curAns = curAns1;
        dp[i] = curAns;
    }
    cout << dp[n - 1] << " ";
    stack<int> st;
    int cur = n - 1;
    while(cur != 0)
    {
        st.push(cur);
        cur = parr[cur];
    }
    //st.push(0);
    cout << st.size() << "\n";
    // while(!st.empty())
    // 	cout<<st.top()+1<<" ", st.pop();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}