//https://www.e-olymp.com/ru/problems/390
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

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    cin >> s;
    vector<ll> v;
    map<char, ll> mp;
    for(auto ch : s)
        mp[ch]++;
    for(auto ch : mp)
        v.push_back(ch.second);
    cout << permutation_repeat(v) << endl;
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