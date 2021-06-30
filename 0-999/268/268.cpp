// https://www.e-olymp.com/ru/problems/268
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

    vector<vector<int>> ms(n, vector<int>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            int cur;
            cin >> cur;
            if(cur == 0) ms[i][j] = INT_MAX;
            else ms[i][j] = cur;
        }

    Floyd_Warshall(ms, n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << (ms[i][j] == INT_MAX ? 0 : 1) << " ";
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}