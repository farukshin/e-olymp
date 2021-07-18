// https://www.e-olymp.com/ru/problems/1686
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll dist(int a, int b, int c, int d)
{
    return abs(a - c) + abs(b - d);
}

void solve()
{
    ll c, n;
    cin >> c >> n;
    --n;

    ll a = n / c;
    ll b = n % c;
    ll ans = dist(a, b, 0, 0);
    ans = max(ans, dist(a, b, c - 1, c - 1));
    ans = max(ans, dist(a, b, c - 1, 0));
    ans = max(ans, dist(a, b, 0, c - 1));

    ans += 1;

    cout << ans / 60 << " " << ans % 60;
}

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL), cout.tie(NULL); cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}