//https://www.e-olymp.com/ru/problems/8278
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
        b = (b % 2 == 1 ? b : b - 1);
        res = (b - a) / 2 + 1;
    }
    //printf("a=%d b=%d res=%d\n", a,b,res);

    return res;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(9);

    //prime_init();

    ll a, b;
    cin >> a >> b;
    if(a % 2 != 0) a++;
    if(b % 2 != 0) b--;

    ll ans = 0;
    if(a <= b)
        ans = (a + b) * ((b - a) / 2 + 1) / 2;

    cout << ans << "\n";

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}