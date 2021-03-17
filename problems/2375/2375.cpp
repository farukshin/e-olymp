//https://www.e-olymp.com/ru/problems/2375
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    ld c;
    cin >> n >> c;
    map<string, ld> mp;

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ld k;
        string cur;
        cin >> k >> cur;
        mp[cur] += k;
        ans += k;
    }
    int ans2 = mp["bedroom"];
    ld ans3 = c * (mp["bedroom"] + mp["bathroom"] + mp["kitchen"]  + mp["other"]) + c * mp["balcony"] / 2;
    cout << ans << "\n" << ans2 << "\n" << ans3;



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