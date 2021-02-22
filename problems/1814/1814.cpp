//https://www.e-olymp.com/ru/problems/1814
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    map<char, char> mp =
    {
        {'b', 'd'},
        {'d', 'b'},
        {'p', 'q'},
        {'q', 'p'},
        {'i', 'i'},
        {'o', 'o'},
        {'w', 'w'},
        {'v', 'v'},
        {'x', 'x'}
    };

    string s;
    while(cin >> s)
    {
        if(s == "#")
            break;
        bool success = true;
        string cur = "";
        for(auto ch : s)
            if(mp.count(ch) == 0)
            {
                success = false;
                cout << "INVALID" << endl;
                break;
            }
            else cur += mp[ch];
        if(success)
        {
            reverse(cur.begin(), cur.end());
            cout << cur << endl;
        }
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
    //int t; cin >> t; while (t--) solve();

    return 0;
}