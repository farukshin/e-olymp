// https://www.e-olymp.com/ru/problems/2328
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

set<ll> st;

void loadSt()
{
    const ll MAXN = 1000 * 1000 * 1000;
    for(ll i = 2; i < 100000; i++)
    {
        ll cur = i;
        while(cur <= MAXN)
            cur *= i, st.insert(cur);
    }
}

void solve()
{
    loadSt();
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        ll cur;
        cin >> cur;
        cout << (st.count(cur) ? "YES" : "NO") << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(5);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}