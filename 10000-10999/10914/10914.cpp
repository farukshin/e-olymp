// https://www.eolymp.com/ru/problems/10914
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{
    int n, sm = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &d : v)
    {
        cin >> d;
        sm += d;
    }

    for (int i = 0; i < n; i++)
    {
        ld ans = 1.0 * v[i] * 100 / sm;
        cout << std::fixed << setprecision(2) << ans << "% ";
    }
}

int main()
{
    solve();
    return 0;
}
