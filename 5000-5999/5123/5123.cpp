//https://www.e-olymp.com/ru/problems/5123
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int a, b;
    cin >> a >> b;

    int ans = b;
    while(b != 1)
    {
        if(b % 2 == 0)
            b /= 2;
        else
            b = b * 3 + 1;
        if(ans < b)
            ans = b;
    }

    cout << a << " " << ans << endl;

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