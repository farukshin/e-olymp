//https://www.e-olymp.com/ru/problems/7366
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    int d = n / (60 * 60 * 24);
    n -= d * (60 * 60 * 24);

    int h = n / (60 * 60);
    n -= h * (60 * 60);

    int m = n / (60);
    n -= m * (60);

    int s = n;

    printf("%d %d %d %d\n", d, h, m, s);
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
