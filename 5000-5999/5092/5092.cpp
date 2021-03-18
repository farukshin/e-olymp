// https://www.e-olymp.com/ru/problems/5092
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<int> dp;
//vector<int> dp2;

int getDp(int i)
{
    if(i < 0) return 0;
    else return dp[i];
}

// int getDp2(int i)
// {
// 	if(i<0) return 1;
// 	else return dp2[i];
// }

void solve()
{
    int n;
    cin >> n;
    dp.resize(n, 0);
    dp[0] = 1;

    for(int i = 1; i < n; i++)
        dp[i] = dp[i] + getDp(i - 1) + getDp(i - 2);
    cout << dp[n - 1];
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(6);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}