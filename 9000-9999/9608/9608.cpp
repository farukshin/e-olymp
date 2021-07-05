// https://www.e-olymp.com/ru/problems/9608
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void Floyd_Warshall(vector<vector<ld>>& ms, int& countNode)
{
    for (int k = 0; k < countNode; ++k)
        for (int i = 0; i < countNode; ++i)
            for (int j = 0; j < countNode; ++j)
                if (ms[i][k] < LDBL_MAX && ms[k][j] < LDBL_MAX)
                    ms[i][j] = min(ms[i][j], ms[i][k] + ms[k][j]);
}

void solve()
{
    int n, a, b, c, m;
    ld d;
    cin >> n >> a >> b >> c >> d >> m;
    --a, --b, --c;
    vector<vector<ld>> ms(n, vector<ld>(n, LDBL_MAX));

    for(int i = 0; i < n; i++)
        ms[i][i] = 0;

    for(int i = 0; i < m; i++)
    {
        int x, y;
        ld dd;
        cin >> x >> y >> dd;
        --x, --y;
        ms[x][y] = ms[y][x] = dd;
    }

    Floyd_Warshall(ms, n);

    // for(int i=0;i<n;i++)
    // {
    // 	for(int j=0;j<n;j++)
    // 		cout<<ms[i][j]<<" ";
    // 	cout<<"\n";
    // }

    if(ms[a][b] == LDBL_MAX || ms[a][c] == LDBL_MAX)
    {
        cout << -1;
        return;
    }

    cout << (ms[a][b] + ms[b][c] - ms[a][c])*d;
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