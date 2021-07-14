// https://www.e-olymp.com/ru/problems/4255
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n;
vector<ll> v;
vector<ll> f;
int len;

void sqrt_init()
{
    len = (int) sqrt (n) + 1;
    f.resize(len);
    for (int i = 0; i < n; ++i)
        f[i / len] += v[i];
}

void sqrt_upd(int ind, ll k)
{
    ll diff = k - v[ind];
    v[ind] = k;
    f[ind / len] += diff;
}

void sqrt_get(int l, int r)
{
    ll sum = 0;
    int c_l = l / len,   c_r = r / len;
    if (c_l == c_r)
        for (int i = l; i <= r; ++i)
            sum += v[i];
    else
    {
        for (int i = l, end = (c_l + 1) * len - 1; i <= end; ++i)
            sum += v[i];
        for (int i = c_l + 1; i <= c_r - 1; ++i)
            sum += f[i];
        for (int i = c_r * len; i <= r; ++i)
            sum += v[i];
    }
    cout << sum << "\n";
}

void solve()
{
    int q;
    cin >> n >> q;
    v.resize(n);
    fill(v.begin(), v.end(), 0);
    sqrt_init();

    for(int i = 0; i < q; i++)
    {
        char ch;
        int a, b;
        cin >> ch >> a >> b;
        if(ch == 'A')
            sqrt_upd(a - 1, b);
        else if(ch == 'Q')
            sqrt_get(a - 1, b - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}