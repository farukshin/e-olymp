//https://www.e-olymp.com/ru/problems/2470
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int ms[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> ms[i][j];

    bool success = true;
    for (int i = 0; i < n && success; i++)
        for (int j = i; j < n && success; j++)
            if (i == j && ms[i][j] != 0 || j > i && ms[j][i] != ms[i][j])
                success = false;

    cout << (success ? "YES" : "NO") << endl;
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
