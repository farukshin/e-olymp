//https://www.e-olymp.com/ru/problems/8295
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

map<int, string> mp;

string fibStr(int n)
{
    if(mp.count(n) > 0)
        return mp[n];

    string ans = fibStr(n - 1) + fibStr(n - 2);
    mp[n] = ans;
    return ans;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(9);

    int n;
    cin >> n;
    mp[0] = "a";
    mp[1] = "b";

    cout << fibStr(n) << "\n";
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