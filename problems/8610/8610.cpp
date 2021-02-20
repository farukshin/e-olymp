//https://www.e-olymp.com/ru/problems/8610
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
        cout << char('a' + ch - 'a' - 1) << " " << char('a' + ch - 'a' + 1) << endl;
    else if (ch >= 'A' && ch <= 'Z')
        cout << char('A' + ch - 'A' - 1) << " " << char('A' + ch - 'A' + 1) << endl;
    //  cout << sig(n) << endl;
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