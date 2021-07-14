// https://www.e-olymp.com/ru/problems/10170
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{

    int n, ans = 0;
    cin >> n;

    for(int i = 1; i <= n - 1; i++)
        ans += (n - 1) / i;
    cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}