//https://www.e-olymp.com/ru/problems/1207
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAXARR = 1e6 + 1;
int dp[MAXARR] = {0};
const int MOD = 1000000;

int get(int i)
{
    if(dp[i] != 0)
        return dp[i];

    int ans = get(floor(1.0 * i - sqrt(i))) + get(floor(log(1.0 * i))) + get(floor(1.0 * i * sin(i) * sin(i)));
    ans %= MOD;
    dp[i] = ans;
    return ans;
}

void solve()
{
    int cur;
    dp[0] = 1;
    for(int i = 1; i <= MAXARR; i++)
        dp[i] = get(i);

    while(cin >> cur, cur != -1)
        cout << dp[cur] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}