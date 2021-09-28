// https://www.e-olymp.com/ru/problems/9703
//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
using namespace std;

int n;
string ans = "NONE";

void solve()
{
    cin >> n;
    map<string, int> mp;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
        if(mp[s] > n / 2)
            ans = s;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    solve();
    return 0;
}
