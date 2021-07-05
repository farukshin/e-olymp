// https://www.e-olymp.com/ru/problems/1083
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int mod = 10000;
    vector<int> par(mod);

    for(int i = 0; i < mod; i++)
    {
        int next = (i * i) % mod;
        par[i] = next;
    }

    int cur, n;
    cin >> cur >> n;
    while(--n)
        cur = par[cur];
    cout << cur;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}