//https://www.e-olymp.com/ru/problems/542
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int e, f, c;
    cin >> e >> f >> c;
    int ans = 0;
    ans += (e + f) / c;
    e = (e + f) % c, f = 0;
    e += ans;


    while(true)
    {
        if(e < c)
            break;
        int cur = e / c;
        e = e % c + cur;
        ans += cur;
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}