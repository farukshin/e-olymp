// https://www.e-olymp.com/ru/problems/10443
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m, cur;
    cin >> n >> m;
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> cur;
        mp[cur]++;
    }
    for(int i = 0; i < m; i++)
    {
        cin >> cur;
        cout << mp[cur] << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}