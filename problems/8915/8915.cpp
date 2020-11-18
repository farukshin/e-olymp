//https://www.e-olymp.com/ru/problems/8915
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(4);

    int n;
    cin >> n;
    if (n % 2 == 1)
        n--;

    int cur = 0;
    while (cur <= n)
    {
        if (cur % 2 == 1)
            cout << cur << " ";
        cur++;
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