// https://www.e-olymp.com/ru/problems/7735
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string alh = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    int mod = alh.size();
    int k;
    while(cin >> k, k != 0)
    {
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] = alh[int(s[i] - 'A' + k) % mod];
            else if(s[i] == '_')
                s[i] = alh[int(26 + k) % mod];
            else if(s[i] == '.')
                s[i] = alh[int(27 + k) % mod];

        reverse(begin(s), end(s));
        cout << s << "\n";
    }
}

int main()
{
    solve();
    return 0;
}
