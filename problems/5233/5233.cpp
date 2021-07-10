// https://www.e-olymp.com/ru/problems/5233
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    vector<vector<ll>> v(3, vector<ll>(3));
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> v[i][j];
    ll ans = v[0][0] * v[1][1] * v[2][2] + v[1][0] * v[2][1] * v[0][2] + v[0][1] * v[1][2] * v[2][0]
             - v[2][0] * v[1][1] * v[0][2] - v[0][1] * v[1][0] * v[2][2] - v[1][2] * v[2][1] * v[0][0];
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