//https://www.e-olymp.com/ru/problems/8546
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    ld ans = 0;
    for(int i = 1; i <= n; i++)
        ans += 1.0 / (i * (i + 1));

    cout << ans;
}

int main()
{
    cout.setf(std::ios::fixed);
    cout.precision(6);

    solve();
    return 0;
}