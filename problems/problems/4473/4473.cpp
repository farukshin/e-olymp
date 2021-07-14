// https://www.e-olymp.com/ru/problems/4473
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, sqrt_len;
vector<ll> v, f;

void sqrt_init()
{
    sqrt_len = (int) sqrt (n) + 1;
    f.resize(sqrt_len, LLONG_MIN);
    for (int i = 0; i < n; ++i)
        f[i / sqrt_len] = max(f[i / sqrt_len], v[i]);
}

void sqrt_get(int l, int r)
{
    ll mx = LLONG_MIN;
    int c_l = l / sqrt_len,   c_r = r / sqrt_len;
    if (c_l == c_r)
        for (int i = l; i <= r; ++i)
            mx = max(mx, v[i]);
    else
    {
        for (int i = l, end = (c_l + 1) * sqrt_len - 1; i <= end; ++i)
            mx = max(mx, v[i]);
        for (int i = c_l + 1; i <= c_r - 1; ++i)
            mx = max(mx, f[i]);
        for (int i = c_r * sqrt_len; i <= r; ++i)
            mx = max(mx, v[i]);
    }
    cout << mx << "\n";
}

void solve()
{
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sqrt_init();
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        if(a > b) swap(a, b);
        sqrt_get(a, b);
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}