// https://www.e-olymp.com/ru/problems/2391
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    if(n == 0)
    {
        cout << 0;
        return;
    }

    ll ans = a;
    ans += ( n % 60 == 0 ? (n / 60) * b : (n / 60 + 1) * b);
    cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}