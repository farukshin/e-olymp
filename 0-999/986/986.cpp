//https://www.e-olymp.com/ru/problems/986
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);cout.precision(2);
    int n;
    cin >> n;
    map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        mp[cur]++;
    }

    int ans = 0;
    for(auto s : mp)
    {
        int a = ( mp.count(s.first + 1) > 0 ? mp[s.first + 1] : 0);
        int b = ( mp.count(s.first - 1) > 0 ? mp[s.first - 1] : 0);
        int curAns = s.second + max(a, b);
        if(curAns > ans)
            ans = curAns;
    }
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