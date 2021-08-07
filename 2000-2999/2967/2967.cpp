// https://www.e-olymp.com/ru/problems/2967
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAXARR = 5000;
int x[MAXARR], y[MAXARR], used[MAXARR], min_e[MAXARR], end_e[MAXARR];

int sqr(int x)
{
    return x * x;
}

int mesafe(int i, int j)
{
    return sqr(x[j] - x[i]) + sqr(y[j] - y[i]);
}

void solve()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    memset(min_e, 0x3F, sizeof min_e);
    memset(end_e, -1, sizeof end_e);
    memset(used, 0, sizeof used);

    min_e[1] = 0;
    double ans = 0.0;

    int v;

    for (int i = 0; i < n; i++)
    {
        v = -1;
        for (int j = 0; j < n; j++)
            if (!used[j] && (v == -1 || min_e[j] < min_e[v]))
                v = j;

        used[v] = 1;
        if (end_e[v] != -1)
            ans += sqrt(mesafe(v, end_e[v]));

        for (int to = 0; to < n; to++)
        {
            int curD = mesafe(v, to);
            if (!used[to] && curD < min_e[to])
            {
                min_e[to] = curD;
                end_e[to] = v;
            }
        }
    }
    cout << ans;
}

int main()
{
    cout.setf(std::ios::fixed);
    cout.precision(6);

    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}