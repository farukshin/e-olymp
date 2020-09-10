//https://www.e-olymp.com/ru/problems/7365
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0;i < n;i++)
    {
        int cur;
        cin >> cur;
        if (cur < 30)
            ans++;
    }

    int mod = (ans * 200) % 900;
    int mol = ((ans * 200) + mod) / 900;

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
