//https://www.e-olymp.com/ru/problems/1885
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    map<int, int> mp =
    {
        {0, 6},
        {1, 2},
        {2, 5},
        {3, 5},
        {4, 4},
        {5, 5},
        {6, 6},
        {7, 3},
        {8, 7},
        {9, 6}
    };

    int n;
    cin >> n;
    ll ans = (n < 0 ? 1 : 0);
    string s = to_string(n);

    for(auto ch : s)
        if(ch >= '0' && ch <= '9')
            ans += mp[(ch - '0')];
    cout << ans << endl;


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