//https://www.e-olymp.com/ru/problems/2099
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, m;
    cin >> n;
    vector<int> v(n), ans;
    set<int> sets;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int cur;
        cin >> cur;
        sets.insert(cur);
    }

    for (int i = 0; i < n; i++)
        if (sets.count(v[i]) == 0)
            ans.push_back(v[i]);

    cout << ans.size() << endl;
    for (auto k : ans)
        cout << k << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
