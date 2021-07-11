// https://www.e-olymp.com/ru/problems/9033
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        mp[cur]++;
    }
    int ans = 0;
    for(auto d : mp)
    {
        int a1 = (mp.count(d.first - 2) ? mp[d.first - 2] : 0) + (mp.count(d.first - 1) ? mp[d.first - 1] : 0) + mp[d.first];
        int a2 = (mp.count(d.first + 2) ? mp[d.first + 2] : 0) + (mp.count(d.first + 1) ? mp[d.first + 1] : 0) + mp[d.first];
        ans = max(ans, max(a1, a2));
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}