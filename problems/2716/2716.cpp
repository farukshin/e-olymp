// https://www.e-olymp.com/ru/problems/2716
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    map<int, int> ans;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        mp[cur]++;
        ans[cur] = i + 1;
    }
    bool success = false;
    for(auto d : mp)
    {
        if(d.second == 1)
        {
            cout << ans[d.first];
            success = true;
            break;
        }
    }

    if(!success) cout << 0;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}