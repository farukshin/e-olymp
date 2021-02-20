//https://www.e-olymp.com/ru/problems/7368
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    cout.setf(std::ios::fixed);
    cout.precision(2);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        vector<int> v(n, 0);
        int mn = 11, mx = -1;
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
            mn = min(mn, v[j]);
            mx = max(mx, v[j]);
        }
        ld ans = 0;
        int k = 0;
        for (int j = 0; j < n; j++)
            if (v[j] != mn && v[j] != mx)
                k++, ans += v[j];
        ans /= k;
        cout << ans << " ";
    }
    cout << endl;
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