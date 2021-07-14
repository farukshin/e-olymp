// https://www.e-olymp.com/ru/problems/6956
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    scanf("%d", &n);
    //cin>>n;
    map<int, set<ll>> mp;

    for(int i = 0; i < n; i++)
    {
        ll id;
        int a, b, c;
        scanf("%lld %d/%d/%d", &id, &a, &b, &c);
        mp[b].insert(id);
    }

    printf("%d %d", 1, mp[1].size());
    for(int i = 2; i <= 12; i++)
        printf("\n%d %d", i, mp[i].size());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}