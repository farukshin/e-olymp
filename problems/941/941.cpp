//https://www.e-olymp.com/ru/problems/941
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(ios::fixed);
    // cout.precision(0);
    string s;
    cin >> s;

    ll p = 1, sum = 0;
    for (auto ch : s)
        if (ch >= '0' && ch <= '9')
        {
            p *= ch - '0';
            sum += ch - '0';
        }



    cout << p - sum << endl;
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
