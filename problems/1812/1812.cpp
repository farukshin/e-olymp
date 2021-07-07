// https://www.e-olymp.com/ru/problems/1812
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    while(cin >> s)
    {
        if(s == "#") break;
        map<char, int> mp;
        for(auto ch : s)
            mp[ch]++;
        if(s.size() / 2 + (s.size() % 2 ? 1 : 0) <= mp['A'])
            cout << "need quorum\n";
        else if(mp['Y'] > mp['N'])
            cout << "yes\n";
        else if(mp['Y'] < mp['N'])
            cout << "no\n";
        else if(mp['Y'] == mp['N'])
            cout << "tie\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}