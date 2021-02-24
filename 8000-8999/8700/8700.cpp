//https://www.e-olymp.com/ru/problems/8700
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);

    int n;
    map<int, int> mp;
    int mx = 0;
    while (cin >> n)
    {
        if(n == 0)
            break;
        mp[n]++;
        if (mx < mp[n])
            mx = mp[n];
    }

    for (auto c : mp)
        if (c.second == mx)
            cout << c.first << endl
                 << mx << endl;


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
