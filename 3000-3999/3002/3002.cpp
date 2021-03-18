//https://www.e-olymp.com/ru/problems/3002
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;

    ll ans1 = 0, ans2 = 0;
    ll a, b;
    while(cin >> a >> b)
        ans1 += (a > b ? 1 : 0), ans2 += (b > a ? 1 : 0);

    cout << (ans1 > ans2 ? 1 :   ans1 < ans2 ? 2 : 0 );
}

int main()
{
    //cout.setf(std::ios::fixed); cout.precision(6);
    solve();
    return 0;
}