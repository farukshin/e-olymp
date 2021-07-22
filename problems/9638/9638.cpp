// https://www.e-olymp.com/ru/problems/9638
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if(a > b) swap(a, b);

    if((b - a) % 2 != 0)
        cout << "-";
    else
        cout << a + (b - a) / 2;
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