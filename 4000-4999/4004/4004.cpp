//https://www.e-olymp.com/ru/problems/4004
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void check(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if(ch >= 'A' && ch <= 'Z')
            s[i] = 'a' + (ch - 'A');
    }
    cout << (s.find("problem") < s.size() ? "yes\n" : "no\n");
}

void solve()
{
    string s;
    while(getline(cin, s))
        check(s);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}