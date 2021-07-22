// https://www.e-olymp.com/ru/problems/4857
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    cout << ceil(1.0 * max(max(a, b), max(c, d)) / k);
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