// https://www.e-olymp.com/ru/problems/5090
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;



void solve()
{
    int n;
    cin >> n;
    int ans;
    int mxstr = 0;
    int mnstol = INT_MAX;
    vector<int> vstol(n, 0);
    vector<int> vstr(n, 0);

    vector<vector<int>> v(n, vector<int>(n));
    for(int i = 0; i < n; i++)
    {
        int curSum = 0;
        for(int j = 0; j < n; j++)
        {
            cin >> v[i][j];
            curSum += v[i][j];
            vstol[j] += v[i][j];
        }
        vstr[i] = curSum;
        mxstr = max(mxstr, curSum);
    }
    for(int i = 0; i < n; i++)
        mnstol = min(mnstol, vstol[i]);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(vstr[i] == mxstr && vstol[j] == mnstol)
            {
                cout << v[i][j];
                return;
            }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    // cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    return 0;
}