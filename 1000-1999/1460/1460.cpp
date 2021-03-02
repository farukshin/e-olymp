//https://www.e-olymp.com/ru/problems/1460
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        v[i] = i + 1;
    reverse(v.begin() + a - 1, v.begin() + b);
    reverse(v.begin() + c - 1, v.begin() + d);

    for(int i = 0; i < n; i++)
        cout << v[i] << " ";

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