//https://www.e-olymp.com/ru/problems/7411
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
    int ans = 0;
    if(s[0] == 'x' && s[1] == '+')
        ans = (s[4] - '0') - (s[2] - '0');
    else if(s[0] == 'x' && s[1] == '-')
        ans = (s[4] - '0') + (s[2] - '0');
    else if(s[2] == 'x')
    {
        ans = (s[4] - '0') - (s[0] - '0');
        ans *= (s[1] == '+' ? 1 : -1);
    }
    else if(s[4] == 'x' && s[1] == '+')
        ans = (s[0] - '0') + (s[2] - '0');
    else if(s[4] == 'x' && s[1] == '-')
        ans = (s[0] - '0') - (s[2] - '0');

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