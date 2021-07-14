// https://www.e-olymp.com/ru/problems/7288
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if(a > b) swap(a, b);
    ll mn = ceil(1.0 * b / 2);
    cout << mn << " " << max(a, mn);
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