// https://www.e-olymp.com/ru/problems/10604
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    while(getline(cin, s))
    {
        for(auto ch : s)
            if(ch == 'a')
                cout << 'b';
            else if(ch == 'A')
                cout << 'B';
            else if(ch == 'b')
                cout << 'a';
            else if(ch == 'B')
                cout << 'A';
            else cout << ch;
        cout << "\n";
    }
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}