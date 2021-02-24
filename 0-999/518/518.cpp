//https://www.e-olymp.com/ru/problems/518
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ld getD(pair<int, int> p1, pair<int, int> p2)
{
    ld ans = sqrt((p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second));
    return ans;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int a, b;
    cin >> a >> b;
    cout << a + b << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}