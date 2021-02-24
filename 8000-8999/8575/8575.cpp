//https://www.e-olymp.com/ru/problems/8575
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, ans = 0;
    cin >> n;
    while(n)
    {
        int cur;
        if(n >= 500)
        {
            cur = n / 500;
            ans += cur;
            n -= cur * 500;
        }
        else if(n >= 200)
        {
            cur = n / 200;
            ans += cur;
            n -= cur * 200;
        }
        else if(n >= 100)
        {
            cur = n / 100;
            ans += cur;
            n -= cur * 100;
        }
        else if(n >= 50)
        {
            cur = n / 50;
            ans += cur;
            n -= cur * 50;
        }
        else if(n >= 20)
        {
            cur = n / 20;
            ans += cur;
            n -= cur * 20;
        }
        else if(n >= 10)
        {
            cur = n / 10;
            ans += cur;
            n -= cur * 10;
        }
        else if(n >= 5)
        {
            cur = n / 5;
            ans += cur;
            n -= cur * 5;
        }
        else if(n >= 2)
        {
            cur = n / 2;
            ans += cur;
            n -= cur * 2;
        }
        else if(n >= 1)
        {
            cur = n / 1;
            ans += cur;
            n -= cur * 1;
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