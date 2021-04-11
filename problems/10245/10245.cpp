// https://www.e-olymp.com/ru/problems/10245
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << v[a - 1][b];
    }


}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}