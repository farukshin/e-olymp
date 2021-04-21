// https://www.e-olymp.com/ru/problems/2612
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b;
    cin >> a >> b;
    ll ans = 1;
    while(a != b)
    {
        if(a > b) swap(a, b);
        b -= a;
        ans++;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}