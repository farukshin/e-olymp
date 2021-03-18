//https://www.e-olymp.com/ru/problems/3450
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    char v[9][9];
    for(int i = 8; i >= 1; i--)
        for(int j = 1; j < 9; j++)
            cin >> v[i][j];
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        char ch1, ch2;
        int a, b;
        cin >> ch1 >> a >> ch2 >> b;
        int m1 = ch1 - 'a' + 1, m2 = ch2 - 'a' + 1;
        int n1 = a, n2 = b;
        cout << v[n1][m1];
        v[n2][m2] = v[n1][m1];
        v[n1][m1] = '.';
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}