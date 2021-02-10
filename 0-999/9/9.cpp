//https://www.e-olymp.com/ru/problems/9
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n; cin >> n;

    if (n == 1)
        cout << 10 << ' ' << 0;
    else if (n == 2)
        cout << 1 << ' ' << 22;
    else if (n == 3)
        cout << 6 << ' ' << 123;
    else if (n == 4)
        cout << 12 << ' ' << 1124;
    else if (n == 5)
        cout << 40 << ' ' << 11125;
    else if (n == 6)
        cout << 30 << ' ' << 111126;
    else if (n == 7)
        cout << 84 << ' ' << 1111127;
    else if (n == 8)
        cout << 224 << ' ' << 11111128;
    else if (n == 9)
        cout << 144 << ' ' << 111111129;

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