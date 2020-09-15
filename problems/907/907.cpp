//https://www.e-olymp.com/ru/problems/907
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    bool success = false;
    cout.setf(ios::fixed);
    cout.precision(2);

    for (int i = 0; i < n && !success;i++)
    {
        ld cur;
        cin >> cur;
        if (cur <= 2.5)
        {
            cout << i + 1 << " " << cur << endl;
            success = true;
        }
    }

    if (!success)
        cout << "Not Found" << endl;
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
