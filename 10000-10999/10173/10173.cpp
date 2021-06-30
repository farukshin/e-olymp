// https://www.e-olymp.com/ru/problems/10173
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i = 0; i < n; i++)
        cin >> v1[i];
    for(int i = 0; i < n; i++)
        cin >> v2[i];
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    ll ans = 0;
    for(int i = 0; i < n; i++)
        if(abs(v1[i] - v2[i]) > ans)
            ans = abs(v1[i] - v2[i]);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}