//https://www.e-olymp.com/ru/problems/8883
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    vector<int> ans(4);

    for (int i = 0; i < 4; i++)
        cin >> ans[i];

    sort(ans.begin(), ans.end());

    if (ans[0] == ans[3] || ans[0] == ans[1] && ans[2] == ans[3])
        cout << ans[0] + ans[1] + ans[2] + ans[3] << endl;
    else
        cout << "No" << endl;
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
