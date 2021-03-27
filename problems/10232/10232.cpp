// https://www.e-olymp.com/ru/problems/10232
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    ll ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            int cur;
            cin >> cur;
            if(i > j) ans += cur;
        }

    cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    solve();
    return 0;
}