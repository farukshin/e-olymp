//https://www.e-olymp.com/ru/problems/378
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s, dec;
    getline(cin, s);
    cin >> dec;
    //cout<<dec<<endl;

    map<char, char> mp;
    for(int i = 0; i < 26; i++)
        mp['A' + i] = dec[i];

    for(auto ch : s)
        if(ch >= 'A' && ch <= 'Z' && mp.count(ch) > 0)
            cout << mp[ch];
        else cout << ch;
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