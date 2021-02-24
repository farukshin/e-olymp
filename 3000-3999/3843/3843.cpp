//https://www.e-olymp.com/ru/problems/3843
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

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
    // cout.setf(std::ios::fixed);
    // cout.precision(2);
    int a, b;
    //cin>>a>>b;
    vector<bool> prime;
    int mx = 1e7 + 5;

    eratosfen(mx, prime);

    int count[mx];
    int lastSum = 0;
    for(int i = 1; i < mx; i++)
    {
        count[i] = lastSum + prime[i];
        lastSum = count[i];
    }

    while(cin >> a >> b)
    {
        int ans = count[b] - count[a] + prime[a];
        cout << ans << endl << endl;
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