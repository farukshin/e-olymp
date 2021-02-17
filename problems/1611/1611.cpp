//https://www.e-olymp.com/ru/problems/1611
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    cin >> s;

    int l, r;
    cin >> l >> r;

    string s2 = s.substr(l - 1, r - l + 1);
    reverse(s2.begin(), s2.end());
    //cout << s2 << endl;

    cout << s.substr(0, l - 1) << s2 << s.substr(r);
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