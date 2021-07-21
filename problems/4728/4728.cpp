// https://www.e-olymp.com/ru/problems/4728
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s, ans = "";
    cin >> s;
    bool success = false;
    for(int i = 0; i < s.size() - 1 && !success; i++)
        if(s[i] == s[i + 1])
            success = true, ans = s.substr(i, 2);
        else if(i > 0 && s[i - 1] == s[i + 1])
            success = true, ans = s.substr(i - 1, 3);
    cout << (success ? ans : "0");
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}