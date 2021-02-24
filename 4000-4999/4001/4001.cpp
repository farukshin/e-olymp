//https://www.e-olymp.com/ru/problems/4001
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(0);

    int n;
    cin >> n;
    char arr[n][n];
    bool  used[n][n] = { false };
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '*')
                used[i][j] = true;
        }


    int a, b;
    cin >> a >> b;
    --a, --b;

    queue<pair<int, int>> q;
    q.push({ a, b });

    while (!q.empty())
    {
        auto fr = q.front();
        q.pop();

        if (!used[fr.first][fr.second])
        {
            ans++;
            q.push({ fr.first - 1, fr.second });
            q.push({ fr.first + 1, fr.second });
            q.push({ fr.first, fr.second - 1 });
            q.push({ fr.first, fr.second + 1 });

            used[fr.first][fr.second] = true;
        }
    }
    cout << ans << endl;
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