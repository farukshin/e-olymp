// https://www.e-olymp.com/ru/problems/3364
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    string s;
    getline(cin, s);
    map<int, string> mp;
    for(int i = 0; i < n; i++)
    {
        getline(cin, s);
        mp[i + 1] = s;
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int cur;
        cin >> cur;
        if(mp.count(cur))
            cout << "Rule " << cur << ": " << mp[cur] << "\n";
        else
            cout << "Rule " << cur << ": No such rule\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}