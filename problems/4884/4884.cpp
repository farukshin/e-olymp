// https://www.e-olymp.com/ru/problems/4884
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    ll ans = 0;
    set<int> stx, sty;

    for(int i = 0; i < n; i++)
    {
        int a, b;
        char ch;
        cin >> a >> b >> ch;
        if(ch == 'N' || ch == 'S')
            stx.insert(a);
        else if(ch == 'W' || ch == 'E')
            sty.insert(b);
    }

    ans = ll(m * m * 6) - stx.size() * m * 4 - sty.size() * m * 4 + stx.size() * sty.size() * 2;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}