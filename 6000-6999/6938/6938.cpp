//https://www.e-olymp.com/ru/problems/6938
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
    map<string, int> mp =
    {
        {"Q1", 0},
        {"Q2", 0},
        {"Q3", 0},
        {"Q4", 0},
        {"AXIS", 0}
    };

    for (ll i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        ll c = a * b;
        if (a == 0 || b == 0)
            mp["AXIS"]++;
        else if (c > 0)
            mp[(a > 0 ? "Q1" : "Q3")]++;
        else if (c < 0)
            mp[(a > 0 ? "Q4" : "Q2")]++;
    }
    for (auto s : mp)
        if (s.first != "AXIS")
            cout << s.first << ": " << s.second << endl;

    cout << "AXIS" << ": " << mp["AXIS"] << endl;
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