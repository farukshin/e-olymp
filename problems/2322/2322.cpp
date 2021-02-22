//https://www.e-olymp.com/ru/problems/2322
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int x, n;
    cin >> x >> n;

    vector<bool> v(n, false);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            int cur;
            cin >> cur;
            if(cur == x)
                v[j] = true;
        }

    for(int i = 0; i < n; i++)
        cout << (v[i] ? "YES" : "NO") << endl;
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