//https://www.e-olymp.com/ru/problems/2031
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    int f1 = 1, f2 = 1;
    cout << "1\n1\n";
    for(int i = 3; i <= n; i++)
    {
        int t = f2 + f1;
        f1 = f2;
        f2 = t;
        cout << f2 << "\n";
    }

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}