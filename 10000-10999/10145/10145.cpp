// https://www.e-olymp.com/ru/problems/10145
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<pair<ld, int>> v(n);
    for(int i = 0; i < n; i++)
        v[i].second = i, v[i].first = sin(i);

    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
        cout << v[i].second << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    solve();
    return 0;
}