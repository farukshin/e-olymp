//https://www.e-olymp.com/ru/problems/423
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, cur;
    string s;
    cin >> n >> s;
    n = n % 10 + 2;
    cur = 1;
    if(n == 10)
    {
        cout << s << endl;
        return;
    }
    ll ans = 0;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        char ch = s[i];
        if(ch >= '0' && ch <= '9')
            ans += (ch - '0') * cur;
        else if(ch >= 'A' && ch <= 'Z')
            ans += ((ch - 'A') + 10) * cur;
        cur *= n;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}