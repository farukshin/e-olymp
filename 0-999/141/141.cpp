// https://www.e-olymp.com/ru/problems/141
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

map<int, int> mp;
int minSm = INT_MAX;

void check(int k)
{
    int cur = 0;
    while(k)
    {
        cur += k % 10;
        k /= 10;
        if(cur > minSm)
            return;
    }
    if(cur < minSm)
        minSm = cur;
    mp[cur]++;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    for(int i = n; i <= m; i++)
        check(i);
    for(auto d : mp)
    {
        cout << d.second;
        break;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}