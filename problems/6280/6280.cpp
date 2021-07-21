// https://www.e-olymp.com/ru/problems/6280
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
ll ans = 0;
vector<int> v(9);

void backtraking(int pos, int curSum)
{
    if(pos == n)
    {
        if(curSum == m)
            ans++;
        return;
    }
    else if(pos == n - 1)
    {
        if(curSum <= m && m - curSum <= 9)
            ans++;
        return;
    }

    if(curSum > m)
        return;

    for(int i = (pos == 0 ? 1 : 0); i <= 9; i++)
        backtraking(pos + 1, curSum + i);
}

void solve()
{
    cin >> n >> m;
    backtraking(0, 0);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(4);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}