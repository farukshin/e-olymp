//https://www.e-olymp.com/ru/problems/2098
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(0);

    ll n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    reverse(v.begin(), v.end());
    for (auto s : v)
        cout << s << " ";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}