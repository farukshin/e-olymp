//https://www.e-olymp.com/ru/problems/9718
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    int k;
    cin >> k;

    map<string, ll> mp;
    string s;
    ll n;
    for(int i = 0; i < k; i++)
    {
        cin >> s >> n;
        mp[s] = n;
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        cin >> s;
        cout << (!mp.count(s) ? -1 : mp[s]) << "\n";
    }
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}