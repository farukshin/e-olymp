//https://www.e-olymp.com/ru/problems/2999
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll f(ll m, ll n)
{
    if(m == 0 || m == n) return 1;
    if(m > 0 && m < n)
        return f(m - 1, n - 1) + f(m, n - 1);
    return 0;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    cout << f(m, n);
}

int main()
{
    //cout.setf(std::ios::fixed); cout.precision(6);
    solve();
    return 0;
}