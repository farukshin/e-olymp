//https://www.e-olymp.com/ru/problems/8216
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(9);

    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> v[i][j];

    for(int j = 0; j < m; j++)
        while(true)
        {
            bool success = true;
            for(int i = 0; i < n - 1; i++)
                if(v[i][j] == 'o' && v[i + 1][j] == '.')
                    swap(v[i][j], v[i + 1][j]), success = false;
            if(success) break;
        }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << v[i][j];
        cout << "\n";
    }

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}