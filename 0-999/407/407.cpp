//https://www.e-olymp.com/ru/problems/407
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        int cur;
        cin >> cur;
        if (cur % 3 == 0)
            cout << "GCV" << endl;
        else if (cur % 3 == 1)
            cout << "VGC" << endl;
        else if (cur % 3 == 2)
            cout << "CVG" << endl;
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
