//https://www.e-olymp.com/ru/problems/962
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
    cout.setf(std::ios::fixed);
    cout.precision(2);

    pair<int, int> a, b, c, d;
    cin >> a.first >> a.second >>
        b.first >> b.second >>
        c.first >> c.second >>
        d.first >> d.second;

    cout << max(max(getD(a, b), getD(b, c)), max(getD(c, d), getD(d, a))) << endl;

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