//https://www.e-olymp.com/ru/problems/5086
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    if(s1.length() > s2.length())
    {
        cout << ">";
        return;
    }
    else if(s1.length() < s2.length())
    {
        cout << "<";
        return;
    }
    else if(s1 == s2)
    {
        cout << "=";
        return;
    }

    for(int i = 0; i < s1.length(); i++)
        if((s1[i] - '0') > (s2[i] - '0'))
        {
            cout << ">";
            return;
        }
        else if((s1[i] - '0') < (s2[i] - '0'))
        {
            cout << "<";
            return;
        }

    cout << "=";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    // cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    return 0;
}