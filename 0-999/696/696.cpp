//https://www.e-olymp.com/ru/problems/696
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int a, b, c;
    cin >> a >> b >> c;

    bool reverse = a > b;
    if(a > b) swap(a, b);

    int x, y;
    y = c / b;
    for(int i = y; y >= 0; y--)
    {
        ld k = 1.0 * (c - y * b) / a;
        if(floor(k) == k)
        {
            cout << (reverse ? y : int(k) ) << " " << (reverse ? int(k) : y );
            return;
        }
    }
    cout << "Impossible";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}