// https://www.e-olymp.com/ru/problems/43
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    float k, n, m, d, s;
    cin >> k >> n >> m >> d;
    s = (d * k * n * m) / (k * n * m - k * m - k * n - m * n);
    if((1 / k + 1 / n + 1 / m >= 1) || (floor(s / k) != s / k || floor(s / n) != s / n || floor(s / m) != s / m) || !(floor(s) == s))
        cout << "-1";
    else
        cout << s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}