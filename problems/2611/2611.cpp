//https://www.e-olymp.com/ru/problems/2611
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n;
    char a, b;
    cin >> n >> a >> b;
    string s = to_string(n);

    ll ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == a)
            s[i] = b;
        ans = ans * 10 + (s[i] - '0');
    }

    cout << ans << endl;;

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
