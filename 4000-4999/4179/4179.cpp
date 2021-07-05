// https://www.e-olymp.com/ru/problems/4179
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int s38(int n)
{
    n = n >> 6;
    return (n & 4) * 4 + (n & 2) * 2 + (n & 1);
}

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if(cur % 2 == 0 && s38(cur) % 2 != 0)
            mp[cur]++, ans++;
    }
    cout << ans << "\n";
    for(auto d : mp)
        for(int i = 0; i < d.second; i++)
            cout << d.first << " ";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}