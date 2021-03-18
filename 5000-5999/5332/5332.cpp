// https://www.e-olymp.com/ru/problems/5332
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, pair<int, string>>> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i].second.second >> v[i].first;
        v[i].second.first = i;
    }
    sort(v.begin(), v.end());
    for(auto d : v)
        cout << d.second.second << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(6);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}