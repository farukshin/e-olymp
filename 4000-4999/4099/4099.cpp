//https://www.e-olymp.com/ru/problems/4099
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool is_word(char ch)
{
    return ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch == '-';
}

string mytrim(string s)
{
    int i = 0;
    while(i < s.length() && !is_word(s[i]))
        i++;
    if(i)
        s = s.substr(i);

    i = s.length();
    while(i >= 0 && !is_word(s[i]))
        i--;
    if(i != s.length())
        s = s.substr(0, i + 1);

    for(int i = 0; i < s.size(); i++)
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = 'a' + (s[i] - 'A');
    return s;
}

void solve()
{
    string s;
    string ans = "";
    int len = -1;
    while(cin >> s)
    {
        if(s == "E-N-D")
            break;
        s = mytrim(s);
        if(int(s.length()) > len)
        {
            len = int(s.length());
            ans = s;
        }
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}