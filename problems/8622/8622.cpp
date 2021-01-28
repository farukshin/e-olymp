//https://www.e-olymp.com/ru/problems/8622
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);

    int n;
    cin >> n;
    ll ans = 0;
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '0')
        {
            cout << "NO" << endl;
            return;
        }

    cout << (n % (s[0] - '0') == 0 && n % (s[1] - '0') == 0 && n % (s[2] - '0') == 0 && n % (s[3] - '0') == 0 ? "YES" : "NO") << endl;
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
