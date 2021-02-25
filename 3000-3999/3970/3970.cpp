//https://www.e-olymp.com/ru/problems/3970
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
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        mp[cur]++;
    }
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        int cur;
        cin >> cur;
        cout << mp[cur] << endl;
    }
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