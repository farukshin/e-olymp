// https://www.e-olymp.com/ru/problems/4416
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool mysort(pair<pair<int, int>, int> p1, pair<pair<int, int>, int> p2)
{
    if(p1.first.first != p2.first.first)
        return p1.first.first > p2.first.first;
    else if(p1.first.second != p2.first.second)
        return p1.first.second < p2.first.second;
    else
        return p1.second < p2.second;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i].first.first >> v[i].first.second, v[i].second = i;
    sort(v.begin(), v.end(), mysort);
    for(int i = 0; i < n; i++)
        cout << v[i].second + 1 << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}