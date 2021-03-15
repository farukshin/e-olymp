//https://www.e-olymp.com/ru/problems/6975
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void check(ll n, set<int> &st)
{
    while(n)
    {
        if(st.count(n % 10) == 0)
            st.insert(n % 10);
        n /= 10;
    }
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n;
    while(cin >> n)
    {
        set<int> st;
        ll ans = 0;
        while(st.size() != 10)
        {
            ans++;
            ll cur = n * ans;
            check(cur, st);
        }
        cout << ans << "\n";
    }

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}