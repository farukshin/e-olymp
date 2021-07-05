//https://www.e-olymp.com/ru/problems/4822
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll a, b;
    cin >> a >> b;

    b = b % 109;
    bool rev = a < 0;
    a = abs(a);
    a = a % 109;
    ll ans = (!rev ? (a * b) % 109 : (109 - (a * b) % 109) % 109);
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