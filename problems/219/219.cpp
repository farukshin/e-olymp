//https://www.e-olymp.com/ru/problems/219
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll res = a  * b * c;
    ll n = res / d;
    for(ll i = n - 1;; i++)
        if(i * d >= res)
        {
            cout << i << endl;
            return;
        }

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}