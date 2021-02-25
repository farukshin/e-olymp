//https://www.e-olymp.com/ru/problems/5083
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int sm(int n)
{
    int res = 0;
    while(n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;

    int mn = 1e9, ans;

    for(int i = 0; i < n; i++)
    {
        int cur, curSum;
        cin >> cur;
        curSum = sm(cur);
        if(curSum <= mn)
            mn = curSum, ans = cur;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}