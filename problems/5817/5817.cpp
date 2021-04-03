// https://www.e-olymp.com/ru/problems/5817
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    int k = 0;
    string ans = "";

    if((a + b) == c)
        ans = "+", k++;
    if((a - b) == c)
        ans = "-", k++;
    if((a * b) == c)
        ans = "*", k++;
    if(b != 0 && ll(a / b) == c && (a % b) == 0)
        ans = "/", k++;

    cout << (k == 1 ? ans : "Invalid");

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}