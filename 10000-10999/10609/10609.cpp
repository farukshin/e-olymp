// https://www.eolymp.com/ru/problems/10609
#include <iostream>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    for (int i = 0; i < n; i++)
        if (mp[v[i]] == k)
        {
            cout << v[i];
            return;
        }
    cout << -1;
}

int main()
{
    solve();
    return 0;
}
