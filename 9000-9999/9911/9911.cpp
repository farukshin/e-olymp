//https://www.e-olymp.com/ru/problems/9911
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll a, b;
    cin >> a >> b;
    if(a > b)
        swap(a, b);

    int ans;
    int kol = b - a - 1;
    if(kol % 2 == 0)
        ans = kol / 2;
    else
        ans = kol / 2 + ((b - 1) % 2 == 0 ? 1 : 0);

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
    //int t; cin >> t; while (t--) solve();

    return 0;
}