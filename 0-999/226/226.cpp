// https://www.e-olymp.com/ru/problems/226
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{

    int n, k, ans = 1;
    cin >> n >> k;

    int cur;
    for(int i = 0; i < k; i++)
    {
        cin >> cur;
        ans = ans - 1 + cur;
    }
    cout << max(0, n - ans);


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