//https://www.e-olymp.com/ru/problems/8321
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);
    int n;
    cin >> n;
    if (n == 1)
        cout << "1 2 3 4 5 6 7 8 9 10" << endl;
    else if (n == 2)
        cout << "0 1 2 3 4 5 6 7 8 9" << endl;
    else if (n == 3)
        cout << "1 3 5 7 9 11 13 15 17 19" << endl;
    else if (n == 4)
        cout << "2 4 6 8 10 12 14 16 18 20" << endl;
    else if (n == 5)
        cout << "9 8 7 6 5 4 3 2 1 0" << endl;
    else if (n == 6)
        cout << "5 10 15 20 25 30 35 40 45 50" << endl;
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
