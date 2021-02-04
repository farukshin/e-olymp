//https://www.e-olymp.com/ru/problems/1609
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n;
    cin >> n;
    map<char, int> mp;
    string s = to_string(n);
    for (auto ch : s)
        if (ch >= '0' && ch <= '9')
            mp[ch]++;


    char ch;
    cin >> ch;
    cout << mp[ch] << endl;

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
