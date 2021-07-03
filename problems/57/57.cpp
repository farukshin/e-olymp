//https://www.e-olymp.com/ru/problems/57
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ld x1, y1, z1, x, y, d;
    cin >> x >> y >> x1 >> y1 >> z1;
    d = sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y) + z1 * z1);
    cout << 1 / d;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}