//https://www.e-olymp.com/ru/problems/138
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int arr[6] = { 500, 200, 100, 50, 20, 10 }, ans = 0;

    for (int i = 0; i < 6; i++)
        if (n > 0)
        {
            int cur = n / arr[i];
            ans += cur;
            n -= cur * arr[i];
        }

    cout << (n > 0 ? -1 : ans) << endl;
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
