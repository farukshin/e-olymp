//https://www.e-olymp.com/ru/problems/8223
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b;
    string s;
    cin >> s >> a >> b;
    cout << b - a + 2 << "\n";
    int c = a;
    for (int i = a - 1; i < b - 1; i++)
    {
        for (int j = a - 1; j < c; j++)
            cout << s[j];
        cout << "\n";
        c++;
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