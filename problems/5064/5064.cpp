// https://www.e-olymp.com/ru/problems/5064
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;
    ll l = 1, r = 1e9;
    while(r - l > 1)
    {
        ll mid = (r + l) / 2;
        ll sum = (mid + 1) * mid / 2;
        if(sum > n)
            r = mid;
        else
            l = mid;
    }
    cout << ((l + 1)*l / 2 == n ? l : -1);

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