//https://www.e-olymp.com/ru/problems/8878
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    cout.setf(std::ios::fixed);
    cout.precision(0);

    ld n;
    cin >> n;
    ld ans = log10(n);


    cout << (ans == trunc(ans) ? to_string(ll(ans)) : "No") << endl;


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