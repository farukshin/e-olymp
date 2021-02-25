//https://www.e-olymp.com/ru/problems/4541
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    ll s, k = 0, ans;
    cin >> n >> s;
    int cur = n;
    map<int, int> mp;
    while(cur)
        mp[cur % 10]++, cur /= 10;

    n++;
    while(n)
    {
        if(mp[n % 10] > 0) mp[n % 10]--;
        else k++;
        n /= 10;
    }
    ans = k * s;
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