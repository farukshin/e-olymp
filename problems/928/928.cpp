//https://www.e-olymp.com/ru/problems/928
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
    int min = 105, max = -105;
    while (n--) {
        int a;
        cin >> a;
        if (a > max)
            max = a;
        if (a < min)
            min = a;
    }
    cout << max + min << endl;
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
