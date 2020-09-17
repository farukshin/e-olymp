//https://www.e-olymp.com/ru/problems/8687
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    std::cout.setf(std::ios::fixed);
    std::cout.precision(4);
    ld a, b, c;
    while (cin >> a >> b >> c)
    {
        cout << a + b + c << endl;
    }

    //cout << 1.0 * sum / ans << endl;
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
