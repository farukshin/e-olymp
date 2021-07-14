// https://www.e-olymp.com/ru/problems/4212
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int t, n, a, b, c;
    cin >> t >> n >> a >> b >> c;
    int ans;
    if (t == 1)
        ans = max(a + b + c - 2 * n, 0);
    else
        ans = min(min(a, b), c);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}