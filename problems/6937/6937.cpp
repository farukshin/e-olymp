//https://www.e-olymp.com/ru/problems/6937
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(3);

    ll n;
    cin >> n;
    map<pair<char, char>, int> mp = {
        {{'H', 'P'}, 103},
        {{'H', 'S'}, 329},
        {{'H', 'K'}, 466},
        {{'H', 'T'}, 148},
        {{'P', 'S'}, 408},
        {{'P', 'K'}, 577},
        {{'P', 'T'}, 260},
        {{'S', 'K'}, 287},
        {{'S', 'T'}, 226},
        {{'K', 'T'}, 312}};


    for (ll j = 0; j < n; j++)
    {
        string s;
        cin>>s;
        s = 'H' + s + 'H';
        ll ans = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            pair<char, char> p = {s[i], s[i + 1]};
            if (mp.count(p) == 0)
                swap(p.first, p.second);
            ans += mp[p];
        }
        cout << "Case " << j + 1 << ": " << ans << endl;
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
    //int t; cin >> t; while(t--) solve();

    return 0;
}