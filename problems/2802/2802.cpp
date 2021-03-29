// https://www.e-olymp.com/ru/problems/2802
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void bts(int n)
{
    string ans = "";
    if(n == 0)
    {
        cout << 0 << "\n";
        return;
    }

    while(n > 0)
    {
        ans = (n & 1 == 1 ? "1" : "0") + ans;
        n = n >> 1;
    }
    cout << ans << "\n";

}

void solve()
{
    int n;
    while(cin >> n)
        bts(n);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}