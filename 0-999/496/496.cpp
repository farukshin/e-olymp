//https://www.e-olymp.com/ru/problems/496
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s1, s2;
    cin >> s1 >> s2;

    map<char, int> mp1, mp2;

    for(auto ch : s1)
    {
        if(ch >= 'A' && ch <= 'Z')
            ch = 'a' + (ch - 'A');
        mp1[ch]++;
    }
    for(auto ch : s2)
    {
        if(ch >= 'A' && ch <= 'Z')
            ch = 'a' + (ch - 'A');
        mp2[ch]++;
    }

    if(mp1.size() != mp2.size())
    {
        cout << "No" << endl;
        return;
    }

    bool ans = true;

    auto it1 = mp1.begin();
    auto it2 = mp2.begin();
    while( true )
    {
        if( it1 == mp1.end() || it2 == mp2.end() )
            break;
        else if(it1->first != it2->first || it1->second != it2->second)
        {
            ans = false;
            break;
        }
        ++it1;
        ++it2;
    }

    cout << (ans ? "Yes" : "No") << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}