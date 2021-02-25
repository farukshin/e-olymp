//https://www.e-olymp.com/ru/problems/5080
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

    vector<vector<int>> ss(n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            if(j >= i && a > 0)
            {
                ss[i].push_back(j);
                ss[j].push_back(i);
            }
        }

    int ans = 0;
    for(int i = 0; i < n; i++)
        if(ss[i].size() == 1)
            ans++;
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
    //int t; cin >> t; while (t--) solve();

    return 0;
}