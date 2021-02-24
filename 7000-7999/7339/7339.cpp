//https://www.e-olymp.com/ru/problems/7339
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(ios::fixed);
    // cout.precision(0);

    int n;
    cin >> n;
    string s = "";

    while(n)
    {
        s = to_string(n % 2) + s;
        n /= 2;
    }
    cout << s << endl;

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