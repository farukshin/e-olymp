//https://www.e-olymp.com/ru/problems/9407
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n, m, z;
    string a, b, c, d;
    cin >> a >> b;
    d = b;
    n = b.length();
    m = a.length();
    c = a.substr(m - n, n);
    if(a.find(b) == EOF)
    {
        for (int i = 1; i <= n && b != c; i++)
        {
            b.erase(n - i, 1);
            c.erase(0, 1);
        }
        z = c.length();
        d.erase(0, z);
        cout << a + d << endl;
    }
    else cout << a << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //string cur; int t; cin >> t; getline(cin,cur); while (t--) solve();

    return 0;
}