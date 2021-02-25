//https://www.e-olymp.com/ru/problems/8319
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int a, b;
    char ch;
    cin >> a >> ch >> b;
    ll ans;
    if(ch == '+')
        ans = a + b;
    else if(ch == '-')
        ans = a - b;
    else if(ch == '/')
        ans = a / b;
    else if(ch == '*')
        ans = a * b;

    cout << ans << endl;





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