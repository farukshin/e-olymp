// https://www.eolymp.com/ru/problems/10925
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 2, INT_MAX), b(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        a[i] = b[i];
        if (a[i - 1] > b[i])
            a[i - 1] = b[i];
    }

    int ans = 0;
    for (int i = 0; i <= n; i++)
        ans += a[i];
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
