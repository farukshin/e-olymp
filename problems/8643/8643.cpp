//https://www.e-olymp.com/ru/problems/8643
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int a, b;
    char c1, c2;
    cin >> c1 >> a >> c2 >> b;
    int x = abs(c2 - c1);
    int y = abs(b - a);
    if(x > y) swap(x, y);
    cout << x << " " << y << endl;
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