//https://www.e-olymp.com/ru/problems/500
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int l, w, h;
    cin >> l >> w >> h;

    ld itog = 1.0 * (l * h * 2 + w * h * 2) / 16;
    cout << ceil(itog) << endl;
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
    while (t--) solve();

    return 0;
}
