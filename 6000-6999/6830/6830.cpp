//https://www.e-olymp.com/ru/problems/6830
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    string s;
    cin >> n >> s;
    if(n == 0)
    {
        cout << 0;
        return;
    }
    int k0 = 0, k1 = 0;
    int ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int cur1, cur0;

        cur1 = k1 + (ch == 'M' ? 1 : 0), cur0 = k0 + (ch == 'W' ? 1 : 0);
        if(abs(cur0 - cur1) <= n)
        {
            ans++;
            k1 = cur1, k0 = cur0;
            continue;
        }

        cur1 = k1 + (s[i + 1] == 'M' ? 1 : 0), cur0 = k0 + (s[i + 1] == 'W' ? 1 : 0);
        if(abs(cur0 - cur1) <= n)
        {
            ans++;
            swap(s[i], s[i + 1]);
            k1 = cur1, k0 = cur0;
            continue;
        }

        break;
    }
    cout << ans << "\n";
}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}