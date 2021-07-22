// https://www.e-olymp.com/ru/problems/9719
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    map<string, ll> mp;
    string s;
    ll n;

    while(cin >> s >> n)
        mp[s] = n;
    for(auto d : mp)
        cout << d.first << " " << d.second << "\n";
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}