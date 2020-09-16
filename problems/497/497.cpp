//https://www.e-olymp.com/ru/problems/497
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, l = 0, r = 32;
    cin >> n;
    bool success = true;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (!success)
            continue;
        if (a > l)
            l = a;
        if (b < r)
            r = b;
        if (l > r)
            success = false;
    }

    cout << (success ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

   //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
