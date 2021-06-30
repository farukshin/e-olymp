// https://www.e-olymp.com/ru/problems/10246
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool mysort(pair<pair<string, int>, pair<int, int>> p1, pair<pair<string, int>, pair<int, int>> p2)
{
    if(p1.second.first != p2.second.first)
        return p1.second.first > p2.second.first;
    else if(p1.second.second != p2.second.second)
        return p1.second.second < p2.second.second;
    else
        return p1.first.second < p2.first.second;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<pair<string, int>, pair<int, int>>> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].first.first >> v[i].second.first >> v[i].second.second, v[i].first.second = i;

    sort(v.begin(), v.end(), mysort);
    for(int i = 0; i < n; i++)
        cout << v[i].first.first << " " << v[i].second.first << " " << v[i].second.second << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}