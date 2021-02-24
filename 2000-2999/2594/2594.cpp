//https://www.e-olymp.com/ru/problems/2594
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n, ans = 0;
    cin >> n;
    map<pair<int, int>, int> mp;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        mp[ {a, b}]++;
        if (ans < mp[ {a, b}])
            ans = mp[ {a, b}];
    }

    cout << ans << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
