// https://www.e-olymp.com/ru/problems/9016
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, q;
    cin >> n >> q;
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        mp[cur]++;
    }
    for(int i = 0; i < q; i++)
    {
        int cur;
        cin >> cur;
        cout << (mp.count(cur) ? "YES" : "NO") << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    return 0;
}