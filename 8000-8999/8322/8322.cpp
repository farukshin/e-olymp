//https://www.e-olymp.com/ru/problems/8322
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);
    int n;
    cin >> n;
    ll ans = 0;
    if (n == 1)
        ans = 5 + 10 + 15 + 20 + 25 + 30 + 35 + 40 + 45 + 50;
    else if (n == 2)
        ans = 1 + 4 + 7 + 10 + 13 + 16 + 19 + 22 + 25 + 28;
    else if (n == 3)
        ans = 4 + 8 + 12 + 16 + 20 + 24 + 28 + 32 + 36 + 40;
    else if (n == 4)
        ans = 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19;
    else if (n == 5)
        ans = 2 + 4 + 6 + 8 + 10 + 12 + 14 + 16 + 18 + 20;
    else if (n == 6)
        ans = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
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
