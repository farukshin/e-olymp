// https://www.e-olymp.com/ru/problems/10263
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool mysort(pair<string, pair<string, int>> p1, pair<string, pair<string, int>> p2)
{
    if(p1.second.first != p2.second.first)
        return p1.second.first < p2.second.first;
    else if(p1.first != p2.first)
        return p1.first < p2.first;
    else
        return p1.second.second > p2.second.second;
}

void solve()
{
    int n;
    cin >> n;

    string s1, s2, g;
    vector<pair<string, pair<string, int>>> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second.first >> v[i].second.second;

    sort(v.begin(), v.end(), mysort);
    for(int i = 0; i < n; i++)
        cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}