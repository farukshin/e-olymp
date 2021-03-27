// https://www.e-olymp.com/ru/problems/1796
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
    int n;
    cin >> n;
    vector<vector<int>> ms(n, vector<int>(n, INT_MAX));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            cin >> ms[i][j];
            ms[i][j] = (ms[i][j] == -1 ? INT_MAX : ms[i][j]);
        }

    Floyd_Warshall(ms, n);

    int d = 0, r = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        int eks = 0;
        for(int j = 0; j < n; j++)
            d = max(d, ms[i][j]), eks = max(eks, ms[i][j]);
        r = min(r, eks);
    }
    cout << d << "\n" << r;
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}