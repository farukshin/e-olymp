//https://www.e-olymp.com/ru/problems/2631
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n;
    cin >> n;
    string s;
    getline(cin, s);

    while(n--)
    {
        getline(cin, s);
        istringstream iss;

        iss.str(s);
        ll val;
        vector<ll> v;
        while(iss >> val)
            v.push_back(val);

        ll ans = 0;
        for(int i = 0; i < v.size(); i++)
            for(int j = i + 1; j < v.size(); j++)
            {
                ll cur = gcd(v[i], v[j]);
                ans = max(ans, cur);
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
    //string cur; int t; cin >> t; getline(cin,cur); while (t--) solve();

    return 0;
}