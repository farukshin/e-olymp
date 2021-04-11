// https://www.e-olymp.com/ru/problems/10275
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << (a == b + c || b == a + c || c == a + b ? "Yes" : "No");

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}