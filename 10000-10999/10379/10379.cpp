// https://www.e-olymp.com/ru/problems/10379
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

struct minStack
{
    priority_queue<pair<pair<ll, ll>, ll>> q;
    map<ll, set<ll>> mp;

    void push(ll val, ll tic)
    {
        mp[val].insert(tic);
        ll sz = mp[val].size();
        q.push({{sz, tic}, val});
    }

    void pop()
    {
        while(!q.empty())
        {
            auto cur = q.top();
            ll cnt = cur.first.first;
            ll tic = cur.first.second;
            ll val = cur.second;
            q.pop();

            //cout<<"q check {"<<cnt<<", "<<tic<<", "<<val<<"}\n";

            if(mp.count(val) == 0 || int(mp[val].size()) == 0) continue;
            if(mp[val].count(tic) == 0) continue;
            mp[val].erase(tic);
            cout << val << "\n";
            break;
        }
    }
};

void solve()
{
    string s;
    ll n;
    minStack ms;
    ll tic = 0;


    while(cin >> s)
        if(s == "push")
        {
            cin >> n;
            ms.push(n, ++tic);
        }
        else if(s == "pop")
            ms.pop();

}

int main()
{
    solve();
    return 0;
}
