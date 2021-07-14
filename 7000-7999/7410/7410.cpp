// https://www.e-olymp.com/ru/problems/7410
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if((a + b + c) % 3 != 0)
    {
        cout << "IMPOSSIBLE";
        return;
    }
    int k = (a + b + c) / 3;
    int ans = (a > k ? a - k : 0) + (b > k ? b - k : 0) + (c > k ? c - k : 0);
    cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}