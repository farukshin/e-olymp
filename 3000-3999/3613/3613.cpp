// https://www.e-olymp.com/ru/problems/3613
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    int m, n;
    cin >> m >> n;

    bitset<40000000> mask;
    mask.set(0);

    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        for(int j = m; j >= cur; j--)
            if(mask[j - cur] == 1) mask.set(j);
    }
    int ans = m;
    while(!mask[ans])
        ans--;
    cout << ans;
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