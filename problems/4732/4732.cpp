//https://www.e-olymp.com/ru/problems/4732
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n;
    cin >> n;
    ll ppre = 1, pre = 1;
    for (int i = 2; i <= 2 * 10e9; i++)
    {
        ll cur = ppre + pre;
        if (cur == n)
        {
            cout << i << endl;
            break;
        }
        ppre = pre;
        pre = cur;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}