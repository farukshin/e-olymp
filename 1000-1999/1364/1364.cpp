//https://www.e-olymp.com/ru/problems/1364
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(2);

    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    ll sum = 0;
    bool success = true;
    ll d1 = 0, d2 = 0;
    for(int i = 0; i < n; i++)
    {
        ll curSum = 0;
        for(int j = 0; j < n; j++)
        {
            cin >> v[i][j], curSum += v[i][j];
            if(i == j) d1 += v[i][j];
            if(i == n - j - 1) d2 += v[i][j];
        }

        if(i == 0)
            sum = curSum;
        else if(sum != curSum)
            success = false;
    }
    if(!success || d1 != sum || d2 != sum)
    {
        cout << -1 << endl;
        return;
    }

    for(int i = 0; i < n; i++)
    {
        ll curSum = 0;
        for(int j = 0; j < n; j++)
            curSum += v[j][i];

        if(sum != curSum)
            success = false;
    }

    if(!success)
        cout << -1 << endl;
    else
        cout << sum << endl;
}

#include <iostream>

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t;cin >> t;while (t--)solve();

    return 0;
}