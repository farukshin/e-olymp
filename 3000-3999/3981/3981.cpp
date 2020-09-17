//https://www.e-olymp.com/ru/problems/3981
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void ms_to_ss(vector<vector<int>> &ms, vector<vector<int>> &ss)
{
    int n = (int)ms.size();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (ms[i][j] != 0)
                ss[i].push_back(j);
}

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> ms(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            int cur;
            cin >> cur;
            ms[i].push_back(cur);
        }

    vector<vector<int>> ss(n);
    ms_to_ss(ms, ss);

    for (int i = 0; i < n; i++)
    {
        cout << ss[i].size() << " ";
        for (int j = 0; j < ss[i].size(); j++)
            cout << ss[i][j] + 1 << " ";
        cout << endl;
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
