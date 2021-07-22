// https://www.e-olymp.com/ru/problems/8692
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool check(string s)
{
    for(int i = 0; i < s.size() - 1; i++)
        if(s[i] > s[i + 1]) return false;
    return true;
}
int st = 0;

void trim0(string &s)
{
    int i = 0;
    for(; i < s.size(); i++)
        if(s[i] != '0')
            break;
    s = s.substr(i);
}

void solve()
{
    string s;
    cin >> s;
    st++;

    while(!check(s))
    {
        for(int i = 1; i < s.size(); i++)
            if(s[i - 1] > s[i])
            {
                s[i - 1] -= 1;
                s = s.substr(0, i) + string(s.size() - i, '9');
            }
        trim0(s);
    }
    cout << "Case #" << st << ": " << s << "\n";
}

int main()
{
    //cout.setf(std::ios::fixed); //cout.precision(2);
    //solve();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}