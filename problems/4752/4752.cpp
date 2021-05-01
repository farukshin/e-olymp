// https://www.e-olymp.com/ru/problems/4752
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v1(n, vector<int>(m));
    vector<vector<int>> v2(n, vector<int>(m));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            v1[i][j] = m * i + j;
    for(int j = 0; j < m; j++)
        for(int i = 0; i < n; i++)
            v2[i][j] = n * j + i;
    ll ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(v1[i][j] == v2[i][j])
                ans++;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}