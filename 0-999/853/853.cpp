// https://www.e-olymp.com/ru/problems/853
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n, m, delta = 0;
    cin >> n >> m;

    //ll v[2][n] = {0};
    vector<vector<ll>> v(2, vector<ll>(n, 0));
    for(int i = 0; i < n; i++)
        cin >> v[0][i];

    for(int i = 0; i < m; i++)
    {
        int t, a, b;
        cin >> t;
        if(t == 1)
        {
            cin >> a >> b;
            --a;
            v[0][a] = b;
            v[1][a] = delta;
        }
        else if(t == 2)
        {
            cin >> a;
            delta += a;
        }
        else if(t == 3)
        {
            cin >> a;
            --a;
            cout << v[0][a] + delta - v[1][a] << "\n";
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(5);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}