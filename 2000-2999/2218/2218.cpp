//https://www.e-olymp.com/ru/problems/2218
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, a = 0, b = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if(cur == 0)
            a++;
        else if(cur == 1)
            b++;
    }
    cout << min(a, b) << endl;

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