//https://www.e-olymp.com/ru/problems/2472
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<set<int>> ss(n + 1);

    while (k--) {
        int a, b, c;
        cin >> a >> b;
        if (a == 1)
        {
            cin >> c;
            ss[b].insert(c);
            if (b != c)
                ss[c].insert(b);
        }
        else if (a == 2)
        {
            if (ss[b].size() > 0)
                for (auto node : ss[b])
                    cout << node << " ";
            cout << endl;
        }
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
    //int t; cin >> t; while(t--) solve();

    return 0;
}
