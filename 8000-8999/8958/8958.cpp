//https://www.e-olymp.com/ru/problems/8958
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;

    int k = (n % 2 == 0 ? n / 2 : (n - 1) / 2);
    if(n == 1)
        cout << "NO" << endl;
    else
        cout << k << endl;

    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if(i % 2 == 1)
            cout << cur << " ";
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
    //int t; cin >> t; while (t--) solve();

    return 0;
}