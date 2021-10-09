// https://www.e-olymp.com/ru/problems/33
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

bool is13(int n)
{
    bool res = false;
    while(n)
    {
        if(n % 100 == 13)
        {
            res = true;
            break;
        }
        n /= 10;
    }
    return res;
}

void solve()
{
    int n = 500005;
    vector<bool> prime;
    eratosfen(n, prime);

    ll l, r, ans = 0;
    scanf("%lld %lld\n", &l, &r);
    for(int i = l; i <= r; i++)
        if(prime[i] && !is13(i)) ans++;

    printf("%lld\n", ans);

}

int main()
{
    solve();
    return 0;
}
