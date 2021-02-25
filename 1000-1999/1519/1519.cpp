//https://www.e-olymp.com/ru/problems/1519
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll g (ll n)
{
    return n ^ (n >> 1);
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, ii;
    ll k;
    cin >> ii;
    for(int i = 0; i < ii; i++)
    {
        cin >> n >> k;
        cout << g(k) << endl;
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