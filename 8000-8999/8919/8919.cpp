//https://www.e-olymp.com/ru/problems/8919
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n;
    cin >> n;

    for(ll i = 1; i <= n; i++)
    {
        ll cur = pow(i, 3);
        if (cur < n)
            cout << cur << " ";
        else break;
    }
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