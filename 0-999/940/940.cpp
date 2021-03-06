//https://www.e-olymp.com/ru/problems/940
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(ios::fixed);
    // cout.precision(0);
    int n;
    cin >> n;
    map<int, int> maps;
    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        maps[cur]++;
    }
    int ans = -1;
    for (auto s : maps)
        if (s.second > n / 2)
            ans = s.first;


    cout << ans << endl;
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
