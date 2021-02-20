//https://www.e-olymp.com/ru/problems/125
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);
    ll sum = 0;
    int a, b, c;
    cin >> a >> b >> c;

    sum = -(a * 60 * 60 + b * 60 + c);
    cin >> a >> b >> c;
    sum += a * 60 * 60 + b * 60 + c;


    cout << sum / (60 * 60) << " " << (sum % (60 * 60)) / 60 << " " << sum % 60 << endl;

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