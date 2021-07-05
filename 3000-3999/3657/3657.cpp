// https://www.e-olymp.com/ru/problems/3657
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    stack<ll> st;
    set<ll> sett;
    bool success = true;
    while(cin >> n)
        if(st.empty() || st.top() != n)
        {
            st.push(n), success = success && (sett.count(n) ? false : true);
            sett.insert(n);
        }
    cout << (!success ? "Nongrouped" : "Grouped");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}