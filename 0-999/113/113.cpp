//https://www.e-olymp.com/ru/problems/113
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int shl(int a, int s)
{
    return (a << s) | (a >> 32 - s);
}
int shr(int a, int s)
{
    return (a >> s) | (a << 32 - s);
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    map<int, int> mp;
    int mx = 0;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        mp[cur]++;
        if(mp[cur] > mx) mx = mp[cur];
    }

    cout << n - mx << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}