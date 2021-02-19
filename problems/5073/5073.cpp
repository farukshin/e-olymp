//https://www.e-olymp.com/ru/problems/5073
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(0);

    int n, m;
    cin >> n >> m;
    map<pair<int, int>, int> mp;

    bool succes = false;
    for (int i = 0;i < m;i++)
    {
        int a, b;
        cin >> a >> b;
        if (mp.count({ a, b }) > 0)
            succes = true;
        mp[{a, b}]++;
    }

    cout << (succes ? "YES" : "NO") << endl;
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