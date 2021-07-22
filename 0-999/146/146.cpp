// https://www.e-olymp.com/ru/problems/146
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    ld k = 1.0;
    ld ans = 0;
    for(int i = 0; i < n; i++)
        ans += k / 2, k /= 4;
    cout << ans * 100;
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