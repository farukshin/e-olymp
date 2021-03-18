//https://www.e-olymp.com/ru/problems/7460
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    int ans = ceil(1.0 * n / k) + ceil(1.0 * m / k);
    cout << ans;




}

int main()
{
    //cout.setf(std::ios::fixed); cout.precision(6);
    solve();
    return 0;
}