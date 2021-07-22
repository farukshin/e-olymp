// https://www.e-olymp.com/ru/problems/9720
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    int n, q;
    cin >> n;
    map<string, set<string>> p, f;

    for(int i = 0; i < n; i++)
    {
        string pp, ff;
        cin >> pp >> ff;
        p[pp].insert(ff);
        f[ff].insert(pp);
    }
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        string qq;
        cin >> qq;
        if(p.count(qq))
            for(auto d : p[qq])
                cout << d << " ";
        else if(f.count(qq))
            for(auto d : f[qq])
                cout << d << " ";
        else continue;
        cout << "\n";
    }
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}