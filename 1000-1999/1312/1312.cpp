//https://www.e-olymp.com/ru/problems/1312
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(2);

    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if(a > b) swap(a, b);
    if(a > c) swap(a, c);
    if(b > c) swap(b, c);
    if(x > y) swap(x, y);

    cout << (a <= x && b <= y ? "YES" : "NO") << endl;
}

#include <iostream>

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t;cin >> t;while (t--)solve();

    return 0;
}