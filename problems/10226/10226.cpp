// https://www.e-olymp.com/ru/problems/10226
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = (a - c) + (b - c) + c + d;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    // cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    return 0;
}