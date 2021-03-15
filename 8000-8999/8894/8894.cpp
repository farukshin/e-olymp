//https://www.e-olymp.com/ru/problems/8894
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;

    bool usl1 = n > 0 && n % 2 == 0, usl2 = n < 0 && n % 2 != 0;
    //if (!usl1 && !usl2 || n == 0)
    if (!usl1 && !usl2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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