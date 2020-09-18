//https://www.e-olymp.com/ru/problems/1160
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int ans = -1, max = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (b == 1 && a > max)
            ans = i + 1, max = a;
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
