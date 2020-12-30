//https://www.e-olymp.com/ru/problems/266
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string a, b;
    cin >> a >> b;

    if (a.length() > b.length())
        cout << ">" << endl;
    else if (a.length() < b.length())
        cout << "<" << endl;
    else if (a == b)
        cout << "=" << endl;
    else if (a > b)
        cout << ">" << endl;
    else if (a < b)
        cout << "<" << endl;
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
