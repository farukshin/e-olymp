//https://www.e-olymp.com/ru/problems/4766
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void ms_to_sr(vector<vector<int>>& ms, vector<pair<int, int>>& sr)
{
    int n = (int)ms.size();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (ms[i][j] != 0)
                sr.push_back({ i, j });
}

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> ms(n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            ms[i].push_back(0);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> ms[i][j];

    vector<pair<int, int>> sr;
    ms_to_sr(ms, sr);

    for (auto s : sr)
        cout << s.first + 1 << " " << s.second + 1 << endl;
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
