// https://www.e-olymp.com/ru/problems/2973
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void Floyd_Warshall(vector<vector<int>>& ms, int& countNode)
{
    for (int k = 0; k < countNode; ++k)
        for (int i = 0; i < countNode; ++i)
            for (int j = 0; j < countNode; ++j)
                if (ms[i][k] < INT_MAX && ms[k][j] < INT_MAX)
                    ms[i][j] = min(ms[i][j], ms[i][k] + ms[k][j]);
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> ms(n, vector<int>(n, INT_MAX));
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ms[a][b] = 1;
        ms[b][a] = 1;
    }

    Floyd_Warshall(ms, n);

    int mx = -1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(ms[i][j] > mx)
                mx = ms[i][j];

    cout << (mx <= 6 && mx != -1 ? "YES" : "NO");
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}