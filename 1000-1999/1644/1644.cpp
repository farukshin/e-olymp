// https://www.e-olymp.com/ru/problems/1644
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void changes(string &s)
{
    bool fl = false;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '.')
        {
            fl = true;
            int cntD = s.size() - 1 - i;
            if(cntD < 9)
                s += string (9 - cntD, '0');
        }
    if(!fl)
        s += ".000000000";

    s = s.substr(0, s.size() - 10) + s.substr(s.size() - 9);

}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    changes(s1);
    changes(s2);
    ll a = stoll(s1), b = stoll(s2);
    cout << a / b;
}

int main()
{
    solve();
    return 0;
}
