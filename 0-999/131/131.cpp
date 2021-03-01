//https://www.e-olymp.com/ru/problems/131
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s, cur;
    int n;
    cin >> s >> n;
    map<char, int> mp;
    for(auto ch : s)
        mp[ch]++;

    //cout<<n<<endl;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> cur;
        bool success = true;
        map<char, int> mcur;
        for(auto ch : cur)
        {
            mcur[ch]++;
            if(mcur[ch] > mp[ch])
            {
                success = false;
                break;
            }
        }

        if(success)
            ans++;

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

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}