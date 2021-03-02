//https://www.e-olymp.com/ru/problems/10157
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void transitive_closure(vector<vector<int>> &ms, const int &n)
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ms[i][k] && ms[k][j])
                {
                    ms[i][j] = 1;
                }
            }
        }
    }
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    vector<vector<int>> ms(n, vector<int>(n, 0));
    int a, b;
    while(cin >> a >> b)
        ms[a - 1][b - 1] = 1;

    transitive_closure(ms, n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << ms[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}