//https://www.e-olymp.com/ru/problems/1747
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
    int n, u, v;
    cin >> n;
    vector<int> pl(n + 1, 0);
    for (int i = 1; i < n; i++)
    {
        cin >> u >> v;
        pl[u]++;
        pl[v]++;
    }
    int count = 0;
    for (int i = 1; i <= n; ++i)
        if (pl[i] > 1)
            ++count;
    cout << count << endl;
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
