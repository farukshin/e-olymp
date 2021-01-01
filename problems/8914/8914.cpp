//https://www.e-olymp.com/ru/problems/8914
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    ll n, sum = 0;

    while (cin >> n)
    {
        if (n == 0)
            break;
        if (n % 2 == 0)
            sum += n;
    }
    cout << sum << endl;

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
