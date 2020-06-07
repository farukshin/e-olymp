//https://www.e-olymp.com/ru/problems/1065
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

vector<vector<int>> ss;
vector<string> input;
vector<bool> used;
int n, m;

void dfs(int node)
{
    used[node] = true;

    for (auto chield : ss[node])
        if (!used[chield])
            dfs(chield);
}

void check(int a, int b)
{
    int cur = a * m + b;

    int up = cur - m;
    if (up > 0 && input[a - 1][b] == '#')
        ss[cur].push_back(up);

    int down = cur + m;
    if (down <= n * m + m && input[a + 1][b] == '#')
        ss[cur].push_back(down);

    int left = cur - 1;
    if (b > 0 && input[a][b - 1] == '#')
        ss[cur].push_back(left);

    int right = cur + 1;
    if (b < m - 1 && input[a][b + 1] == '#')
        ss[cur].push_back(right);
}

void solve()
{

    cin >> n >> m;
    int MAXARR = n * m + m + 1;

    used.resize(MAXARR);
    ss.resize(MAXARR);
    input.resize(n + 5);

    fill(begin(used), end(used), true);

    for (int i = 0; i < n; i++)
        cin >> input[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (input[i][j - 1] == '#')
            {
                used[i * m + j] = false;
                check(i, j);
            }

    int ans = 0;
    for (int i = 0; i < n * m + m - 1; i++)
        if (!used[i])
        {
            ans++;
            cout << i / m << " " << i % m << endl;
            dfs(i);
        }
    cout << ans << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
