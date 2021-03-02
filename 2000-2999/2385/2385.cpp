//https://www.e-olymp.com/ru/problems/2385
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll factorial(ll b, ll a = 1, ll mod = 0)
{
    ll ans = 1;
    for(ll i = a; i <= b; i++)
        if(mod == 0) ans *= i;
        else ans = (ans * i) % mod;
    return ans;
}

ll binpow(ll a, ll n, ll m)
{
    if (n == 0)
        return 1 % m;

    if (n % 2 == 1)
        return (binpow(a, n - 1, m) * a) % m;
    else
        return binpow((a * a) % m, n / 2, m);
}

ll placement(ll k, ll n, ll mod = 0)
{
    return factorial(n, n - k + 1, mod);
}

ll placement_repeat(ll k, ll n, ll mod = 0)
{
    return binpow(n, k, (mod == 0 ? LLONG_MAX : mod));
}

ll permutation(ll n, ll mod = 0)
{
    return factorial(n, 1, mod);
}

ll permutation_repeat(vector<ll> v, ll mod = 0)
{
    ll k = 0;
    for(auto d : v)
        k += d;
    ll ans = factorial(k, 1, mod), th = 1;

    for(auto d : v)
        th *= factorial(d, 1, mod);

    if(mod == 0)
        ans /= th;
    else ans = (ans / th) % mod;
    return ans;
}

ll combination(ll k, ll n, ll mod = 0)
{
    return factorial(n, 1, mod) / (factorial(n - k, 1, mod) * factorial(k, 1, mod));
}

ll combination_repeat(ll k, ll n, ll mod = 0)
{
    if(n - 1 > k)
        return factorial(n + k - 1, n, mod) / factorial(k, 1, mod);
    else
        return factorial(n + k - 1, k + 1, mod) / factorial(n - 1, 1, mod);
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    //cout<< placement(3,5) <<endl;
    //cout<< placement_repeat(5,3) <<endl<<endl;

    cout << permutation(n) << endl;
    //vector<ll> v = {2,1,4};
    //cout<< permutation_repeat(v) <<endl<<endl;

    //cout<< combination(4,10) <<endl;
    //cout<< combination_repeat(20, 4) <<endl;
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