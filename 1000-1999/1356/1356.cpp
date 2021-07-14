// https://www.e-olymp.com/ru/problems/1356
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool mySort(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.first == p2.first)
        return p1.second < p2.second;
    else
        return p1.first > p2.first;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for(int i = 1; i <= n; i++)
        mp[i] = 0;

    for(int i = 0; i < m; i++)
    {
        int cur;
        cin >> cur;
        mp[cur]++;
    }

    vector<pair<int, int>> v;
    for(auto m : mp)
        v.push_back({m.second, m.first});

    sort(v.begin(), v.end(), mySort);
    for(int i = 0; i < min(3, m); i++)
        cout << v[i].second << " ";
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