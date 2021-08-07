// https://www.e-olymp.com/ru/problems/2103
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for(int i = 0; i < m; i++)
        cin >> v[i];
    sort(begin(v), end(v), greater<int>());

    ll ans = 0;
    for(int i = 0; i < n; i++)
        ans += v[i];
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(10);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}