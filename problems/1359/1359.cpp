// https://www.e-olymp.com/ru/problems/1359
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ld a, b, c, d;
    cin >> a >> b >> c >> d;

    ld sm  = a * b + c * d;
    cout << floor(sqrt(sm));
}

int main()
{
    //cout.setf(std::ios::fixed); //cout.precision(2);
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}