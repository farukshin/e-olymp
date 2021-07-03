// https://www.e-olymp.com/ru/problems/4111
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    map<char, int> mp;
    string s1, s2;
    cin >> s1 >> s2;
    for(auto ch : s1)
        mp[ch]++;
    for(auto ch : s2)
        mp[ch]--;
    for(auto d : mp)
        if(d.second != 0)
        {
            cout << "NO\n";
            return;
        }

    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(6);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}