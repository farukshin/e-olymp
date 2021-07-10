// https://www.e-olymp.com/ru/problems/379
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    int k1 = 0;

    for(auto ch : s)
        if(ch == '1')
            k1++;
    cout << s.substr(0, s.length() - 1);
    if(s[s.length() - 1] == 'e' && k1 % 2 == 0 || s[s.length() - 1] == 'o' && k1 % 2 == 1)
        cout << '0';
    else cout << '1';
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