//https://www.e-olymp.com/ru/problems/3986
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void istok_stok(vector<vector<int>>& ms, const int countNode, vector<int>& istok, vector<int>& stok)
{
    istok.clear();
    stok.clear();

    for (int i = 0; i < countNode; i++)
    {
        bool success = true;
        for (int j = 0; j < countNode && success; j++)
            if (ms[i][j] != 0)
                success = false;
        if (success)
            stok.push_back(i);
    }

    for (int i = 0; i < countNode; i++)
    {
        bool success = true;
        for (int j = 0; j < countNode && success; j++)
            if (ms[j][i] != 0)
                success = false;
        if (success)
            istok.push_back(i);
    }
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    vector<vector<int>> ms(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> ms[i][j];

    vector<int> istok, stok;
    istok_stok(ms, n, istok, stok);

    sort(istok.begin(), istok.end());
    sort(stok.begin(), stok.end());

    cout << istok.size() << " ";
    for (auto s : istok)
        cout << s + 1 << " ";

    cout << endl << stok.size() << " ";
    for (auto s : stok)
        cout << s + 1 << " ";
    cout << endl;


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