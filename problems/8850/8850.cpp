//https://www.e-olymp.com/ru/problems/8850
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;
    string s = to_string(n);
    ll ans = 0;
    bool start = false;
    for (int i = s.size() - 1; i >= 0; i--)
        if (s[i] >= '0' && s[i] <= '9')
            ans += s[i] - '0';
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}