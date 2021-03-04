//https://www.e-olymp.com/ru/problems/1293
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n;
    vector<int> v;
    while(cin >> n)
    {
        if(n == 0) break;
        v.clear();
        v.resize(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        cout << (n % 2 == 0 ? (ld)(1.0 * (v[n / 2 - 1] + v[n / 2]) / 2) : v[n / 2]) << endl;
    }

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