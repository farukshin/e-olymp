// https://www.e-olymp.com/ru/problems/8173
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int ans, k = -1;
    map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        mp[cur]++;
        if(mp[cur] > k)
            k = mp[cur], ans = cur;
        else if(mp[cur] == k && ans > cur)
            ans = cur;
    }

    cout << ans << "\n";
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

    //solve();
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}