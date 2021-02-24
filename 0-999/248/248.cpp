//https://www.e-olymp.com/ru/problems/248
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(0);

    ll list = 0, iar = 0, sum = 0;
    cin >> iar;
    iar = abs(iar);
    for (int i = 1; i <= iar; i++)
    {
        list = list + 2;
        sum = list + sum;
    }
    sum += 1;
    cout << sum;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}