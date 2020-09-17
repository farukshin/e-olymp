//https://www.e-olymp.com/ru/problems/8698
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{

    int cur;
    ll ans = 0;
    bool success = false;
    int arr[9] = { 0 };
    while (cin >> cur)
    {
        arr[cur]++;
        ans++;
        if (arr[cur] > 1)
        {
            cout << ans << endl;
            return;
        }
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
