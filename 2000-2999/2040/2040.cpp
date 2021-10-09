// https://www.e-olymp.com/ru/problems/2040
//#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

void solve()
{
    string s;
    while(getline(cin, s))
    {
        int mp[26] = {0}, ans[26] = {0};
        for(auto ch : s)
        {
            assert(ch >= 'a' && ch <= 'z');
            mp[ch - 'a']++;
        }
        getline(cin, s);
        for(auto ch : s)
        {
            assert(ch >= 'a' && ch <= 'z');
            if(mp[ch - 'a'] > 0)
                mp[ch - 'a']--, ans[ch - 'a']++;
        }

        for(int k = 0; k < 26; k++)
            for(int i = 0; i < ans[k]; i++)
                cout << char('a' + k);
        cout << "\n";
    }
}

int main()
{
    solve();
    return 0;
}
