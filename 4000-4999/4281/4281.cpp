// https://www.e-olymp.com/ru/problems/4281
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    getline(cin, s);

    for(auto ch : s)
        if(ch >= 'a' && ch <= 'z')
            cout << char('A' + ch - 'a');
        else if(ch >= 'A' && ch <= 'Z')
            cout << char('a' + ch - 'A');
        else cout << ch;
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