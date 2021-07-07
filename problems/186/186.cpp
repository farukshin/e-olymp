// https://www.e-olymp.com/ru/problems/186
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    int ans = 0;
    ld cur = 1.0;

    while(true)
    {
        cur *= 2;
        ans++;
        if(int(cur + 0.001) == n) break;
        if(cur > n)
            cur /= 10;
    }
    cout << ans;
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