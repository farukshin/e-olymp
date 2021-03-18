//https://www.e-olymp.com/ru/problems/7326
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    int ans = 0, cur = 0;
    bool fl = false;
    for(auto ch : s)
        if(ch == 'k')
            fl = true, cur++;
        else if(fl)
            fl = false, ans = max(ans, cur), cur = 0;
        else cur = 0;
    ans = max(ans, cur);
    cout << ans;
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