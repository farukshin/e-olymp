// https://www.e-olymp.com/ru/problems/179
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    int cur;
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> cur;
        if(cur < v[i])
            ans += v[i] - cur;
    }
    cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}