//https://www.e-olymp.com/ru/problems/6052
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    while(getline(cin, s))
    {
        if(s == "#") break;
        int ans = 0;
        for(int i = 0; i < s.size(); i++)
            if(s[i] >= 'A' && s[i] <= 'Z' || s[i] == ' ')
            {
                int n = (s[i] == ' ' ? 0 : (s[i] - 'A') + 1);
                ans += n * (i + 1);
            }
        cout << ans << endl;
    }

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