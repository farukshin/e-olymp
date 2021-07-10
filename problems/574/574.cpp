// https://www.e-olymp.com/ru/problems/574
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++)
        cin >> v[i], mp[v[i]]++;

    vector<int> ans;
    for(auto d : mp)
        if(d.second <= k)
            for(int i = 0; i < d.second; i++)
                ans.push_back(d.first);
    sort(ans.begin(), ans.end(), greater<int>());
    for(auto d : ans)
        cout << d << " ";
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