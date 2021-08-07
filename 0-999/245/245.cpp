// https://www.e-olymp.com/ru/problems/245
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const double PI = atan(1) * 4;

void solve()
{
    int n, m, x {1}, y {1};
    cin >> n >> m;

    double del = LDBL_MAX;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            double curDel = abs(1.0 * i / j - PI);
            if(curDel < del)
                x = i, y = j, del = curDel;
        }
    cout << x << " " << y;
}

int main()
{
    cout.setf(std::ios::fixed);
    cout.precision(6);

    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}