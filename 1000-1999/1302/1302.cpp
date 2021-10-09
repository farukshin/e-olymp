// https://www.e-olymp.com/ru/problems/1302
//#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int ll;

void eratosfen(int &n, vector<bool> &prime)
{
    prime.resize(n + 1);
    fill(prime.begin(), prime.end(), true);

    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; ++i)
        if (prime[i])
            if (i * 1ll * i <= n)
                for (int j = i * i; j <= n; j += i)
                    prime[j] = false;
}

void solve()
{
    int n = 1e6 + 5;
    vector<bool> prime;
    eratosfen(n, prime);

    ll v[n];
    int cnt = -1;
    ll MAXN = 1ll * n * n;
    for(int i = 2; i <= n; i++)
        if(prime[i])
        {
            ll cur = 1ll * i * i;
            while(cur < MAXN)
                v[++cnt] = cur, cur *= i;
        }
    sort(v, v + cnt);

    int q;
    //cin>>q;
    scanf("%d", &q);
    for(int i = 0; i < q; i++)
    {
        ll l, r;
        //cin>>l>>r;
        scanf("%lld %lld\n", &l, &r);
        printf("%d\n", upper_bound(v, v + cnt, r) - upper_bound(v, v + cnt, l - 1));
        //cout<< upper_bound(v, v+cnt, r) - upper_bound(v, v+cnt, l-1)<<"\n";
    }
}

int main()
{
    solve();
    return 0;
}
