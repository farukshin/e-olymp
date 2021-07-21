// https://www.e-olymp.com/ru/problems/6059
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int sm(int n)
{
    int k = (n + 1) / 2;
    int res = k * (2 + 2 * (k - 1)) / 2;
    return res;
}

void solve()
{
    int n;
    cin >> n;

    cout << sm(n) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}