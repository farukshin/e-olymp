//https://www.e-olymp.com/ru/problems/8970
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    vector<int> v(n, -100);
    int m = n / 2 + (n % 2 == 0 ? 0 : 1);
    for(int i = 0; i < m; i++)
        cin >> v[i * 2];
    for(int i = m; i < n; i++)
        cin >> v[(i - m) * 2 + 1];
    for(auto d : v)
        cout << d << " ";

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