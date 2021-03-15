//https://www.e-olymp.com/ru/problems/9936
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll kolnum(ll a, ll b, int otbor = -1)
{
    if(a > b) return 0;

    ll res;
    if(otbor == -1)
        res = b - a + 1;
    else if(otbor == 0)
    {
        a = (a % 2 == 0 ? a : a + 1);
        b = (b % 2 == 1 ? b : b - 1);
        res = (b - a) / 2 + 1;
    }
    else if(otbor == 1)
    {
        a = (a % 2 == 0 ? a : a - 1);
        b = (b % 2 == 1 ? b : b + 1);
        res = (b - a) / 2 + 1;
    }

    return res;
}

ll minNNum(ll n)
{
    ll res = pow(10, n - 1);
    return res;
}

ll maxNNum(ll n)
{
    ll res = pow(10, n) - 1;
    return res;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n, m;
    cin >> n >> m;

    cout << kolnum(minNNum(n), min(maxNNum(n), m - 1)) << endl;

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