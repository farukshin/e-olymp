// https://www.e-olymp.com/ru/problems/6959
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int t;
    cin >> t;
    for(int k = 0; k < t; k++)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> ans(1e5 + 5, 0);
        cin >> ans[1];
        for(int i = 2; i <= n; i++)
            cin >> ans[i], ans[i] += ans[i - 1];
        for(int i = 0; i < q; i++)
        {
            int a, b;
            cin >> a >> b;
            cout << ans[b + 1] - ans[a] << (i == q - 1 ? "" : "\n");
        }
        cout << (k == t - 1 ? "" : "\n\n");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}