//https://www.e-olymp.com/ru/problems/908
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int ans = 0, sum = 0;
    while (n--)
    {
        int cur;
        cin >> cur;
        if (cur % 6 == 0 && cur > 0)
            sum += cur, ans++;
    }
    cout << ans << " " << sum << endl;
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
