//https://www.e-olymp.com/ru/problems/8625
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int a = n / 10, b = (n / 100) * 10 + n % 10, c = n % 100;

    int ans = 9;
    ans = (a > 9 ? max(a, ans) : ans);
    ans = (b > 9 ? max(b, ans) : ans);
    ans = (c > 9 ? max(c, ans) : ans);

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