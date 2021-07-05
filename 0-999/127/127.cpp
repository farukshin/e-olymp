// https://www.e-olymp.com/ru/problems/127
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll s, sum = 1, d = 1, ans = 1;
    cin >> s;
    while (sum < s)
    {
        ans++;
        d = d * 2 + ans;
        sum += d;
    }
    cout << ans;
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