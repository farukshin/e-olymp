// https://www.e-olymp.com/ru/problems/7507
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    //cin>>n;
    scanf("%d", &n);
    set<ll> ans;
    vector<ll> votr, vpol;
    for(int i = 0; i < n; i++)
    {
        ll cur;
        scanf("%lld", &cur);
        //cin>>cur;
        if(cur == 0)
            ans.insert(0);
        else if(cur > 0)
            vpol.push_back(cur);
        else if(cur < 0)
            votr.push_back(cur);
    }

    sort(votr.begin(), votr.end());
    sort(vpol.begin(), vpol.end());


    if(vpol.size() > 2)
    {
        ll cur = vpol[vpol.size() - 1] * vpol[vpol.size() - 2] * vpol[vpol.size() - 3];
        ans.insert(cur);
    }
    if(votr.size() > 1 && vpol.size() > 1)
    {
        ll cur = votr[0] * votr[1] * vpol[vpol.size() - 1];
        ans.insert(cur);
    }
    if(votr.size() > 2)
    {
        ll cur = votr[votr.size() - 1] * votr[votr.size() - 2] * votr[votr.size() - 3];
        ans.insert(cur);
    }

    ll a;
    for(auto d : ans)
        a = d;
    //cout<<a;
    printf("%lld", a);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}