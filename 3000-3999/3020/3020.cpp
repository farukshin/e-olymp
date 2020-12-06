//https://www.e-olymp.com/ru/problems/3020
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    map<char, string> mp = {
        {' ', "%20"},
        {'!', "%21"},
        {'$', "%24"},
        {'%', "%25"},
        {'(', "%28"},
        {')', "%29"},
        {'*', "%2a"}};

    string s;
    while (getline(cin, s))
    {
        if(s[0] == '#')
            break;
        for (auto ch : s)
            if (mp.count(ch) != 0)
                cout << mp[ch];
            else
                cout << ch;
        cout << endl;
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