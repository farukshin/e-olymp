// https://www.e-olymp.com/ru/problems/1430
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    map<string, int> mp;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> v[i] >> s;
        mp[s] = i;
    }

    for(auto d : v) cout << mp[d] + 1 << "\n";
}

int main()
{
    solve();
    return 0;
}
