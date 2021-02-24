//https://www.e-olymp.com/ru/problems/8830
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    cout.setf(std::ios::fixed);
    cout.precision(3);

    ld x;
    cin >> x;
    ld y = sqrt(x * x * x * x + 1) / (x * x) - sqrt(x * x / (x * x + 1)) ;

    cout << y << endl;
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
