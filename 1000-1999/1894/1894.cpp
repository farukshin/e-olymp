// https://www.e-olymp.com/ru/problems/1894
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(k);
    int cur = 0;
    for(int i = 0; i < k; i++)
        cin >> v[i], cur += v[i];

    int ans = cur;
    for(int i = k; i < n; i++)
        cur -= v[i % k],  cin >> v[i % k], cur += v[i % k], ans = max(ans, cur);
    cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}