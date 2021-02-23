//https://www.e-olymp.com/ru/problems/8972
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    bool succes = false;
    for(int i = 0; i < n; i++)
        if(mp[v[i]] > 1)
            mp[v[i]] = 0, succes = true, cout << v[i] << " ";

    if(!succes)
        cout << "NO" << endl;
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