// https://www.e-olymp.com/ru/problems/9423
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ld x, k;
    cin >> x >> k;

    ld c = sqrt(abs(x));
    ld a = c * c * c * c + k * k * k;
    ld y = log10(a) * log10(a) * log10(a) + cos(x) * cos(x) * cos(x) * cos(x) * cos(x);
    cout << y;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}