//https://www.e-olymp.com/ru/problems/1461
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int check(int n)
{
    int res = 1;
    while(n)
    {
        res *= n % 10;
        n /= 10;
    }
    return res;
}

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n, k;
    cin >> n >> k;
    int mn = 1e9;
    int ans;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        int  p = check(cur);
        if(abs(k - p) < mn)
        {
            ans = cur;
            mn = abs(k - p);
        }
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