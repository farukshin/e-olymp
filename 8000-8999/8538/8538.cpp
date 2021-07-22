// https://www.e-olymp.com/ru/problems/8538
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    while(n)
    {
        ans += n % 3 + 1;
        n /= 3;
    }

    cout << ans - 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL), cout.tie(NULL); cout.setf(std::ios::fixed); cout.precision(3);
    solve();
    return 0;
}