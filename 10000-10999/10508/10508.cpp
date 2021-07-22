// https://www.e-olymp.com/ru/problems/10508
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    int v[26] = {0};
    while(getline(cin, s))
        for(auto ch : s)
            if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
                v[int(tolower(ch) - 'a')]++;

    for(auto d : v)
        cout << d << " ";
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}