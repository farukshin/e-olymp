// https://www.e-olymp.com/ru/problems/2777
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, a, b;

int check(int n)
{
    int k1 = 0, k0 = 0;
    while(n)
    {
        if(n & 1) k1++;
        else k0++;
        n = (n >> 1);
    }
    return k0 * a + k1 * b;
}

void solve()
{
    cin >> n >> a >> b;

    map<int, int> mp;
    for(int i = 1; i <= 100; i++)
        mp[i] = check(i);

    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for(int j = 0; j < k; j++)
        {
            int cur;
            cin >> cur;
            if(!mp.count(cur))
            {
                int cc = check(cur);
                mp[cur] = cc;
            }
            ans += mp[cur];
        }
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}