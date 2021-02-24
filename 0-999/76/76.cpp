//https://www.e-olymp.com/ru/problems/76
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int a, b, x, y, z;
    vector<int> v(3);
    cin >> a >> b >> v[0] >> v[1] >> v[2];

    sort(v.begin(), v.end());

    if(a > b)
        swap(a, b);

    cout << (a > v[0] && b > v[1] ? 1 : 0) << endl;
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