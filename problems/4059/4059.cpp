// https://www.e-olymp.com/ru/problems/4059
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    map<int, ll> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a] = b;
    }
    string s;
    cin >> s;
    ll ans = 1;
    for(auto ch : s)
        if(ch >= '0' && ch <= '9')
        {
            int cur = ch - '0';
            if(mp[cur] == 0)
            {
                cout << 0;
                return;
            }
            ans *= mp[cur], mp[cur]--;
        }
        else
        {
            cout << 0;
            return;
        }
    cout << ans;
}

int main()
{
    //cout.setf(std::ios::fixed); //cout.precision(2);
    solve();
    // int t; cin >> t; while (t--) solve();
    return 0;
}