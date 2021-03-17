// https://www.e-olymp.com/ru/problems/2596
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<int, int>> gor (n + 1, {m + 1, 0});
    vector<pair<int, int>> ver (m + 1, {n + 1, 0});

    for(int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        gor[a].first  = min(gor[a].first,  b);
        gor[a].second = max(gor[a].second, b);

        ver[b].first  = min(ver[b].first,  a);
        ver[b].second = max(ver[b].second, a);
    }

    int u = 0, d = 0, l = 0, r = 0;
    for(int i = 1; i <= n; i++)
        l += gor[i].first - 1, r += m - gor[i].second;
    for(int i = 1; i <= m; i++)
        u += ver[i].first - 1, d += n - ver[i].second;

    cout << max(max(l, r), max(u, d));
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}