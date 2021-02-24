//https://www.e-olymp.com/ru/problems/109
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, i, a = 1, b = 10;
    cin >> n;
    for (i = 1; n > 0; i++)
    {
        if (i < b)
        {
            n = n - a;
        }
        if (i == b - 1)
        {
            a++;
            b = b * 10;
        }
        if (n == 0)
        {
            cout << i;
        }
        else if (n < 0)
        {
            cout << 0;
        }
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
    //int t; cin >> t; while(t--) solve();

    return 0;
}