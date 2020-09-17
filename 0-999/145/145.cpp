//https://www.e-olymp.com/ru/problems/145
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
    int MAXARR = 100;
    int a[MAXARR + 1] = {0};

    int n, ans = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int cur;
        cin >> cur;
        a[cur]++;
    }

    for (int i = 1; i <= MAXARR; i++)
        ans += a[i] / 4;

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
