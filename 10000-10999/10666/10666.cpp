// https://www.e-olymp.com/ru/problems/10666
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve()
{
    string s;
    int n;
    map<string, int> mp;
    while(cin >> s >> n)
        mp[s] += n;

    for(auto d : mp)
        cout << d.first << " " << d.second << "\n";

}

int main()
{
    solve();
    return 0;
}
