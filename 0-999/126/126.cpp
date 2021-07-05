// https://www.e-olymp.com/ru/problems/126
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, p, q, kve, k;
    cin >> n >> p >> q >> k;
    kve = n / (p * q);

    int ans = 1;
    while(k > kve * q)
        k -= kve * q, ans++;
    cout << ans << " ";

    ans = 1;
    while(k > kve)
        k -= kve, ans++;
    cout << ans;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}