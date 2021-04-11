// https://www.e-olymp.com/ru/problems/10276
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> d >> c;

    if((a + c) != (b + d))
        cout << ((a + c) > (b + d) ? "U" : "P");
    else if(b != c)
        cout << (c > b ? "U" : "P");
    else cout << "T";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}