// https://www.e-olymp.com/ru/problems/5097
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, x;
    cin >> n >> x;
    int ans = 0;
    while(n--)
        ans = (ans << 1) + (x & 1), x = x >> 1;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    // cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    return 0;
}