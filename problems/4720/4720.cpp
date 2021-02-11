//https://www.e-olymp.com/ru/problems/4720
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int x1, y1, x2, y2, x3, y3, x4, y4, a, b;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> a >> b;

    bool v4ernom = x1 <= a && x2 >= a && y1 >= b && y2 <= b; // внутри черного
    bool vBelom = x3 < a && x4 > a && y3 > b && y4 < b;      // в белом
    bool success = v4ernom && !vBelom;

    cout << (success ? "HAPPY" : "SAD") << endl;
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