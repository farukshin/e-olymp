// https://www.e-olymp.com/ru/problems/8197
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool mysort(pair<string, string> p1, pair<string, string> p2)
{
    if(p1.second != p2.second)
        return p1.second < p2.second;
    else
        return p1.first < p2.first;
}

void solve()
{
    int n;
    cin >> n;

    string s1, s2, g;
    vector<pair<string, string>> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), mysort);
    for(int i = 0; i < n; i++)
        cout << v[i].first << " " << v[i].second << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}