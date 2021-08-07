// https://www.e-olymp.com/ru/problems/4423
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a > b) swap(a, b);
    if(c > d) swap(c, d);
    int ans = min(b, d) - max(a, c) + 1;
    cout << (ans <= 0 ? 0 : ans);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(10);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}