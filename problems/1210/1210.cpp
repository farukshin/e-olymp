//https://www.e-olymp.com/ru/problems/1210
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n, a, s = 0;
    cin >> n >> a;

    if(a > 1)
    {
        ll pre = a;
        for(ll i = 1; i <= n; i++)
            s += i * pre, pre *= a;
    }
    else
        s = n * (n + 1) / 2;
    cout << s;
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