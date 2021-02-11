//https://www.e-olymp.com/ru/problems/19
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    long long a[100], n, k, i = 0; cin >> n; k = 0;
    while (n != 0) { a[i++] = n % 10; n = n / 10; } 
    n = i; for (i = 0;i < n / 2;i++) if (a[i] == a[n - 1 - i]) k++;

    if (n % 2 == 0)
        cout << k << endl;
    else
        cout << k + 1 << endl;
    // else
    //     cout << max(n, m) / 2 + 1 << endl;

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