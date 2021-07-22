// https://www.e-olymp.com/ru/problems/3606
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ld dist(pair<int, int> p1, pair<int, int> p2)
{
    ld ans = sqrt((p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second));
    return ans;
}

void solve()
{
    int n;
    ld r;
    cin >> n >> r;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(dist(v[i], v[j]) <= r)
                ans++;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL), cout.tie(NULL); cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}