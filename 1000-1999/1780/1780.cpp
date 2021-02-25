//https://www.e-olymp.com/ru/problems/1780
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int g (int n)
{
    return n ^ (n >> 1);
}

ll g (ll n)
{
    return n ^ (n >> 1);
}

int rev_g (int g)
{
    int n = 0;
    for (; g; g >>= 1)
        n ^= g;
    return n;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n;
    while(cin >> n)
    {
        cout << g(n) << endl;
    }

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