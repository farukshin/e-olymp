//https://www.e-olymp.com/ru/problems/7365
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ld cur, ves = 30.0;

void solve()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }

    ld ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> cur;
        if (cur < ves)
            ans++;
    }

    ld mol = ceil((ans * 200) / 900);

    cout << mol << " " << ans << endl;
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
