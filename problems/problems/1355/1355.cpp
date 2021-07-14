// https://www.e-olymp.com/ru/problems/1355
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    ll ans = pow(10, n) - pow(10, n - 1);
    ans -= 8 * pow(9, n - 1);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}