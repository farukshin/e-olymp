// https://www.e-olymp.com/ru/problems/1956
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int k16(char ch)
{
    if(ch >= '0' && ch <= '9')
        return int(ch - '0');
    else return 10 + int(ch - 'A');
}

void solve()
{
    string s;
    cin >> s;

    ll ans = 0;
    for(int i = s.size() - 1; i >= 0; i--)
        ans += k16(s[i]) % 5;
    ans %= 5;
    cout << ans;

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