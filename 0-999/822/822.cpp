// https://www.e-olymp.com/ru/problems/822
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool isNum (char ch)
{
    return ch >= '0' && ch <= '9';
}

void solve()
{
    string s, ans;
    cin >> s;
    int n = 0;
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if(isNum(ch))
            n = n * 10 + int(ch - '0');
        else if(!isNum(ch) && n != 0)
        {
            ans += string(n, ch);
            n = 0;
        }
        else if(!isNum(ch) && n == 0)
            ans += ch;
    }
    while(ans.length())
        if(ans.length() > 40)
            cout << ans.substr(0, 40) << "\n", ans = ans.substr(40);
        else
            cout << ans, ans = "";
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