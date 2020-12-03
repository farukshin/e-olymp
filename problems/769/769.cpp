//https://www.e-olymp.com/ru/problems/769
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);
    map<int, int> t1, t2;
    int n = 3;

    while (n--)
    {
        int a, b;
        cin >> a >> b;
        t1[a] = (t1[a] + 1) % 2;
        t2[b] = (t2[b] + 1) % 2;
    }
    for (auto t : t1)
        if (t.second)
        {
            cout << t.first << " ";
            break;
        }

    for (auto t : t2)
        if (t.second)
        {
            cout << t.first << endl;
            break;
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