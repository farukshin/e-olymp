//https://www.e-olymp.com/ru/problems/206
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(3);

    unsigned short int k, w, a1, b1, a2, b2, a3, b3;
    cin >> k >> w >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    bool fl = ( ( ( k <= b1 ) && ( w >= a1 ) )
                || ( ( k <= b2 ) && ( w >= a2 ) )
                || ( ( k <= b3 ) && ( w >= a3 ) )
                || ( ( k <= b1 + b2 ) && ( w >= a1 + a2 ) )
                || ( ( k <= b2 + b3 ) && ( w >= a2 + a3 ) )
                || ( ( k <= b1 + b3 ) && ( w >= a1 + a3 ) )
                || ( ( k <= b1 + b2 + b3 ) && ( w >= a1 + a2 + a3 ) ) );

    cout << ( fl ? "YES" : "NO" );


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