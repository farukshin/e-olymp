// https://www.e-olymp.com/ru/problems/2671
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int runx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int runy[8] = {0, -1, 0, 1, 1, -1, 1, -1};

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> v(n, vector<int>(m, 0));
    for(int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        v[a][b] = -1;
        for(int r = 0; r < 8; r++)
        {
            int ii = a + runx[r];
            int jj = b + runy[r];
            if(ii >= 0 && ii < n && jj >= 0 && jj < m && v[ii][jj] != -1)
                v[ii][jj]++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << (v[i][j] == -1 ? char('*') : char('0' + v[i][j])) << " ";
        if(i != n - 1)
            cout << "\n";
    }
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