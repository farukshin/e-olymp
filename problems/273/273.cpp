//https://www.e-olymp.com/ru/problems/273
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

long binpow(long a, long n, long m)
{
    if (n == 0)
        return 1 % m;

    if (n % 2 == 1)
        return (binpow(a, n - 1, m) * a) % m;
    else
        return binpow((a * a) % m, n / 2, m);
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(4);

    long x, n, m;
    cin >> x >> n >> m;
    // string s;
    // getline(cin, s);

    cout << binpow(x, n, m) << endl;
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