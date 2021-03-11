//https://www.e-olymp.com/ru/problems/6260
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n;
    cin >> n;
    map<char, int> mp;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s[0]]++;
    }
    int ans = 0;
    while(mp.count('A' + ans))
        ans++;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //string cur; int t; cin >> t; getline(cin,cur); while (t--) solve();

    return 0;
}