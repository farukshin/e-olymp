//https://www.e-olymp.com/ru/problems/992
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            int cur;
            cin >> cur;
            if (j > i && cur == 1)
                ans++;
        }
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
