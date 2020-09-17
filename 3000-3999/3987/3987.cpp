//https://www.e-olymp.com/ru/problems/3987
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ss(n + 1);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }

    bool flag = true;
    for (int i = 1; i <= n && flag; i++)
    {
        vector<bool> used(n + 1, false);
        int ans = 1;
        used[i] = true;
        for (auto node : ss[i])
            if (!used[node])
            {
                used[node] = true;
                ans++;
            }
        if (ans != n)
            flag = false;
    }
    cout << (flag ? "YES" : "NO") << endl;
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
