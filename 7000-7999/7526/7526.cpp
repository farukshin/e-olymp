//https://www.e-olymp.com/ru/problems/7526
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n, t;
    cin >> n >> t;

    ll ans = 0;
    for(int i = 0; i < n && t > 0; i++)
    {
        ll cur;
        cin >> cur;
        t -= cur;
        if(t >= 0)
            ans++;
    }
    cout << ans;
}

int main()
{
    //cout.setf(std::ios::fixed); cout.precision(6);
    solve();
    return 0;
}