// https://www.e-olymp.com/ru/problems/9639
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n, k;
    cin >> n;
    map<ll, ll> mp;
    set<ll> st;
    for(ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        mp[b] += a;
        st.insert(b);
    }
    cin >> k;

    for(auto d : st)
    {
        k -= mp[d];
        if(k <= 0)
        {
            cout << d;
            break;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}