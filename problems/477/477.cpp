// https://www.e-olymp.com/ru/problems/477
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;
    //ll mx = ceil(pow(1.0*n, 1.0*1/3));
    ll mx = 10000;
    bool first = true;

    for(ll a = -mx; a <= mx; a++)
    {
        ll a3 = a * a * a;
        for(ll b = a; b <= mx; b++)
        {
            ll res = a3 + b * b * b;
            if(a > 0 && res > n)
                break;
            else if(res == n)
                cout << (first ? "" : "\n") << a << " " << b, first = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(5);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}