//https://www.e-olymp.com/ru/problems/8222
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(9);

    string s;
    int a, b;
    cin >> s >> a >> b;

    cout << b - a + 1 << "\n" << s.substr(a - 1, b - a + 1) << "\n";

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}