// https://www.e-olymp.com/ru/problems/10274
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b && a > c)
        cout << "Petryk";
    else if(b > a && b > c)
        cout << "Marichka";
    else if(c > a && c > b)
        cout << "Olenka";


}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}