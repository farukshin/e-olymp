//https://www.e-olymp.com/ru/problems/9001
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b;
    cin >> a >> b;
    int d = b - a + 1, ans;

    if (a == 0 || b == 0 || a < 0 && b > 0)
        ans = 0;
    else if (a > 0)
        ans = 1;
    else if (b < 0)
        ans = (d % 2 == 0 ? 1 : -1);
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
