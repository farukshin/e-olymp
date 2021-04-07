// https://www.e-olymp.com/ru/problems/3757
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a1, a2, b1, b2, c1, c2;
    scanf("%d.%d", &a1, &a2);
    scanf("%d.%d", &b1, &b2);
    scanf("%d.%d", &c1, &c2);
    //cin>>a>>a2>>b>>b2>>c>>c2;
    //cout<<a<<" "<<a2<<" "<<b<<" "<<b2<<" "<<c<<" "<<c2<<"\n";

    ll a = a1 * 100 + a2;
    ll b = b1 * 100 + b2;
    ll c = c1 * 100 + c2;

    a += b;
    ll ans =  trunc(a / c);

    cout << ans;

}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}