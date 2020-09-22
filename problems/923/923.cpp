//https://www.e-olymp.com/ru/problems/923
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(ios::fixed);
    //cout.precision(2);

    int n;
    cin >> n;

    if (n >= 3 && n <= 5)
        cout << "Spring" << endl;
    else if (n >= 6 && n <= 8)
        cout << "Summer" << endl;
    else if (n >= 9 && n <= 11)
        cout << "Autumn " << endl;
    else
        cout << "Winter" << endl;

    //    cout << mp[n] << endl;

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
