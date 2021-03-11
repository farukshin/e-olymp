//https://www.e-olymp.com/ru/problems/7388
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n;
    cin >> n;
    string s;
    getline(cin, s);

    for(int i = 0; i < n; i++)
    {
        getline(cin, s);
        map<char, int> mp;
        for(auto ch : s)
        {
            char ch2 = (ch >= 'A' && ch <= 'Z' ? 'a' + (ch - 'A') : ch);
            if(ch2 >= 'a' && ch2 <= 'z')
                mp[ch2]++;
        }

        int mn = mp['a'];
        for(int c = 1; c < 26; c++)
            if(mn > mp['a' + c])
                mn = mp['a' + c];

        cout << "Case " << i + 1 << ": ";
        if(mn == 0)
            cout << "Not a pangram" << endl;
        else if(mn == 1)
            cout << "Pangram!" << endl;
        else if(mn == 2)
            cout << "Double pangram!!" << endl;
        else if(mn >= 3)
            cout << "Triple pangram!!!" << endl;

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