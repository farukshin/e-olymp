//https://www.e-olymp.com/ru/problems/918
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ld a, b;
    cin >> a >> b;

    if (a == 0.0 || b == 0.0)
        cout << 0 << endl;
    else if (a * b > 0.0)
        cout << (a > 0.0 ? 1 : 3) << endl;
    else
        cout << (a > 0.0 ? 4 : 2) << endl;
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
