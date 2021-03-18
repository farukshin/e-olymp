// https://www.e-olymp.com/ru/problems/661
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    int n, m, k;
    cin >> n >> k >> m;

    if(n % k == 0 && k % m == 0)
    {
        cout << (n / k) * (k / m);
        return;
    }
    else if(m > k)
    {
        cout << 0;
        return;
    }

    int ans = 0;
    while(n >= k)
    {
        int zag = n / k;
        int det = (k / m) * zag;
        int ost = (k % m) * zag;
        ans += det;
        n %= k;
        n += ost;
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    return 0;
}