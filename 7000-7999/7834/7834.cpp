//https://www.e-olymp.com/ru/problems/7834
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{

    int n, maxN = -105, preMax = -105;
    cin >> n;
    while (n--)
    {
        int cur;
        cin >> cur;
        if (cur > maxN)
            preMax = maxN, maxN = cur;
        else if (cur > preMax)
            preMax = cur;
    }
    preMax = (preMax == -105 ? 0 : preMax);
    maxN = (maxN == -105 ? 0 : maxN);

    cout << preMax + maxN << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}
