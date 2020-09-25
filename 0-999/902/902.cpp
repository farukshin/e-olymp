//https://www.e-olymp.com/ru/problems/902
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    if (n <= 3)
        cout << "Initial" << endl;
    else if (n >= 4 && n <= 6)
        cout << "Average" << endl;
    else if (n >= 7 && n <= 9)
        cout << "Sufficient " << endl;
    else if (n >= 10 && n <= 12)
        cout << "High " << endl;
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
