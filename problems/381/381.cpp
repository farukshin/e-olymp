// https://www.e-olymp.com/ru/problems/381
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll b, n;
    cin >> b >> n;
    ll l = 0, r = 1000000;

    while(r - l > 1)
    {
        ll mid = (r + l) / 2;
        //printf("l=%lld r=%lld mid=%lld\n", l,r,mid);

        if(ll(1) * pow(mid, n) > b)
            r = mid;
        else
            l = mid;

    }

    cout << (abs(pow(l, n) - b) <= abs(pow(l + 1, n) - b) ? l : l + 1 );
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(5);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}