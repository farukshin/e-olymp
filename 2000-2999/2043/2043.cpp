//https://www.e-olymp.com/ru/problems/2043
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    map<int, string> mp =
    {
        {1, "January\nFebruary\nMarch"},
        {2, "April\nMay\nJune"},
        {3, "July\nAugust\nSeptember"},
        {4, "October\nNovember\nDecember"}
    };

    cout << mp[n] << endl;
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
