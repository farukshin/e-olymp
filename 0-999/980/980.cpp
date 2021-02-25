//https://www.e-olymp.com/ru/problems/980
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    vector<int> v(n);
    vector<vector<int>> m(n, vector<int>(n));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> m[i][j];

    for(int i = 0; i < n; i++)
        cin >> v[i];

    int mn = 1e9;
    pair<int, int> ans = {-1, -1};
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(v[i] == 0 && v[j] == 1 && m[i][j] < mn)
                mn = m[i][j], ans.first = i,  ans.second = j;
    cout << ans.first + 1 << " " << ans.second + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}