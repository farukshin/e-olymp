// https://www.e-olymp.com/ru/problems/5712
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while(a || b)
    {
        if((a & 1) != (b & 1))
            ans++;
        a >>= 1;
        b >>= 1;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}