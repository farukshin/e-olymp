// https://www.e-olymp.com/ru/problems/4097
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    vector<pair<pair<int, int>, pair<int, string>>> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first;

    sort(v.begin(), v.end());
    cout << v[v.size() - 1].second.second << "\n" << v[0].second.second;
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