//https://www.e-olymp.com/ru/problems/7338
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int sumMun(int n)
{
    string s = to_string(n);
    int res = 0;
    for (auto ch : s)
        if (ch >= '0' && ch <= '9')
            res += (ch - '0');
    return res;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;

    ll ans = 0;
    for (int i = 10; i < 100; i++)
        if (sumMun(i) == sumMun(i * n))
            ans++;

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