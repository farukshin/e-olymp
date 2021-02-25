//https://www.e-olymp.com/ru/problems/4740
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
    int mx = 0;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        mp[cur]++;
        if(mx < mp[cur])
        {
            mx = mp[cur];
            v.clear();
            v.push_back(cur);
        }
        else if(mx == mp[cur])
            v.push_back(cur);
    }
    sort(v.begin(), v.end());
    //cout<<v.size()<<endl;
    cout << v[0] << endl;


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