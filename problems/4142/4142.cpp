// https://www.e-olymp.com/ru/problems/4142
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll q, x, ans, p;
    cin >> q;
    for(ll i = 0; i < q; ++ i)
    {
        cin >> x;
        ans = 0;
        p = 1;
        while(x > 0)
        {
            if(x % 2 == 0)
                ans += p;
            x >>= 1;
            p <<= 1;
        }
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}