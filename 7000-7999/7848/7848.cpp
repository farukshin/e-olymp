//https://www.e-olymp.com/ru/problems/7848
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
        if (i % 2 == 1)
        {
            int cur = v[i];
            v[i] = v[i - 1];
            v[i - 1] = cur;
        }

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    //cout << sets.size() << endl;
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
