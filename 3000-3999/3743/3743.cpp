//https://www.e-olymp.com/ru/problems/3743
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(4);

    int a, b;
    while(cin >> a >> b)
    {
        if(a != 0 && b != 0)
        {
            ll ans = (2 * a - b);
            cout << ans << endl;
        }
        else
            break;
    }
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