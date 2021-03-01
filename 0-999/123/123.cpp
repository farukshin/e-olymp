//https://www.e-olymp.com/ru/problems/123
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int fact_pow (int n, int k)
{
    int res = 0;
    while (n)
    {
        n /= k;
        res += n;
    }
    return res;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;

    cout << min(fact_pow(n, 5), fact_pow(n, 2)) << endl;

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