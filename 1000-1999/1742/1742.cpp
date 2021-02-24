//https://www.e-olymp.com/ru/problems/1742
//#tech_debt
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
    int n;
    cin >> n;
    vector<int> ans;

    int x, y, z, r;
    cin >> x >> y >> z >> r;
    ans.push_back(1);
    for (int i = 2; i <= n; i++)
    {
        int curX, curY, curZ, curR;
        cin >> curX >> curY >> curZ >> curR;
        int d = sqrt((curX - x) * (curX - x) + (curY - y) * (curY - y));
        if (z > curZ && d <= r + curR)
            ans.push_back(i);
    }

    cout << ans.size() << endl;
    for (int i = 0; i <= ans.size() - 1; i++)
        cout << ans[i] << (i == ans.size() - 1 ? "\n" : " ");
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
