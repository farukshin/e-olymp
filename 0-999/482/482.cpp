// https://www.e-olymp.com/ru/problems/482
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
//vector < vector<long long> > d(4, vector<ll>((1<<31)));

void calc (vector<vector<ll>> &d, int x = 0, int y = 0, int mask = 0, int next_mask = 0)
{
    if (x == n)
        return;
    if (y >= m)
        d[x + 1][next_mask] += d[x][mask];
    else
    {
        int my_mask = 1 << y;
        if (mask & my_mask)
            calc (d, x, y + 1, mask, next_mask);
        else
        {
            calc (d, x, y + 1, mask, next_mask | my_mask);
            if (y + 1 < m && ! (mask & my_mask) && ! (mask & (my_mask << 1)))
                calc (d, x, y + 2, mask, next_mask);
        }
    }
}

void solve()
{
    while(cin >> m, m != -1)
        //cin>>m;
    {
        n = 3;
        if(m > n)
            swap(n, m);
        vector<vector<ll>> d;
        d.resize (n + 1, vector<ll> (1 << m));
        d[0][0] = 1;
        for (int x = 0; x < n; ++x)
            for (int mask = 0; mask < (1 << m); ++mask)
                calc (d, x, 0, mask, 0);

        cout << d[n][0] << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //cin>>t; while(t--){solve();}
    return 0;
}