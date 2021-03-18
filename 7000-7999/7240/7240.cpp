//https://www.e-olymp.com/ru/problems/7240
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> v1(n);
    vector<int> v2(m);

    for(int i = 0; i < n; i++)
        cin >> v1[i];
    for(int i = 0; i < m; i++)
        cin >> v2[i];

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());
    ll ans = 0;

    for(int i = 0; i < min(n, m); i++)
        if(v1[i] < v2[i])
            ans += v2[i] - v1[i];
        else break;
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