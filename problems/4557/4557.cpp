//https://www.e-olymp.com/ru/problems/4557
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

ll d_manch(ll x1, ll x2, ll y1, ll y2)
{
    return (x1 > 0 ? x1 : -1 * x1) + (y1 > 0 ? y1 : -1 * y1);
}

void solve()
{
    int n;
    cin >> n;

    vector<ll> x(n + 1, 0);
    vector<ll> y(n + 1, 0);
    bool fl = true;

    ll dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
    ll dy[8] = {-1, -1, -1, 0, 1, 1, 1, 0};

    for (int i = 1; i <= n; i++)
    {
        int pos;
        cin >> pos;
        x[i] = x[i - 1] + dx[pos - 1];
        y[i] = y[i - 1] + dy[pos - 1];
    }

    for (int i = 1; i < n && fl; i++)
        for (int j = 0; j < i; j++)
            if ((x[i] == x[j]) && (y[i] == y[j]))
            {
                cout << i;
                fl = false;
            }

    if (fl)
        cout << "Ok" << endl
             << d_manch(x[n], 0, y[n], 0);
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
