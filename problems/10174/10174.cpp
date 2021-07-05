// https://www.e-olymp.com/ru/problems/10174
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAXARR = 100000;
int lp[MAXARR + 1];
vector<int> pr;

int smSlog(int n)
{
    int sm = 1;
    if(lp[n] != n && n != 1)
        sm += n;
    while(lp[n] != 0)
    {
        sm += lp[n];
        n = n / lp[n];
    }
    return sm;
}

ld func(int n)
{
    ld res = 1.0 * n;
    res /= smSlog(n);
    return res;
}

void solve()
{
    for (int i = 2; i <= MAXARR; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j = 0; j < (int)pr.size() && pr[j] <= lp[i] && i * pr[j] <= MAXARR; ++j)
            lp[i * pr[j]] = pr[j];
    }

    int n;
    cin >> n;

    ld resFunc = -1;
    int ans = 0;
    for(int i = n; i > 0; i--)
    {
        ld cur = func(i);
        if(cur > resFunc)
            resFunc = cur, ans = i;
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}