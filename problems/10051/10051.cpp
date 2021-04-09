// https://www.e-olymp.com/ru/problems/10051
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if(a == b || b == c || a == c)
        cout << 0;
    ll mx = max(a, max(b, c)), mn = min(a, min(b, c));

    if(a != mx && a != mn) cout << 1;
    else if(b != mx && b != mn) cout << 2;
    else if(c != mx && c != mn) cout << 3;


}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}