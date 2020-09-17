//https://www.e-olymp.com/ru/problems/8680
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int res = 0;

    int ans[n];
    for (int i = 0; i < n; i++)
        cin >> ans[i];

    for (int i = 1; i < n - 1; i++)
        if (ans[i - 1] % 2 == 0 && ans[i + 1] % 2 == 0)
            res++;

    cout << res << endl;
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
