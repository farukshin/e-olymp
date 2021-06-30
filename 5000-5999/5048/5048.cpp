// https://www.e-olymp.com/ru/problems/5048
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        mp[cur]++;
        k++;
    }
    cout << ( (mp[3] <= 1) && (0.75 * k <= 1.0 * mp[5])  ? "Degree with honors" : "Ordinary degree");
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}