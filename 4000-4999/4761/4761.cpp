//https://www.e-olymp.com/ru/problems/4761
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    vector<vector<int>> ms(n, vector<int>(n, 0));
    bool fl = false;
    for (int i = 0;i < n;i++)
        for (int j = 0;j < n;j++)
        {
            cin >> ms[i][j];
            if (i == j && ms[i][j] != 0)
                fl = true;
        }

    cout << (fl ? "YES" : "NO") << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}