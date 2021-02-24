//https://www.e-olymp.com/ru/problems/1494
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> ans(n);
    for (int i = 0; i < m + k; i++)
    {
        int cur;
        cin >> cur;
        ans[--cur] = 1;
    }
    if (m + k == n)
    {
        cout << 0 << endl;
        return;
    }
    cout << n - m - k << endl;
    for (int i = 0; i < n; i++)
        if (!ans[i])
            cout << i + 1 << " ";
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
