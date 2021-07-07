// https://www.e-olymp.com/ru/problems/10303
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    ld ans = 0;
    for(int i = 1; i <= n; i++)
        ans += 1.0 / i;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(4);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}