// https://www.e-olymp.com/ru/problems/1612
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    int ans = 0;
    bool run = true;
    while(run)
    {
        ans++;
        if(n & 1)
            run = false;
        n = n >> 1;
    }
    n = n << ans;
    cout << n;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}